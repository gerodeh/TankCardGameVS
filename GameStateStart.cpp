  #include "GameStateStart.h"

//
///
///
///Main menu
///
///
//

void GameStateStart::initGui()
{
    ///
    ///Texts
    ///
    #pragma region Texts

    m_headerText = std::make_shared<sf::Text>
    (
        sf::String("Tank Card Game"), // string
        m_game->m_font,               // font
        45                            // char size
    );
    m_headerText->setFillColor(sf::Color::Black);
    m_headerText->setOutlineColor(sf::Color::White);
    m_headerText->setOutlineThickness(3);
    setOriginByAlignment(*m_headerText, Alignment::Top);
    setPositionByAlignment(*m_headerText, m_game->m_window, Alignment::Top, 0, 50);

    #pragma endregion
    ///
    ///Buttons
    /// 
    #pragma region Buttons

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),
        sf::String(L"Играть"),
        sf::Vector2f(0,0),
        sf::String("Button_Start")
    ));
    m_buttons[0]->setFont(m_game->m_font);
    m_buttons[0]->setCharacterSize(35);
    m_buttons[0]->setOrigin(Alignment::Center);
    m_buttons[0]->setPosition(Alignment::Center, m_game->m_window);
    m_buttons[0]->setRectFillColor(sf::Color::White);
    m_buttons[0]->setRectOutlineColor(sf::Color::Black);
    m_buttons[0]->setRectOutlineThickness(1.7f);

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),
        sf::String(L"Настройки"),
        sf::Vector2f(0, 0),
        sf::String("Button_Settings")
    ));
    m_buttons[1]->setFont(m_game->m_font);
    m_buttons[1]->setCharacterSize(35);
    m_buttons[1]->setOrigin(Alignment::Center);
    m_buttons[1]->setPosition(Alignment::Center, m_game->m_window, 0, 54);
    m_buttons.back()->setRectFillColor(sf::Color::White);
    m_buttons.back()->setRectOutlineColor(sf::Color::Black);
    m_buttons.back()->setRectOutlineThickness(1.7f);

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),
        sf::String(L"Справочник"),
        sf::Vector2f(0, 0),
        sf::String("Button_Tutorial")
    ));
    m_buttons[2]->setFont(m_game->m_font);
    m_buttons[2]->setCharacterSize(35);
    m_buttons[2]->setOrigin(Alignment::Center);
    m_buttons[2]->setPosition(Alignment::Center, m_game->m_window, 0, 108);
    m_buttons.back()->setRectFillColor(sf::Color::White);
    m_buttons.back()->setRectOutlineColor(sf::Color::Black);
    m_buttons.back()->setRectOutlineThickness(1.7f);

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),
        sf::String(L"Выход"),
        sf::Vector2f(0, 0),
        sf::String("Button_Exit")
    ));
    m_buttons[3]->setFont(m_game->m_font);
    m_buttons[3]->setCharacterSize(35);
    m_buttons[3]->setOrigin(Alignment::Center);
    m_buttons[3]->setPosition(Alignment::Center, m_game->m_window, 0, 162);
    m_buttons.back()->setRectFillColor(sf::Color::White);
    m_buttons.back()->setRectOutlineColor(sf::Color::Black);
    m_buttons.back()->setRectOutlineThickness(1.7f);

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(60, 50),
        sf::String(L"Rus"),
        sf::Vector2f(0, 0),
        sf::String("Button_Language")
    ));
    m_buttons[4]->setFont(m_game->m_font);
    m_buttons[4]->setCharacterSize(25);
    m_buttons[4]->setRectFillColor(sf::Color(180, 0, 0));
    m_buttons[4]->setOrigin(Alignment::BottomRight);
    m_buttons[4]->setPosition(Alignment::BottomRight, m_game->m_window);
    m_buttons.back()->setRectFillColor(sf::Color::White);
    m_buttons.back()->setRectOutlineColor(sf::Color::Black);
    m_buttons.back()->setRectOutlineThickness(1.7f);

    #pragma endregion
}

void GameStateStart::init()
{

}

void GameStateStart::draw(const float dt)
{
    m_game->m_window.setView(m_view);
    
    m_game->m_window.draw(*m_headerText);

    for (const auto& button : m_buttons)
    {
        m_game->m_window.draw(*button);
    }
}

void GameStateStart::update(const float dt)
{
    m_view.setSize(m_game->m_window.getSize().x, m_game->m_window.getSize().y);
    m_view.setCenter(m_game->m_window.getSize().x * 0.5f, m_game->m_window.getSize().y * 0.5f);

    ///constant save of GUI position
    for (const auto& button : m_buttons)
    {
        //if (button->getName() == std::string("Button_Settings")) { button->setPosition(Alignment::Center, m_game->m_window, 0, 50); }
        //if (button->getName() == "Tutorial") { button->SetPosition(GuiComponent::componentAlignment::Center); button->Move(0, 100); }
        //if (button->getName() == "Exit") { button->SetPosition(GuiComponent::componentAlignment::Center); button->Move(0, 150); }
        //if (button->getName() == "Language") { button->SetPosition(GuiComponent::componentAlignment::BottomRight); }
    }
}

void GameStateStart::handleInput(const float dt)
{
    sf::Event event;
    while (m_game->m_window.pollEvent(event))
    {
        switch (event.type)
        {
            case sf::Event::Closed:
                m_game->m_window.close();
                break; // End of Event::Closed

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
                break; // End of Event::Resized
     
        } // End of switch

        for (const auto& btn : m_buttons) // Start of handling buttons
        {
            if (btn->isPressed(event, m_game->m_window))
            {
                if (btn->getName() == std::string("Button_Start")) { m_game->pushState(new GameStateCustomization(m_game)); }
                if (btn->getName() == std::string("Button_Exit")) { m_game->m_window.close(); }
                if (btn->getName() == std::string("Button_Settings")) { m_game->pushState(new GameStateSettings(m_game)); }
                if (btn->getName() == std::string("Button_Tutorial")) { m_game->pushState(new GameStateTutorial(m_game)); }

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

    }// End of while cycle

} /// End of handleInput fuction

GameStateStart::GameStateStart(Game* game)
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

GameStateStart::~GameStateStart() {}
