#include "GameStateCustomization.h"

//
///
///
///Deck builder menu
///
///
//

void GameStateCustomization::initGui()
{
    std::vector<std::shared_ptr<gui::Label>> tmplabels;
    std::vector<std::shared_ptr<gui::Button>> tmpbuttons;

///Scenes:

#pragma region MainScene

    #pragma region Labels

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Построение колоды и настройка игры"),  // string
        30,                                                 // char size
        sf::String("TopLabel")                              // name
    ));
    tmplabels[0]->setFont(m_game->m_font);
    tmplabels[0]->setTextColor(sf::Color::Black);
    tmplabels[0]->setTextOutlineColor(sf::Color::White);
    tmplabels[0]->setTextOutlineThickness(3);
    tmplabels[0]->alignText(Alignment::Center);
    tmplabels[0]->setOrigin(Alignment::Top);
    tmplabels[0]->setPosition(Alignment::Top,m_game->m_window, 0, 40);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Колода 1-ого игрока"),  // string
        20,                                  // char size
        sf::String("1st Deck Label")         // name
    ));
    tmplabels[1]->setFont(m_game->m_font);
    tmplabels[1]->setTextColor(sf::Color::Black);
    tmplabels[1]->setTextOutlineColor(sf::Color::White);
    tmplabels[1]->setTextOutlineThickness(3);
    tmplabels[1]->alignText(Alignment::Left);
    tmplabels[1]->backIsShown(true);
    tmplabels[1]->setBackColor(sf::Color::White);
    tmplabels[1]->setOrigin(Alignment::Left);
    tmplabels[1]->setPosition(Alignment::Left, m_game->m_window, 60, -200);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Колода 2-ого игрока"),  // string
        20,                                  // char size
        sf::String("2nd Deck Label")         // name
    ));
    tmplabels[2]->setFont(m_game->m_font);
    tmplabels[2]->setTextColor(sf::Color::Black);
    tmplabels[2]->setTextOutlineColor(sf::Color::White);
    tmplabels[2]->setTextOutlineThickness(3);
    tmplabels[2]->alignText(Alignment::Right);
    tmplabels[2]->backIsShown(true);
    tmplabels[2]->setBackColor(sf::Color::White);

    tmplabels[2]->setOrigin(Alignment::Right);
    tmplabels[2]->setPosition(Alignment::Right, m_game->m_window, -60, -200);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Макс. кол-во карт в колоде:"),  // string
        20,                                          // char size
        sf::String("DeckSizeLabel")                  // name
    ));
    tmplabels[3]->setFont(m_game->m_font);
    tmplabels[3]->setTextColor(sf::Color::Black);
    tmplabels[3]->setTextOutlineColor(sf::Color::White);
    tmplabels[3]->setTextOutlineThickness(3);
    tmplabels[3]->setOrigin(Alignment::Center);
    tmplabels[3]->setPosition(Alignment::Center, m_game->m_window, 0, -50);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Hotseat:"),                     // string
        20,                                          // char size
        sf::String("PlayerOrAILabel")                // name
    ));
    tmplabels[4]->setFont(m_game->m_font);
    tmplabels[4]->setTextColor(sf::Color::Black);
    tmplabels[4]->setTextOutlineColor(sf::Color::White);
    tmplabels[4]->setTextOutlineThickness(3);
    tmplabels[4]->setOrigin(Alignment::Center);
    tmplabels[4]->setPosition(Alignment::Center, m_game->m_window, -20, 70);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"0"),                            // string
        30,                                          // char size
        sf::String("1PDeckSizeLabelNUM")             // name
    ));
    tmplabels[5]->setFont(m_game->m_font);
    tmplabels[5]->setTextColor(sf::Color::Black);
    tmplabels[5]->setTextOutlineColor(sf::Color::White);
    tmplabels[5]->setTextOutlineThickness(3);
    tmplabels[5]->alignText(Alignment::Center);
    tmplabels[5]->setOrigin(Alignment::Center);
    tmplabels[5]->setPosition(Alignment::Left, m_game->m_window, 200, 199);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"0"),                            // string
        30,                                          // char size
        sf::String("2PDeckSizeLabelNUM")             // name
    ));
    tmplabels[6]->setFont(m_game->m_font);
    tmplabels[6]->setTextColor(sf::Color::Black);
    tmplabels[6]->setTextOutlineColor(sf::Color::White);
    tmplabels[6]->setTextOutlineThickness(3);
    tmplabels[6]->alignText(Alignment::Center);
    tmplabels[6]->setOrigin(Alignment::Center);
    tmplabels[6]->setPosition(Alignment::Right, m_game->m_window, -100, 199);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Карт:"),                        // string
        30,                                          // char size
        sf::String("1PDeckSizeLabel")                // name
    ));
    tmplabels[7]->setFont(m_game->m_font);
    tmplabels[7]->setTextColor(sf::Color::Black);
    tmplabels[7]->setTextOutlineColor(sf::Color::White);
    tmplabels[7]->setTextOutlineThickness(3);
    tmplabels[7]->alignText(Alignment::Center);
    tmplabels[7]->setOrigin(Alignment::Center);
    tmplabels[7]->setPosition(Alignment::Left, m_game->m_window, 140, 200);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Карт:"),                        // string
        30,                                          // char size
        sf::String("2PDeckSizeLabel")                // name
    ));
    tmplabels[8]->setFont(m_game->m_font);
    tmplabels[8]->setTextColor(sf::Color::Black);
    tmplabels[8]->setTextOutlineColor(sf::Color::White);
    tmplabels[8]->setTextOutlineThickness(3);
    tmplabels[8]->alignText(Alignment::Center);
    tmplabels[8]->setOrigin(Alignment::Center);
    tmplabels[8]->setPosition(Alignment::Right, m_game->m_window, -160, 200);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Макс. кол-во карт меньше 12!"), // string
        20,                                          // char size
        sf::String("WarningLabel")                   // name
    ));
    tmplabels[9]->setFont(m_game->m_font);
    tmplabels[9]->setTextColor(sf::Color::Black);
    tmplabels[9]->setTextOutlineColor(sf::Color::White);
    tmplabels[9]->setTextOutlineThickness(3);
    tmplabels[9]->setOrigin(Alignment::BottomRight);
    tmplabels[9]->setPosition(Alignment::BottomRight, m_game->m_window, -10, -100);

    m_labels.push_back(tmplabels);

    tmplabels.clear();

    #pragma endregion

    #pragma region Buttons

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),         // size
        sf::String(L"Вернуться"),      // string
        sf::Vector2f(0,0),             // pos
        sf::String("Return")           // name
    ));
    tmpbuttons[0]->setFont(m_game->m_font);
    tmpbuttons[0]->setCharacterSize(35);
    tmpbuttons[0]->setOrigin(Alignment::BottomLeft);
    tmpbuttons[0]->setPosition(Alignment::BottomLeft, m_game->m_window, 10, -10);
    tmpbuttons[0]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(220, 50),         // size
        sf::String(L"Играть"),         // string
        sf::Vector2f(0, 0),            // pos
        sf::String("Button_Start")      // name
    ));
    tmpbuttons[1]->setFont(m_game->m_font);
    tmpbuttons[1]->setCharacterSize(35);
    tmpbuttons[1]->setOrigin(Alignment::BottomRight);
    tmpbuttons[1]->setPosition(Alignment::BottomRight, m_game->m_window, -10, -10);
    tmpbuttons[1]->setRectFillColor(sf::Color(32, 176, 39));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(155, 300),        // size
        sf::String(L"?"),              // string
        sf::Vector2f(0, 0),            // pos
        sf::String("1st Deck")         // name
    ));
    tmpbuttons[2]->setFont(m_game->m_font);
    tmpbuttons[2]->setCharacterSize(60);
    tmpbuttons[2]->setOrigin(Alignment::Left);
    tmpbuttons[2]->setPosition(Alignment::Left, m_game->m_window, 80, 0);
    tmpbuttons[2]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(155, 300),        // size
        sf::String(L"?"),              // string
        sf::Vector2f(0, 0),            // pos
        sf::String("2nd Deck")         // name
    ));
    tmpbuttons[3]->setFont(m_game->m_font);
    tmpbuttons[3]->setCharacterSize(60);
    tmpbuttons[3]->setOrigin(Alignment::Right);
    tmpbuttons[3]->setPosition(Alignment::Right, m_game->m_window, -80, 0);
    tmpbuttons[3]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(50, 50),        // size
        sf::String(""),              // string
        sf::Vector2f(0, 0),          // pos
        sf::String("PlayerOrAI")     // name
    ));
    tmpbuttons[4]->setFont(m_game->m_font);
    tmpbuttons[4]->setCharacterSize(45);
    tmpbuttons[4]->setOrigin(Alignment::Right);
    tmpbuttons[4]->setPosition(Alignment::Center, m_game->m_window, 100, 70);
    tmpbuttons[4]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons[4]->setRectOutlineColor(sf::Color::Black);
    tmpbuttons[4]->setRectOutlineThickness(2);
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    m_buttons.push_back(tmpbuttons);

    tmpbuttons.clear();

    #pragma endregion

    m_textbox = std::make_shared<gui::TextBox>
    (
        20,
        sf::Color::Black,
        false
    );
    m_textbox->setSize(sf::Vector2f(100, 40));
    m_textbox->setCharacterSize(20);
    m_textbox->setFont(m_game->m_font);
    m_textbox->setRectOutlineColor(sf::Color::Black);
    m_textbox->setRectOutlineThickness(2);
    m_textbox->backIsShown(false);
    m_textbox->m_enterUndoSelect = true;
    m_textbox->setTextColor(sf::Color::Black);
    m_textbox->setCharacterSize(30);
    m_textbox->setOrigin(Alignment::Center);
    m_textbox->setPosition(Alignment::Center, m_game->m_window, 0,0);
    m_textbox->setLimit(true, 2);
    m_textbox->m_onlyNumbers = true;
    m_textbox->setString("12");


#pragma endregion

#pragma region FirstGeneralDeckScene

    #pragma region Labels

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Все карты"),  // string
        m_game->m_font,            // font
        40,                        // char size
        sf::String("TopLabel")     // name
    ));
    tmplabels[0]->setTextColor(sf::Color::Black);
    tmplabels[0]->setTextOutlineColor(sf::Color::White);
    tmplabels[0]->setTextOutlineThickness(3);
    tmplabels[0]->alignText(Alignment::Top);
    tmplabels[0]->setOrigin(Alignment::Top);
    tmplabels[0]->setPosition(Alignment::Top, m_game->m_window, 0, 20);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Страница:"),  // string
        m_game->m_font,            // font
        30,                        // char size
        sf::String("PageLabel")    // name
    ));
    tmplabels[1]->setTextColor(sf::Color::Black);
    tmplabels[1]->setTextOutlineColor(sf::Color::White);
    tmplabels[1]->setTextOutlineThickness(3);
    tmplabels[1]->setOrigin(Alignment::Top);
    tmplabels[1]->setPosition(Alignment::Top, m_game->m_window, -70, 120);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String("1"),           // string
        m_game->m_font,            // font
        30,                        // char size
        sf::String("CurrentPage")  // name
    ));
    tmplabels[2]->setTextColor(sf::Color::Black);
    tmplabels[2]->setTextOutlineColor(sf::Color::White);
    tmplabels[2]->setTextOutlineThickness(3);
    tmplabels[2]->setOrigin(Alignment::Top);
    tmplabels[2]->setPosition(Alignment::Top, m_game->m_window, 40, 121);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String("/"),           // string
        m_game->m_font,            // font
        30,                        // char size
        sf::String("Slash")        // name
    ));
    tmplabels[3]->setTextColor(sf::Color::Black);
    tmplabels[3]->setTextOutlineColor(sf::Color::White);
    tmplabels[3]->setTextOutlineThickness(3);
    tmplabels[3]->setOrigin(Alignment::Top);
    tmplabels[3]->setPosition(Alignment::Top, m_game->m_window, 80, 120);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String("1"),           // string
        m_game->m_font,            // font
        30,                        // char size
        sf::String("MaxPage")      // name
    ));
    tmplabels[4]->setTextColor(sf::Color::Black);
    tmplabels[4]->setTextOutlineColor(sf::Color::White);
    tmplabels[4]->setTextOutlineThickness(3);
    tmplabels[4]->alignText(Alignment::Top);
    tmplabels[4]->setOrigin(Alignment::Top);
    tmplabels[4]->setPosition(Alignment::Top, m_game->m_window, 120, 121);
    tmplabels[4]->setString(sf::String(std::to_string(m_maxPage)));

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"ЛКМ - взять карту в колоду\nПКМ - войти в режим осмотра карты"),   // string
        m_game->m_font,                                                                 // font
        15,                                                                             // char size
        sf::String("Hint")                                                              // name
    ));
    tmplabels[5]->setTextColor(sf::Color::Black);
    tmplabels[5]->setTextOutlineColor(sf::Color::White);
    tmplabels[5]->setTextOutlineThickness(3);
    tmplabels[5]->setOrigin(Alignment::Bottom);
    tmplabels[5]->setPosition(Alignment::Bottom, m_game->m_window, 0, -100);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String("0"),                      // string
        m_game->m_font,                       // font
        30,                                   // char size
        sf::String("1PDeckSizeLabelNUM")      // name
    ));
    tmplabels[6]->setTextColor(sf::Color::Black);
    tmplabels[6]->setTextOutlineColor(sf::Color::White);
    tmplabels[6]->setTextOutlineThickness(3);
    tmplabels[6]->setOrigin(Alignment::TopLeft);
    tmplabels[6]->setPosition(Alignment::TopLeft, m_game->m_window, 130, 22);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Карт:"),                 // string
        m_game->m_font,                       // font
        30,                                   // char size
        sf::String("1PDeckSizeLabel")         // name
    ));
    tmplabels[7]->setTextColor(sf::Color::Black);
    tmplabels[7]->setTextOutlineColor(sf::Color::White);
    tmplabels[7]->setTextOutlineThickness(3);
    tmplabels[7]->setOrigin(Alignment::TopLeft);
    tmplabels[7]->setPosition(Alignment::TopLeft, m_game->m_window, 20, 20);

    m_labels.push_back(tmplabels);

    tmplabels.clear();

    #pragma endregion

    #pragma region Buttons

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),         // size
        sf::String(L"Вернуться"),      // string
        sf::Vector2f(0, 0),            // pos
        sf::String("ReturnMain")       // name
    ));
    tmpbuttons[0]->setFont(m_game->m_font);
    tmpbuttons[0]->setCharacterSize(35);;
    tmpbuttons[0]->setOrigin(Alignment::BottomLeft);
    tmpbuttons[0]->setPosition(Alignment::BottomLeft, m_game->m_window, 10, -10);
    tmpbuttons[0]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),                   // size
        sf::String(L"Колода 1-ого игрока"),      // string
        sf::Vector2f(0, 0),                      // pos
        sf::String("FirstPlayerDeck")            // name
    ));
    tmpbuttons[1]->setFont(m_game->m_font);
    tmpbuttons[1]->setCharacterSize(25);;
    tmpbuttons[1]->setOrigin(Alignment::BottomRight);
    tmpbuttons[1]->setPosition(Alignment::BottomRight, m_game->m_window, -10, -10);
    tmpbuttons[1]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(70, 300),                   // size
        sf::String(L">"),                        // string
        sf::Vector2f(0, 0),                      // pos
        sf::String("Forward")                    // name
    ));
    tmpbuttons[2]->setFont(m_game->m_font);
    tmpbuttons[2]->setCharacterSize(35);;
    tmpbuttons[2]->setOrigin(Alignment::Right);
    tmpbuttons[2]->setPosition(Alignment::Center, m_game->m_window, 400, 0);
    tmpbuttons[2]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(70, 300),                   // size
        sf::String(L"<"),                        // string
        sf::Vector2f(0, 0),                      // pos
        sf::String("Back")                       // name
    ));
    tmpbuttons[3]->setFont(m_game->m_font);
    tmpbuttons[3]->setCharacterSize(35);;
    tmpbuttons[3]->setOrigin(Alignment::Left);
    tmpbuttons[3]->setPosition(Alignment::Center, m_game->m_window, -400, 0);
    tmpbuttons[3]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    m_buttons.push_back(tmpbuttons);

    tmpbuttons.clear();

    #pragma endregion

#pragma endregion

#pragma region SecondGeneralDeckScene

    #pragma region Labels

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Все карты"),  // string
        m_game->m_font,            // font
        40,                        // char size
        sf::String("TopLabel")     // name
    ));
    tmplabels[0]->setTextColor(sf::Color::Black);
    tmplabels[0]->setTextOutlineColor(sf::Color::White);
    tmplabels[0]->setTextOutlineThickness(3);
    tmplabels[0]->setOrigin(Alignment::Top);
    tmplabels[0]->setPosition(Alignment::Top, m_game->m_window, 0, 20);

    tmplabels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Страница:"),  // string
        m_game->m_font,            // font
        30,                        // char size
        sf::String("PageLabel")    // name
    ));
    tmplabels[1]->setTextColor(sf::Color::Black);
    tmplabels[1]->setTextOutlineColor(sf::Color::White);
    tmplabels[1]->setTextOutlineThickness(3);
    tmplabels[1]->setOrigin(Alignment::Top);
    tmplabels[1]->setPosition(Alignment::Top, m_game->m_window, -70, 120);

    tmplabels.push_back(std::make_shared<gui::Label>
        (
            sf::String("1"),           // string
            m_game->m_font,            // font
            30,                        // char size
            sf::String("CurrentPage")  // name
        ));
    tmplabels[2]->setTextColor(sf::Color::Black);
    tmplabels[2]->setTextOutlineColor(sf::Color::White);
    tmplabels[2]->setTextOutlineThickness(3);
    tmplabels[2]->setOrigin(Alignment::Top);
    tmplabels[2]->setPosition(Alignment::Top, m_game->m_window, 40, 121);

    tmplabels.push_back(std::make_shared<gui::Label>
        (
            sf::String("/"),           // string
            m_game->m_font,            // font
            30,                        // char size
            sf::String("Slash")        // name
        ));
    tmplabels[3]->setTextColor(sf::Color::Black);
    tmplabels[3]->setTextOutlineColor(sf::Color::White);
    tmplabels[3]->setTextOutlineThickness(3);
    tmplabels[3]->setOrigin(Alignment::Top);
    tmplabels[3]->setPosition(Alignment::Top, m_game->m_window, 80, 120);

    tmplabels.push_back(std::make_shared<gui::Label>
        (
            sf::String("1"),           // string
            m_game->m_font,            // font
            30,                        // char size
            sf::String("MaxPage")      // name
        ));
    tmplabels[4]->setTextColor(sf::Color::Black);
    tmplabels[4]->setTextOutlineColor(sf::Color::White);
    tmplabels[4]->setTextOutlineThickness(3);
    tmplabels[4]->setOrigin(Alignment::Top);
    tmplabels[4]->setPosition(Alignment::Top, m_game->m_window, 120, 121);
    tmplabels[4]->setString(sf::String(std::to_string(m_maxPage)));

    tmplabels.push_back(std::make_shared<gui::Label>
        (
            sf::String(L"ЛКМ - взять карту в колоду\nПКМ - войти в режим осмотра карты"),   // string
            m_game->m_font,                                                                 // font
            15,                                                                             // char size
            sf::String("Hint")                                                              // name
        ));
    tmplabels[5]->setTextColor(sf::Color::Black);
    tmplabels[5]->setTextOutlineColor(sf::Color::White);
    tmplabels[5]->setTextOutlineThickness(3);
    tmplabels[5]->setOrigin(Alignment::Bottom);
    tmplabels[5]->setPosition(Alignment::Bottom, m_game->m_window, 0, -100);

    tmplabels.push_back(std::make_shared<gui::Label>
        (
            sf::String("0"),                      // string
            m_game->m_font,                       // font
            30,                                   // char size
            sf::String("2PDeckSizeLabelNUM")      // name
        ));
    tmplabels[6]->setTextColor(sf::Color::Black);
    tmplabels[6]->setTextOutlineColor(sf::Color::White);
    tmplabels[6]->setTextOutlineThickness(3);
    tmplabels[6]->setOrigin(Alignment::TopLeft);
    tmplabels[6]->setPosition(Alignment::TopLeft, m_game->m_window, 130, 22);

    tmplabels.push_back(std::make_shared<gui::Label>
        (
            sf::String(L"Карт:"),                 // string
            m_game->m_font,                       // font
            30,                                   // char size
            sf::String("2PDeckSizeLabel")         // name
        ));
    tmplabels[7]->setTextColor(sf::Color::Black);
    tmplabels[7]->setTextOutlineColor(sf::Color::White);
    tmplabels[7]->setTextOutlineThickness(3);
    tmplabels[7]->setOrigin(Alignment::TopLeft);
    tmplabels[7]->setPosition(Alignment::TopLeft, m_game->m_window, 20, 20);

    m_labels.push_back(tmplabels);

    tmplabels.clear();

    #pragma endregion

    #pragma region Buttons

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),         // size
        sf::String(L"Вернуться"),      // string
        sf::Vector2f(0, 0),            // pos
        sf::String("ReturnMain2")       // name
    ));
    tmpbuttons[0]->setFont(m_game->m_font);
    tmpbuttons[0]->setCharacterSize(35);;
    tmpbuttons[0]->setOrigin(Alignment::BottomLeft);
    tmpbuttons[0]->setPosition(Alignment::BottomLeft, m_game->m_window, 10, -10);
    tmpbuttons[0]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(300, 50),                   // size
        sf::String(L"Колода 2-ого игрока"),      // string
        sf::Vector2f(0, 0),                      // pos
        sf::String("SecondPlayerDeck")           // name
    ));
    tmpbuttons[1]->setFont(m_game->m_font);
    tmpbuttons[1]->setCharacterSize(25);;
    tmpbuttons[1]->setOrigin(Alignment::BottomRight);
    tmpbuttons[1]->setPosition(Alignment::BottomRight, m_game->m_window, -10, -10);
    tmpbuttons[1]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(70, 300),                   // size
        sf::String(L">"),                        // string
        sf::Vector2f(0, 0),                      // pos
        sf::String("Forward2")                    // name
    ));
    tmpbuttons[2]->setFont(m_game->m_font);
    tmpbuttons[2]->setCharacterSize(35);;
    tmpbuttons[2]->setOrigin(Alignment::Right);
    tmpbuttons[2]->setPosition(Alignment::Center, m_game->m_window, 400, 0);
    tmpbuttons[2]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    tmpbuttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(70, 300),                   // size
        sf::String(L"<"),                        // string
        sf::Vector2f(0, 0),                      // pos
        sf::String("Back2")                       // name
    ));
    tmpbuttons[3]->setFont(m_game->m_font);
    tmpbuttons[3]->setCharacterSize(35);;
    tmpbuttons[3]->setOrigin(Alignment::Left);
    tmpbuttons[3]->setPosition(Alignment::Center, m_game->m_window, -400, 0);
    tmpbuttons[3]->setRectFillColor(sf::Color(255, 255, 255));
    tmpbuttons.back()->setRectOutlineColor(sf::Color::Black);
    tmpbuttons.back()->setRectOutlineThickness(2);

    m_buttons.push_back(tmpbuttons);

    tmpbuttons.clear();

    #pragma endregion

#pragma endregion

}

void GameStateCustomization::init()
{
    float cardspacingX = 9.f;
    float cardspacingY = 4.5f;
    for (const auto& arr : m_generalcards) {
        short i = 0;
        for (const auto& card : arr)
        {
            sf::Vector2f cardsize = card->getSpriteRect().getSize();
            card->setPosition(Alignment::Center, m_game->m_window);
            card->setOrigin(Alignment::Center);
            if (i >= 0 && i <= 3 && card->m_isScaled == false) { card->move(sf::Vector2f(-cardsize.x * 1.5f + cardsize.x * (float)i + cardspacingX * (float)i - cardspacingX * 1.5f, -cardsize.y / 2.f - cardspacingY)); i++; continue; }
            if (i >= 4 && i <= 7 && card->m_isScaled == false) { card->move(sf::Vector2f(-cardsize.x * 1.5f + cardsize.x * ((float)i - 4.f) + cardspacingX * ((float)i - 4.f) - cardspacingX * 1.5f, cardsize.y / 2.f + cardspacingY)); i++; continue; }
        }
    }
    for (const auto& arr : m_generalcards2) {
        short i = 0;
        for (const auto& card : arr)
        {
            sf::Vector2f cardsize = card->getSpriteRect().getSize();
            card->setPosition(Alignment::Center, m_game->m_window);
            card->setOrigin(Alignment::Center);
            if (i >= 0 && i <= 3 && card->m_isScaled == false) { card->move(sf::Vector2f(-cardsize.x * 1.5f + cardsize.x * (float)i + cardspacingX * (float)i - cardspacingX * 1.5f, -cardsize.y / 2.f - cardspacingY)); i++; continue; }
            if (i >= 4 && i <= 7 && card->m_isScaled == false) { card->move(sf::Vector2f(-cardsize.x * 1.5f + cardsize.x * ((float)i - 4.f) + cardspacingX * ((float)i - 4.f) - cardspacingX * 1.5f, cardsize.y / 2.f + cardspacingY)); i++; continue; }
        }
    }
}

void GameStateCustomization::CreateGeneralCards(std::vector<std::vector<std::shared_ptr<Card>>>& _generalcards)
{
    std::vector<std::shared_ptr<Card>> tmpvector;

    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::T_34_76, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::T_34_85, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::IS_2, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::SU_100, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::KV_1, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::LTvz38, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::TigerI, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::Hetzer, m_game));

    _generalcards.push_back(tmpvector);
    tmpvector.clear();

    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::PzIII, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::TigerII, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::IS_1, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::KV_1, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::MS_1, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::SU_152, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::ISU_152, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::Panther, m_game));

    _generalcards.push_back(tmpvector);
    tmpvector.clear();

    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::Lowe, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::MarderI, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::PzI, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::StugIIIG, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::T_34_76, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::T_34_85, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::PzIII, m_game));
    tmpvector.push_back(std::make_shared<Card>(Card::CardNames::Panther, m_game));

    _generalcards.push_back(tmpvector);
    tmpvector.clear();
}

GameStateCustomization::GameStateCustomization(Game* game)
{
    std::srand((unsigned)time(NULL));

    m_game = game;

    sf::Vector2f pos = sf::Vector2f(m_game->m_window.getSize());

    m_view.setSize(pos);

    pos *= 0.5f;

    m_view.setCenter(pos);

    CreateGeneralCards(m_generalcards);
    CreateGeneralCards(m_generalcards2);

    m_maxPage = (int)m_generalcards.size();
    m_currentPage = m_currentPage2 = 1;

    m_currentScene = SceneNum::Main;

    init();
    initGui();

    m_backgrdColor = sf::Color(237, 119, 41);
}

void GameStateCustomization::draw(const float dt)
{
    m_game->m_window.setView(m_view);

    for (const auto& lbl : m_labels[m_currentScene])
    {
        if (lbl->getName() != std::string("WarningLabel")) m_game->m_window.draw(*lbl);
        if (lbl->getName() == std::string("WarningLabel") && m_maxDeckSize < 12) m_game->m_window.draw(*lbl);
    }
    for (const auto& btn : m_buttons[m_currentScene])
    {
        m_game->m_window.draw(*btn);
    }
    if (m_currentScene == SceneNum::Main)
    {
       m_game->m_window.draw(*m_textbox);
    }
    else if (m_currentScene == SceneNum::FirstGeneralDeck)
    {
        for (const auto& card : m_generalcards[m_currentPage - 1])
        {
            if (!m_scaleMode && card->m_isScaled == false) m_game->m_window.draw(*card);
            if (m_scaleMode && card->m_isScaled == true) m_game->m_window.draw(*card);
        }
    }
    else if (m_currentScene == SceneNum::SecondGeneralDeck)
    {
        for (const auto& card : m_generalcards2[m_currentPage2 - 1])
        {
            if (!m_scaleMode && card->m_isScaled == false) m_game->m_window.draw(*card);
            if (m_scaleMode && card->m_isScaled == true) m_game->m_window.draw(*card);
        }
    }
} // End of draw function

void GameStateCustomization::update(const float dt)
{
    m_view.setSize((float)m_game->m_window.getSize().x, (float)m_game->m_window.getSize().y);
    m_view.setCenter(m_game->m_window.getSize().x * 0.5f, m_game->m_window.getSize().y * 0.5f);
}

void GameStateCustomization::handleGeneralDeck(sf::Event& event)
{
    if (m_currentScene == SceneNum::FirstGeneralDeck)
    {
        for (auto& card : m_generalcards[m_currentPage - 1])
        {
            if (card->isPressed(event, m_game->m_window, sf::Mouse::Left) && !m_scaleMode)
            {
                if (!card->m_isSelected)
                {
                    card->m_isSelected = true;
                    card->disableHighlight();
                    card->highlight(sf::Color(62, 82, 224));
                    m_deck1.push_back(std::make_shared<Card>
                    (
                        card->getCardName(),
                        m_game
                    ));
                    card->m_CardPositionInPlayerDeck = (int)m_deck1.size() - 1;
                    m_labels[SceneNum::Main][5]->setString(std::to_string(m_deck1.size()));
                    m_labels[SceneNum::FirstGeneralDeck][6]->setString(std::to_string(m_deck1.size()));
                    std::cout << "the card was added to 1 player deck with this card ID: " << card->m_CardPositionInPlayerDeck << std::endl;
                }
                else
                {
                    card->m_isSelected = false;
                    card->disableHighlight();
                    card->getBackRect().setFillColor(sf::Color(210, 210, 210));
                    auto it = m_deck1.begin();
                    std::advance(it, card->m_CardPositionInPlayerDeck);
                    m_deck1.erase(it);
                    card->m_CardPositionInPlayerDeck = -1;
                    sortDeckByID(m_deck1, 1);
                    m_labels[SceneNum::Main][5]->setString(std::to_string(m_deck1.size()));
                    m_labels[SceneNum::FirstGeneralDeck][6]->setString(std::to_string(m_deck1.size()));
                    std::cout << "the card was deleted from 1 player deck with this card ID: " << card->m_CardPositionInPlayerDeck << std::endl;
                }
            }
        }
    }
    else if (m_currentScene == SceneNum::SecondGeneralDeck)
    {
        for (auto& card : m_generalcards2[m_currentPage2 - 1])
        {
            if (card->isPressed(event, m_game->m_window, sf::Mouse::Left) && !m_scaleMode)
            {
                if (!card->m_isSelected)
                {
                    card->m_isSelected = true;
                    card->disableHighlight();
                    card->highlight(sf::Color(62, 82, 224));
                    m_deck2.push_back(std::make_shared<Card>
                    (
                        card->getCardName(),
                        m_game
                    ));
                    card->m_CardPositionInPlayerDeck = (int)m_deck2.size() - 1;
                    m_labels[SceneNum::Main][6]->setString(std::to_string(m_deck2.size()));
                    m_labels[SceneNum::SecondGeneralDeck][6]->setString(std::to_string(m_deck2.size()));
                    std::cout << "the card was added to 2 player deck with this card ID: " << card->m_CardPositionInPlayerDeck << std::endl;
                }
                else
                {
                    card->m_isSelected = false;
                    card->disableHighlight();
                    auto it = m_deck2.begin(); 
                    std::advance(it, card->m_CardPositionInPlayerDeck);
                    m_deck2.erase(it);
                    card->m_CardPositionInPlayerDeck = -1;
                    sortDeckByID(m_deck2, 2);
                    m_labels[SceneNum::Main][6]->setString(std::to_string(m_deck2.size()));
                    m_labels[SceneNum::SecondGeneralDeck][6]->setString(std::to_string(m_deck2.size()));
                    std::cout << "the card was deleted from 2 player deck with this card ID: " << card->m_CardPositionInPlayerDeck << std::endl;
                }
            }
        }
    }
    return;
}

void GameStateCustomization::handleInput(const float dt)
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
                    m_view.setSize((float)event.size.width, (float)event.size.height);
                    m_view.setCenter(event.size.width * 0.5f, event.size.height * 0.5f);
                }
                else
                {
                    m_game->m_window.setSize(sf::Vector2u(m_game->standartWsizeX, m_game->standartWsizeY));
                    m_game->m_window.setPosition(sf::Vector2i((int)((m_game->scrXmetric * 0.5f) - m_game->standartWsizeX * 0.5f), (int)((m_game->scrYmetric * 0.5f) - m_game->standartWsizeY * 0.5f)));
                    m_view.setCenter(sf::Vector2f(m_game->standartWsizeX * 0.5f, m_game->standartWsizeY * 0.5f));
                }
                std::cout << m_game->m_window.getSize().x << " " << m_game->m_window.getSize().y << std::endl;
                break; // End of Event::Resized

            case sf::Event::KeyPressed:
                break; // End of Event::KeyPressed

            case sf::Event::MouseButtonReleased:
                handleGeneralDeck(event);
                break; // End of Event::MouseButtonReleased

            case sf::Event::TextEntered: 
                
                m_textbox->typedOn(event);
                if (m_textbox->isEmpty()) m_maxDeckSize = 0;
                else m_maxDeckSize = stoi(m_textbox->getString());
                
                break;

        } // End of switch

        if (m_currentScene == SceneNum::FirstGeneralDeck)
        {
            for (const auto& card : m_generalcards[m_currentPage-1])
            {
                if (!card->m_isSelected) {
                    if (card->isPointedByMouse(m_game->m_window))
                    {
                        card->highlight(sf::Color(
                            card->getBackRect().getFillColor().r - 50,
                            card->getBackRect().getFillColor().g - 50,
                            card->getBackRect().getFillColor().b - 50,
                            card->getBackRect().getFillColor().a
                        ));
                    }
                    else
                    {
                        card->disableHighlight();
                    }
                }
            }

        }
        else if (m_currentScene == SceneNum::SecondGeneralDeck)
        {
            for (const auto& card : m_generalcards2[m_currentPage2 - 1])
            {
                if (!card->m_isSelected) {
                    if (card->isPointedByMouse(m_game->m_window))
                    {
                        card->highlight(sf::Color(
                            card->getBackRect().getFillColor().r - 50,
                            card->getBackRect().getFillColor().g - 50,
                            card->getBackRect().getFillColor().b - 50,
                            card->getBackRect().getFillColor().a
                        ));
                    }
                    else
                    {
                        card->disableHighlight();
                    }
                }
            }
        } // End of highlighting cards

        for (const auto& btn : m_buttons[m_currentScene]) // Start of handling buttons
        {
            if (btn->isPressed(event, m_game->m_window))
            {
                if (m_currentScene == SceneNum::Main)
                {
                    //if (btn->getName() == std::string("Start") && CanStartBattle() == true) { m_game->pushState(new GameStateBattle(m_game, &m_deck1, &m_deck2, m_maxDeckSize, m_playerIsBot, m_maxPHealth)); }
                    if (btn->getName() == std::string("Return")) { m_game->popState(); }
                    if (btn->getName() == std::string("1st Deck")) { changeScene(SceneNum::FirstGeneralDeck); }
                    if (btn->getName() == std::string("2nd Deck")) { changeScene(SceneNum::SecondGeneralDeck); }
                  

                    if (btn->getName() == std::string("PlayerOrAI") && m_playerIsBot == false) { m_playerIsBot = true; }
                    else if (btn->getName() == std::string("PlayerOrAI") && m_playerIsBot == true) { m_playerIsBot = false; }
                } // End of Main Scene buttons

                else if (m_currentScene == SceneNum::FirstGeneralDeck) {
                    if (btn->getName() == std::string("ReturnMain") && m_scaleMode == false) { changeScene(SceneNum::Main); m_currentPage = 1; }
                    if (btn->getName() == std::string("FirstPlayerDeck")) { std::cout << "\a"; }//changeScene(SceneNum::FirstPlayerDeck);
                    if (btn->getName() == std::string("Forward") && m_currentPage < m_maxPage && m_scaleMode == false) { m_currentPage++; m_labels[SceneNum::FirstGeneralDeck][2]->setString(sf::String(std::to_string(m_currentPage))); }
                    if (btn->getName() == std::string("Back") && m_currentPage > 1 && m_scaleMode == false) { m_currentPage--; m_labels[SceneNum::FirstGeneralDeck][2]->setString(sf::String(std::to_string(m_currentPage))); }
                } // End of First General Deck Scene buttons

                else if (m_currentScene == SceneNum::SecondGeneralDeck) {
                    if (btn->getName() == std::string("ReturnMain2") && m_scaleMode == false) { changeScene(SceneNum::Main); m_currentPage2 = 1; }
                    if (btn->getName() == std::string("SecondPlayerDeck")) { std::cout << "\a"; }//changeScene(SceneNum::SecondPlayerDeck);
                    if (btn->getName() == std::string("Forward2") && m_currentPage2 < m_maxPage && m_scaleMode == false) { m_currentPage2++; m_labels[SceneNum::SecondGeneralDeck][2]->setString(sf::String(std::to_string(m_currentPage2))); }
                    if (btn->getName() == std::string("Back2") && m_currentPage2 > 1 && m_scaleMode == false) { m_currentPage2--; m_labels[SceneNum::SecondGeneralDeck][2]->setString(sf::String(std::to_string(m_currentPage2))); }
                } // End of Second General Deck Scene buttons

            } // End of isPressed function

            if (btn->isPointedByMouse(m_game->m_window))
            {
                btn->highlight(sf::Color
                (
                    btn->getRectFillColor().r - 50 < 0 ? 0 : btn->getRectFillColor().r - 50,
                    btn->getRectFillColor().g - 50 < 0 ? 0 : btn->getRectFillColor().g - 50,
                    btn->getRectFillColor().b - 50 < 0 ? 0 : btn->getRectFillColor().b - 50,
                    btn->getRectFillColor().a
                ));
            }
            else
            {
                btn->disableHighlight();
            } // End of highlighting buttons

        } // End of handling buttons

        { // Start of handling textbox

            //std::cout << "decksize: " << m_maxDeckSize << std::endl;

            if (m_textbox->isPointedByMouse(m_game->m_window))
            {
                m_textbox->highlight(sf::Color
                (
                    m_textbox->getRectColor().r - 20 < 0 ? 0 : m_textbox->getRectColor().r - 20,
                    m_textbox->getRectColor().g - 20 < 0 ? 0 : m_textbox->getRectColor().g - 20,
                    m_textbox->getRectColor().b - 20 < 0 ? 0 : m_textbox->getRectColor().b - 20,
                    m_textbox->getRectColor().a
                ));
            }
            else
            {
                m_textbox->disableHighlight();
            } // End of highlighting textbox

            if (m_textbox->isPressed(event, m_game->m_window)) {}

        }// End of handling textbox

    } // End of while cycle
    
} // End of handleInput fuction

void GameStateCustomization::changeScene(GameStateCustomization::SceneNum _newcurrentscene)  
{
    m_currentScene = _newcurrentscene;
}

void GameStateCustomization::sortDeckByID(std::vector<std::shared_ptr<Card>>& _deck, int _generaldecknum)
{
    if (_generaldecknum == 1)
    {
        int counter = 0;
        for (auto& vect : m_generalcards)
        {
            for (auto& card : vect)
            {
                if (card->m_CardPositionInPlayerDeck != -1) { card->m_CardPositionInPlayerDeck = counter; counter++; }
            }
        }
    }
    if (_generaldecknum == 2)
    {
        int counter = 0;
        for (auto& vect : m_generalcards2)
        {
            for (auto& card : vect)
            {
                if (card->m_CardPositionInPlayerDeck != -1) { card->m_CardPositionInPlayerDeck = counter; counter++; }
            }
        }
    }
}

void GameStateCustomization::buildBotsDeck()
{
    
}

bool GameStateCustomization::CanStartBattle()
{
    if (m_playerIsBot == true && m_AIchooseDeck == true)
    {
        buildBotsDeck();
    }

    if (m_deck1.size() == m_maxDeckSize && m_deck2.size() == m_maxDeckSize && m_maxDeckSize >= 12)
    {
        return true;
    }
    return false;
}

GameStateCustomization::~GameStateCustomization()
{
    std::cout << "It seems ~GameStateCustomization was invoked" << std::endl;
}

