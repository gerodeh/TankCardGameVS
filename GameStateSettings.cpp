#include "GameStateSettings.h"

//
///
///
///Settings
///
///
//

void GameStateSettings::initGui()
{
    ///
    ///Texts
    /// 
    #pragma region Texts

    m_texts.push_back(std::make_shared<sf::Text>
    (
        sf::String(L"Настройки"),     // string
        m_game->m_font,               // font
        30                            // char size
    ));
    m_texts[0]->setFillColor(sf::Color::Black);
    setOriginByAlignment(*m_texts[0], Alignment::Top);
    setPositionByAlignment(*m_texts[0], m_game->m_window, Alignment::Top, 0, 20);

    #pragma endregion
    ///
    ///Buttons
    /// 
    #pragma region Buttons

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),
        sf::String(L"Вернуться"),
        sf::Vector2f(0, 0),
        sf::String("Button_Return")
    ));
    m_buttons[0]->setRectFillColor(sf::Color::White);
    m_buttons[0]->setFont(m_game->m_font);
    m_buttons[0]->setCharacterSize(35);
    m_buttons[0]->setOrigin(Alignment::Bottom);
    m_buttons[0]->setPosition(Alignment::Bottom, m_game->m_window, 0, -20);
    m_buttons.back()->setRectOutlineColor(sf::Color::Black);
    m_buttons.back()->setRectOutlineThickness(2);

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),
        sf::String(L"Полноэкранный режим"),
        sf::Vector2f(0, 0),
        sf::String("Button_Fullscreen")
    ));
    m_buttons[1]->setRectFillColor(sf::Color::White);
    m_buttons[1]->setFont(m_game->m_font);
    m_buttons[1]->setCharacterSize(20);
    m_buttons[1]->setOrigin(Alignment::Center);
    m_buttons[1]->setPosition(Alignment::Center, m_game->m_window);
    m_buttons.back()->setRectOutlineColor(sf::Color::Black);
    m_buttons.back()->setRectOutlineThickness(2);

    #pragma endregion
}

void GameStateSettings::init()
{

}

void GameStateSettings::draw(const float dt)
{
    m_game->m_window.setView(m_view);

    for (const auto& text : m_texts)
    {
        m_game->m_window.draw(*text);
    }
    for (const auto& button : m_buttons)
    {
        m_game->m_window.draw(*button);
    }
}

void GameStateSettings::update(const float dt)
{
    m_view.setSize(m_game->m_window.getSize().x, m_game->m_window.getSize().y);
    m_view.setCenter(m_game->m_window.getSize().x * 0.5f, m_game->m_window.getSize().y * 0.5f);

    /*for (const auto& text : m_texts)
    {
        if (text->NAME == "TopLabel") { comp->SetPosition(GuiComponent::componentAlignment::Top); comp->Move(0, 20); }

    }
    for (auto comp : buttons)
    {
        if (comp->NAME == "Return") { comp->SetPosition(GuiComponent::componentAlignment::Bottom); comp->Move(0, -20); }
        if (comp->NAME == "Fullscreen") { comp->SetPosition(GuiComponent::componentAlignment::Center); comp->Move(0, 0); }
    }*/
    ///Button Highlight
}

void GameStateSettings::handleInput(const float dt)
{
    sf::Event event;
    while (m_game->m_window.pollEvent(event))
    {
        switch (event.type)
        {
            case sf::Event::Closed:
                m_game->m_window.close();
                break;

            case sf::Event::Resized:
                if (event.size.width >= m_game->standartWsizeX && event.size.height >= m_game->standartWsizeY)
                {
                    m_view.setSize(event.size.width, event.size.height);
                    m_view.setCenter(event.size.width * 0.5f, event.size.height * 0.5f);
                }
                else
                {
                    m_game->m_window.setSize(sf::Vector2u(m_game->standartWsizeX, m_game->standartWsizeY));
                    m_game->m_window.setPosition(sf::Vector2i((int)((m_game->scrXmetric * 0.5f) - m_game->standartWsizeX * 0.5f), (int)((m_game->scrYmetric * 0.5f) - m_game->standartWsizeY * 0.5f)));
                    m_view.setCenter(sf::Vector2f(m_game->standartWsizeX * 0.5f, m_game->standartWsizeY * 0.5f));
                }
                std::cout << m_game->m_window.getSize().x << " " << m_game->m_window.getSize().y << std::endl;
                break;
                    
        } // End of switch

        for (const auto& btn : m_buttons) // Start of handling buttons
        {
            if (btn->isPressed(event, m_game->m_window))
            {          
                if (btn->getName() == std::string("Button_Return")) { m_game->popState(); }
                if (btn->getName() == std::string("Button_Fullscreen") && m_game->m_fullscreen == false) { setFullscreenMode(); }
                else if (btn->getName() == std::string("Button_Fullscreen") && m_game->m_fullscreen == true) { cancelFullscreenMode(); }

            } // End of checking if button is pressed

            if (btn->isPointedByMouse(m_game->m_window))
            {
                btn->highlight(sf::Color
                (
                    btn->getRectFillColor().r - 50,
                    btn->getRectFillColor().g - 50,
                    btn->getRectFillColor().b - 50,
                    btn->getRectFillColor().a
                ));
            }
            else
            {
                btn->disableHighlight();
            } // End of highlighting buttons

        } // End of handling buttons

    } // End of while cycle

} // End of handleInput function

void GameStateSettings::setFullscreenMode()
{
    m_game->m_window.close();
    m_game->m_window.create(sf::VideoMode(m_game->scrXmetric, m_game->scrYmetric), "Tank Card Game", sf::Style::Fullscreen);
    m_game->m_fullscreen = true;
    m_game->m_window.setFramerateLimit(60);
}

void GameStateSettings::cancelFullscreenMode()
{
    m_game->m_window.close();
    m_game->m_window.create(sf::VideoMode(950, 750), "Tank Card Game", sf::Style::Default);
    m_game->m_fullscreen = false;
    m_game->m_window.setFramerateLimit(60);
}

GameStateSettings::GameStateSettings(Game* game)
{
    m_game = game;

    sf::Vector2f pos = sf::Vector2f(m_game->m_window.getSize());

    m_view.setSize(pos);

    pos *= 0.5f;

    m_view.setCenter(pos);

    init();
    initGui();

    m_backgrdColor = sf::Color(237, 119, 41);
}

GameStateSettings::~GameStateSettings() { std::cout << "Destructor of GameStateSettings" << std::endl; }