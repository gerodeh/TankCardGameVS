#include "GameStateBattle.h"

//
///
///
///Battle
///
///
//
/*
void GameStateBattle::initGui()
{
#pragma region MainScene

    #pragma region Labels

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"WASD - передвижение\nкамерой\n\nC - центрирование\n\nКнопка выхода\nслева сверху\nвне зоны видимости"),  // string
        m_game->m_font,                 // font
        10,                             // char size
        sf::String("Hint")              // name
    ));
    m_labels[0]->setTextColor(sf::Color::Black);
    m_labels[0]->setTextOutlineColor(sf::Color::White);
    m_labels[0]->setTextOutlineThickness(3);
    m_labels[0]->setOrigin(Alignment::Left);
    m_labels[0]->setPosition(Alignment::Left, m_game->m_window, 5, 0);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"0"),               // string
        m_game->m_font,                 // font
        25,                             // char size
        sf::String("MainDeck")          // name
    ));
    m_labels[1]->setTextColor(sf::Color::Black);
    m_labels[1]->setTextOutlineColor(sf::Color::White);
    m_labels[1]->setTextOutlineThickness(3);
    m_labels[1]->setOrigin(Alignment::BottomLeft);
    m_labels[1]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"0"),               // string
        m_game->m_font,                 // font
        25,                             // char size
        sf::String("DiscardDeck")       // name
    ));
    m_labels[2]->setTextColor(sf::Color::Black);
    m_labels[2]->setTextOutlineColor(sf::Color::White);
    m_labels[2]->setTextOutlineThickness(3);
    m_labels[2]->setOrigin(Alignment::BottomLeft);
    m_labels[2]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Фаза:"),               // string
        m_game->m_font,                     // font
        25,                                 // char size
        sf::String("PhaseLabel")            // name
    ));
    m_labels[3]->setTextColor(sf::Color::Black);
    m_labels[3]->setTextOutlineColor(sf::Color::White);
    m_labels[3]->setTextOutlineThickness(3);
    m_labels[3]->setOrigin(Alignment::Left);
    m_labels[3]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"-"),                   // string
        m_game->m_font,                     // font
        25,                                 // char size
        sf::String("PhaseState")            // name
    ));
    m_labels[4]->setTextColor(sf::Color::Black);
    m_labels[4]->setTextOutlineColor(sf::Color::White);
    m_labels[4]->setTextOutlineThickness(3);
    m_labels[4]->setOrigin(Alignment::Center);
    m_labels[4]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"0"),                   // string
        m_game->m_font,                     // font
        25,                                 // char size
        sf::String("TurnNum")               // name
    ));
    m_labels[5]->setTextColor(sf::Color::Black);
    m_labels[5]->setTextOutlineColor(sf::Color::White);
    m_labels[5]->setTextOutlineThickness(3);
    m_labels[5]->setOrigin(Alignment::Center);
    m_labels[5]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Ход:"),                 // string
        m_game->m_font,                      // font
        25,                                  // char size
        sf::String("TurnLabel")              // name
    ));
    m_labels[6]->setTextColor(sf::Color::Black);
    m_labels[6]->setTextOutlineColor(sf::Color::White);
    m_labels[6]->setTextOutlineThickness(3);
    m_labels[6]->setOrigin(Alignment::Center);
    m_labels[6]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"0"),                    // string
        m_game->m_font,                      // font
        25,                                  // char size
        sf::String("MoneyNum")               // name
    ));
    m_labels[7]->setTextColor(sf::Color::Black);
    m_labels[7]->setTextOutlineColor(sf::Color::White);
    m_labels[7]->setTextOutlineThickness(3);
    m_labels[7]->setOrigin(Alignment::Center);
    m_labels[7]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"0"),                    // string
        m_game->m_font,                      // font
        25,                                  // char size
        sf::String("MoneyNum2P")             // name
    ));
    m_labels[8]->setTextColor(sf::Color::Black);
    m_labels[8]->setTextOutlineColor(sf::Color::White);
    m_labels[8]->setTextOutlineThickness(2);
    m_labels[8]->setOrigin(Alignment::Center);
    m_labels[8]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"Ход Игрока 1"),         // string
        m_game->m_font,                      // font
        25,                                  // char size
        sf::String("TurnOfWhom")             // name
    ));
    m_labels[9]->setTextColor(sf::Color::Black);
    m_labels[9]->setTextOutlineColor(sf::Color::White);
    m_labels[9]->setTextOutlineThickness(2);
    m_labels[9]->setOrigin(Alignment::Center);
    m_labels[9]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(L"0"),                    // string
        m_game->m_font,                      // font
        25,                                  // char size
        sf::String("Health1Pnum")            // name
    ));
    m_labels[10]->setTextColor(sf::Color::Black);
    m_labels[10]->setTextOutlineColor(sf::Color::White);
    m_labels[10]->setTextOutlineThickness(2);
    m_labels[10]->setOrigin(Alignment::Center);
    m_labels[10]->setPosition(Alignment::Center, m_game->m_window);

    m_labels.push_back(std::make_shared<gui::Label>
        (
            sf::String(L"0"),                    // string
            m_game->m_font,                      // font
            25,                                  // char size
            sf::String("Health2Pnum")            // name
        ));
    m_labels[11]->setTextColor(sf::Color::Black);
    m_labels[11]->setTextOutlineColor(sf::Color::White);
    m_labels[11]->setTextOutlineThickness(2);
    m_labels[11]->setOrigin(Alignment::Center);
    m_labels[11]->setPosition(Alignment::Center, m_game->m_window);


    m_labels.push_back(std::make_shared<gui::Label>
        (
            sf::String(L""),                     // string
            m_game->m_font,                      // font
            50,                                  // char size
            sf::String("VictoryLabel")           // name
        ));
    m_labels[12]->setTextColor(sf::Color::Black);
    m_labels[12]->setTextOutlineColor(sf::Color::White);
    m_labels[12]->setTextOutlineThickness(2);
    m_labels[12]->setOrigin(Alignment::Center);
    m_labels[12]->setPosition(Alignment::Center, m_game->m_window);

    #pragma endregion

    #pragma region Buttons

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(125, 50),              // size
        sf::String(L"Выйти"),               // string
        sf::Vector2f(0, 0),                 // pos
        sf::String("Button_Exit")           // name
    ));
    m_buttons[0]->setFont(m_game->m_font);
    m_buttons[0]->setCharacterSize(20);
    m_buttons[0]->setOrigin(Alignment::TopLeft);
    m_buttons[0]->setPosition(Alignment::TopLeft, m_game->m_window);
    m_buttons[0]->setRectFillColor(sf::Color(255, 255, 255));

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(150, 200),             // size
        sf::String(L"Основная\nколода"),    // string
        sf::Vector2f(0, 0),                 // pos
        sf::String("Button_MainDeck")       // name
    ));
    m_buttons[1]->setFont(m_game->m_font);
    m_buttons[1]->setCharacterSize(20);
    m_buttons[1]->setOrigin(Alignment::BottomLeft);
    m_buttons[1]->setPosition(Alignment::Center, m_game->m_window);
    m_buttons[1]->setRectFillColor(sf::Color(255, 255, 255));

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(150, 200),             // size
        sf::String(L"Колода\nсброса"),      // string
        sf::Vector2f(0, 0),                 // pos
        sf::String("Button_DiscardDeck")    // name
    ));
    m_buttons[2]->setFont(m_game->m_font);
    m_buttons[2]->setCharacterSize(20);
    m_buttons[2]->setOrigin(Alignment::BottomLeft);
    m_buttons[2]->setPosition(Alignment::Center, m_game->m_window);
    m_buttons[2]->setRectFillColor(sf::Color(255, 255, 255));

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(70, 70),               // size
        sf::String(L"След.\nфаза"),         // string
        sf::Vector2f(0, 0),                 // pos
        sf::String("Button_NextTurn")       // name
    ));
    m_buttons[3]->setFont(m_game->m_font);
    m_buttons[3]->setCharacterSize(20);
    m_buttons[3]->setOrigin(Alignment::Left);
    m_buttons[3]->setPosition(Alignment::Center, m_game->m_window);
    m_buttons[3]->setRectFillColor(sf::Color(255, 255, 255));

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(70, 70),               // size
        sf::String(""),                     // string
        sf::Vector2f(0, 0),                 // pos
        sf::String("Button_MoneyImage")     // name
    ));
    m_buttons[4]->setFont(m_game->m_font);
    m_buttons[4]->setCharacterSize(20);
    m_buttons[4]->setOrigin(Alignment::Left);
    m_buttons[4]->setPosition(Alignment::Center, m_game->m_window);
    m_buttons[4]->setRectFillColor(sf::Color(255, 255, 255));
    m_buttons[4]->setTexture(&m_game->m_texturemanager.GetTextureRef("Coin"));

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(70, 70),               // size
        sf::String(""),                     // string
        sf::Vector2f(0, 0),                 // pos
        sf::String("Button_MoneyImage2P")   // name
    ));
    m_buttons[5]->setFont(m_game->m_font);
    m_buttons[5]->setCharacterSize(20);
    m_buttons[5]->setOrigin(Alignment::Left);
    m_buttons[5]->setPosition(Alignment::Center, m_game->m_window);
    m_buttons[5]->setRectFillColor(sf::Color(255, 255, 255));
    m_buttons[5]->setTexture(&m_game->m_texturemanager.GetTextureRef("Coin"));

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(80, 80),               // size
        sf::String(""),                     // string
        sf::Vector2f(0, 0),                 // pos
        sf::String("Button_HealthImage1P")  // name
    ));
    m_buttons[6]->setFont(m_game->m_font);
    m_buttons[6]->setCharacterSize(20);
    m_buttons[6]->setOrigin(Alignment::Left);
    m_buttons[6]->setPosition(Alignment::Center, m_game->m_window);
    m_buttons[6]->setRectFillColor(sf::Color(255, 255, 255));
    m_buttons[6]->setTexture(&m_game->m_texturemanager.GetTextureRef("HitPoint"));

    m_buttons.push_back(std::make_shared<gui::Button>
    (
        sf::Vector2f(80, 80),               // size
        sf::String(""),                     // string
        sf::Vector2f(0, 0),                 // pos
        sf::String("Button_HealthImage2P")  // name
    ));
    m_buttons[7]->setFont(m_game->m_font);
    m_buttons[7]->setCharacterSize(20);
    m_buttons[7]->setOrigin(Alignment::Left);
    m_buttons[7]->setPosition(Alignment::Center, m_game->m_window);
    m_buttons[7]->setRectFillColor(sf::Color(255, 255, 255));
    m_buttons[7]->setTexture(&m_game->m_texturemanager.GetTextureRef("HitPoint"));

    #pragma endregion

#pragma endregion
}

void GameStateBattle::init()
{
    
}

GameStateBattle::GameStateBattle(Game* _game, std::vector<std::shared_ptr<Card>>* _deck1, std::vector<std::shared_ptr<Card>>* _deck2, int _maxdecksize, bool _playerIsBot, int _maxPHealth)
{
    srand(time(NULL));

    m_game = _game;

    sf::Vector2f pos = sf::Vector2f(m_game->m_window.getSize());

    m_view.setSize(pos);

    m_view.setCenter(pos.x * 0.5f, pos.y * 0.5f);

    init();
    initGui();

    m_backgrdColor = sf::Color(237, 119, 41);

    ///INIT

    m_playerIsBot = _playerIsBot;
    m_maxPHealth = _maxPHealth;

    m_health1P = _maxPHealth;
    m_health2P = _maxPHealth;

    for (const auto& card : *_deck1)
    {
        m_deck1.push_back(std::make_shared<Card>(m_game, card->m_cardName));

    }
    for (const auto& card : *_deck2)
    {
        m_deck2.push_back(std::make_shared<Card>(m_game, card->m_cardName));
    }

    m_game->m_window.setSize(sf::Vector2u(m_game->standartWsizeX, m_game->standartWsizeY));
    m_view.setSize(sf::Vector2f(m_game->standartWsizeX, m_game->standartWsizeY));
    m_view.setCenter(m_game->standartWsizeX * 0.5f, m_game->standartWsizeY * 0.5f);

    m_labels[1]->move(sf::Vector2f(1000, 360));
    m_labels[2]->move(sf::Vector2f(0, 360));
    m_labels[3]->move(sf::Vector2f(900, -100));
    m_labels[4]->move(sf::Vector2f(950, -100));
    m_labels[5]->move(sf::Vector2f(110, -100));
    m_labels[6]->move(sf::Vector2f(60, -100));
    m_labels[7]->move(sf::Vector2f(920, 300));
    m_labels[8]->move(sf::Vector2f(920, -400));
    m_labels[9]->move(sf::Vector2f(900, 200));
    m_labels[10]->move(sf::Vector2f(-5, 500));
    m_labels[11]->move(sf::Vector2f(-5, -400));
    m_labels[12]->move(sf::Vector2f(500, 0));

    m_buttons[1]->move(sf::Vector2f(1000, 300));
    m_buttons[2]->move(sf::Vector2f(0, 300));
    m_buttons[3]->move(sf::Vector2f(910, -160));
    m_buttons[4]->move(sf::Vector2f(920, 300));
    m_buttons[5]->move(sf::Vector2f(920, -400));
    m_buttons[6]->move(sf::Vector2f(0, 500));
    m_buttons[7]->move(sf::Vector2f(0, -400));

    for (int i = 0; i < 16; i++)
    {
        m_cardslots.push_back(std::make_shared<gui::Button>
        (
            sf::Vector2f(150, 200),               // size
            sf::String(L""),                      // string
            sf::Vector2f(0, 0),                   // pos
            sf::String("Slot_" + (char)i)         // name
        ));
        m_cardslots[i]->setFont(m_game->m_font);
        m_cardslots[i]->setCharacterSize(20);
        m_cardslots[i]->setOrigin(Alignment::Center);
        m_cardslots[i]->setPosition(Alignment::Center, m_game->m_window);
        m_cardslots[i]->setRectFillColor(sf::Color(252, 142, 68));
        m_cardslots[i]->setRectOutlineColor(sf::Color::Black);
        m_cardslots[i]->setRectOutlineThickness(2.5f);
    }
    for (int i = 0; i < 16; i++)
    {
        if (i >= 0 && i <= 3) { m_cardslots[i]->move(sf::Vector2f(-225 + (155 * i), -250)); continue; }
        if (i >= 4 && i <= 7) { m_cardslots[i]->move(sf::Vector2f(-225 + (155 * (i - 4)), -45)); continue; }
        if (i >= 8 && i <= 11) { m_cardslots[i]->move(sf::Vector2f(-225 + (155 * (i - 8)), 170)); continue; }
        if (i >= 12 && i <= 15) { m_cardslots[i]->move(sf::Vector2f(-225 + (155 * (i - 12)), 375)); continue; }
    }

    m_game->m_window.setSize(sf::Vector2u(pos));
    m_view.setSize(pos);
    m_view.setCenter(pos.x * 0.5f, pos.y * 0.5f);

    ShuffleDeck(m_deck1);
    ShuffleDeck(m_deck2);

    m_cardsInMainDeck1 = m_maxdecksize;

    PullCard1P(-1);
    PullCard1P(-1);
    PullCard1P(-1);

    if (m_player1FirstTurn)
    {
        m_money1P = 2; m_money2P = 3;
        m_whoplays = WhoPlays::Player1;
    }
    else
    {
        m_money1P = 3; m_money2P = 2;
        m_whoplays = WhoPlays::Player2;
    }
}

GameStateBattle::~GameStateBattle()
{
    std::cout << "~GameStateBattle was invoked" << std::endl;
}

void GameStateBattle::draw(const float dt)
{
    m_game->m_window.setView(m_view);

    for (const auto& btn : m_buttons)
    {
        m_game->m_window.draw(*btn);
    }
    for (const auto& slot : m_cardslots)
    {
        m_game->m_window.draw(*slot);
    }
    for (const auto& card : m_deckInHand1)
    {
        m_game->m_window.draw(*card);
    }
    for (const auto& card : m_deckOnField1)
    {
        m_game->m_window.draw(*card);
    }
    for (const auto& card : m_deckOnField2)
    {
        m_game->m_window.draw(*card);
    }
    for (const auto& lbl : m_labels)
    {
        m_game->m_window.draw(*lbl);
    }
}

void GameStateBattle::update(const float dt)
{
    //this->view.setSize(this->game->window.getSize().x, this->game->window.getSize().y);
    //this->view.setCenter(this->game->window.getSize().x *0.5f, this->game->window.getSize().y*0.5f);

    if (m_money1P > 20) { m_money1P = 20; }
    if (m_money2P > 20) { m_money2P = 20; }

    for (const auto& lbl : m_labels)
    {/*
        if (comp->NAME == "Hint") { comp->SetPosition(GuiComponent::componentAlignment::Left); comp->Move(5, 0); }
        if (comp->NAME == "MainDeck") { comp->SetString(std::to_string(this->deck1.size())); }
        if (comp->NAME == "DiscardDeck") { comp->SetString(std::to_string(this->discarddeck1.size())); }
        if (comp->NAME == "TurnNum") { comp->SetString(std::to_string(this->turnnum)); }
        if (comp->NAME == "MoneyNum") { comp->SetString(std::to_string(this->money1P)); }
        if (comp->NAME == "MoneyNum2P") { comp->SetString(std::to_string(this->money2P)); }
        if (comp->NAME == "PhaseState" && this->phaseP1 == Phase::PlayCards) { comp->SetString(L"Покупка карт"); }
        else if (comp->NAME == "PhaseState" && this->phaseP1 == Phase::Attack) { comp->SetString(L"Атака"); }
        else if (comp->NAME == "PhaseState" && this->phaseP1 == Phase::Wait) { comp->SetString(L"-"); }
        if (comp->NAME == "TurnOfWhom" && whoplays == WhoPlays::Player1) { comp->SetString(L"Ход 1 игрока"); }
        else if (comp->NAME == "TurnOfWhom" && whoplays == WhoPlays::Player2) { comp->SetString(L"Ход 2 игрока"); }
        if (comp->NAME == "Health1Pnum") { comp->SetString(std::to_string(this->health1P)); }
        if (comp->NAME == "Health2Pnum") { comp->SetString(std::to_string(this->health2P)); }
    }
    for (const auto& btn : m_buttons)
    {/*
        if (comp->NAME == "Exit") { comp->SetPositionByView(GuiComponent::componentAlignment::TopLeft, this->view); comp->Move(-200, -200); }
        if (comp->NAME == "NextTurn" && this->phaseP1 == Phase::PlayCards) { this->buttons[3]->GetLabel().SetString(sf::String(L"След.\nфаза")); }
        else if (comp->NAME == "NextTurn" && this->phaseP1 == Phase::Attack) { this->buttons[3]->GetLabel().SetString(sf::String(L"Конец\nхода")); }
    }*/

    /*
    if (m_whoplays == WhoPlays::Player2 && m_playerIsBot) { AIplays(); }

    if (m_whoplays == WhoPlays::Player1)
    {
        for (const auto& card : m_deckOnField1)
        {
            if (card->m_nextturn == m_turnnum)
            {
                card->m_canShoot = true;
            }
            if (card->m_hasAttacked == true && card->m_isSelected == false)
            {
                card->GetBackRect().setFillColor(sf::Color(214, 201, 67));
            }
            if (card->m_hasAttacked == false && card->m_isSelected == false)
            {
                comp->GetBackRect().setFillColor(sf::Color(210, 210, 210));
            }
        }
    }
    if (phaseP1 == Phase::PlayCards || whoplays == WhoPlays::Player2)
    {
        for (int i = 0; i < 4; i++)
        {
            cardslots[i]->underAttack = false;
            if (cardslots[i]->underAttack == false) { cardslots[i]->GetButtonRect().setOutlineColor(sf::Color(0, 0, 0)); }
        }
    }

    if (whoplays == WhoPlays::Player1 && phaseP1 == Phase::Attack)
    {
        for (auto comp : deckOnField1)
        {
            ///Check if can attack player 2 directly
            if (comp->canShoot && comp->isSelected)
            {
                if (comp->posOnField == 8 && cardslots[0]->isActive == false && cardslots[4]->isActive == false)
                {
                    cardslots[0]->GetButtonRect().setOutlineColor(sf::Color(255, 46, 0));
                    cardslots[0]->underAttack = true;
                }
                if (comp->posOnField == 9 && cardslots[1]->isActive == false && cardslots[5]->isActive == false)
                {
                    cardslots[1]->GetButtonRect().setOutlineColor(sf::Color(255, 46, 0));
                    cardslots[1]->underAttack = true;
                }
                if (comp->posOnField == 10 && cardslots[2]->isActive == false && cardslots[6]->isActive == false)
                {
                    cardslots[2]->GetButtonRect().setOutlineColor(sf::Color(255, 46, 0));
                    cardslots[2]->underAttack = true;
                }
                if (comp->posOnField == 11 && cardslots[3]->isActive == false && cardslots[7]->isActive == false)
                {
                    cardslots[3]->GetButtonRect().setOutlineColor(sf::Color(255, 46, 0));
                    cardslots[3]->underAttack = true;
                }
                break;
            }
            for (int i = 0; i < 4; i++)
            {
                cardslots[i]->underAttack = false;
                if (cardslots[i]->underAttack == false) { cardslots[i]->GetButtonRect().setOutlineColor(sf::Color(0, 0, 0)); }
            }
        }
        for (auto comp : deckOnField1)
        {
            ///Check if can attack player 2 individual cards
            if (comp->canShoot && comp->isSelected && !comp->hasAttacked)
            {
                if (comp->posOnField == 8 && cardslots[4]->isActive == true) {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 4) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 8 && cardslots[0]->isActive == true && cardslots[4]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 0) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 9 && cardslots[5]->isActive == true) {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 5) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 9 && cardslots[1]->isActive == true && cardslots[5]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 1) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 10 && cardslots[6]->isActive == true) {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 6) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 10 && cardslots[2]->isActive == true && cardslots[6]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 2) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 11 && cardslots[7]->isActive == true) {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 7) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 11 && cardslots[3]->isActive == true && cardslots[7]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 3) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 12 && cardslots[4]->isActive == true && cardslots[8]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 4) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 12 && cardslots[0]->isActive == true && cardslots[4]->isActive == false && cardslots[8]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 0) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 13 && cardslots[5]->isActive == true && cardslots[9]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 5) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 13 && cardslots[1]->isActive == true && cardslots[5]->isActive == false && cardslots[9]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 1) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 14 && cardslots[6]->isActive == true && cardslots[10]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 6) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 14 && cardslots[2]->isActive == true && cardslots[6]->isActive == false && cardslots[10]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 2) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 15 && cardslots[7]->isActive == true && cardslots[11]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 7) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }
                else if (comp->posOnField == 15 && cardslots[3]->isActive == true && cardslots[7]->isActive == false && cardslots[11]->isActive == false)
                {
                    for (auto p2card : deckOnField2) {
                        if (p2card->posOnField == 3) {
                            p2card->GetBackRect().setFillColor(sf::Color(255, 46, 0));
                            p2card->underAttack = true;
                        }
                    }
                }

                break;
            }
            for (auto p2card : deckOnField2)
            {
                p2card->underAttack = false;
                p2card->GetBackRect().setFillColor(sf::Color(210, 210, 210));
            }
        }
    }


    if (whoplays == WhoPlays::Player1 && phaseP1 == Phase::PlayCards)
    {
        for (auto comp : deckOnField1)
        {
            comp->isSelected = false;
        }
        for (auto comp : deckOnField2)
        {
            comp->underAttack = false;
        }
    }
}

void GameStateBattle::CameraMovement(const float dt)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) { this->view.move(0, -900 * dt); camY += 10; }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) { this->view.move(-900 * dt, 0); camX -= 10; }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) { this->view.move(0, 900 * dt); camY -= 10; }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) { this->view.move(900 * dt, 0); camX += 10; }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::C)) { this->view.setCenter(sf::Vector2f(this->game->standartWsizeX * 0.5f, this->game->standartWsizeY * 0.5f)); camX = 0; camY = 0; }

    if (camX > 300) { camX -= 10; this->view.move(-900 * dt, 0); }
    if (camX < -300) { camX += 10; this->view.move(900 * dt, 0); }
    if (camY > 300) { camY -= 10; this->view.move(0, 900 * dt); }
    if (camY < -300) { camY += 10; this->view.move(0, -900 * dt); }
}

void GameStateBattle::handleInput(const float dt)
{
    CameraMovement(dt);


    sf::Event event;
    while (this->game->window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            game->window.close();
            break;

        case sf::Event::Resized:
            if (event.size.width >= this->game->standartWsizeX && event.size.height >= this->game->standartWsizeY)
            {
                this->view.setSize(event.size.width, event.size.height);
                //this->view.setCenter(event.size.width*0.5f, event.size.height*0.5f);
            }
            else
            {
                this->game->window.setSize(sf::Vector2u(this->game->standartWsizeX, this->game->standartWsizeY));
                this->game->window.setPosition(sf::Vector2i((int)((this->game->scrXmetric * 0.5f) - this->game->standartWsizeX * 0.5f), (int)((this->game->scrYmetric * 0.5f) - this->game->standartWsizeY * 0.5f)));
                this->view.setCenter(sf::Vector2f(this->game->standartWsizeX * 0.5f, this->game->standartWsizeY * 0.5f));
            }
            std::cout << this->game->window.getSize().x << " " << this->game->window.getSize().y << std::endl;
            break;

        case sf::Event::KeyPressed:
            break;

        case sf::Event::MouseButtonReleased:
            for (auto comp : buttons)
            {
                if (comp->GetButtonRect().getGlobalBounds().contains(this->game->window.mapPixelToCoords(sf::Mouse::getPosition(this->game->window))))
                {
                    if (comp->NAME == "Exit") { this->~GameStateBattle(); this->game->popState(); }
                    if (comp->NAME == "NextTurn" && this->phaseP1 == Phase::PlayCards) { this->phaseP1 = Phase::Attack; }
                    else if (comp->NAME == "NextTurn" && this->phaseP1 == Phase::Attack) { NextTurn(); this->phaseP1 = Phase::Wait; }
                }
            }
            if (!FinishedGame()) {

                for (auto comp : deckOnField1)
                {
                    if (comp->GetSpriteRect().getGlobalBounds().contains(this->game->window.mapPixelToCoords(sf::Mouse::getPosition(this->game->window))))
                    {
                        if (!comp->isSelected && alreadySelected == false) { comp->isSelected = true; alreadySelected = true; comp->GetBackRect().setFillColor(sf::Color(62, 82, 224)); }
                        else if (comp->isSelected && alreadySelected == true) { comp->isSelected = false; alreadySelected = false; comp->GetBackRect().setFillColor(sf::Color(210, 210, 210)); }
                        else if (!comp->isSelected && alreadySelected == true)
                        {
                            for (auto comp : deckOnField1)
                            {
                                if (comp->isSelected) { comp->isSelected = false; comp->GetBackRect().setFillColor(sf::Color(210, 210, 210)); }
                            }
                            for (auto comp : deckInHand1)
                            {
                                if (comp->isSelected) { comp->isSelected = false; comp->GetBackRect().setFillColor(sf::Color(210, 210, 210)); }
                            }
                            for (auto p2card : deckOnField2)
                            {
                                p2card->GetBackRect().setFillColor(sf::Color(210, 210, 210));
                            }
                            for (int i = 0; i < 4; i++)
                            {
                                cardslots[i]->underAttack = false;
                                if (cardslots[i]->underAttack == false) { cardslots[i]->GetButtonRect().setOutlineColor(sf::Color(0, 0, 0)); }
                            }
                            comp->isSelected = true;
                            comp->GetBackRect().setFillColor(sf::Color(62, 82, 224));
                        }
                    }
                }
                for (auto comp : deckInHand1)
                {
                    if (comp->GetSpriteRect().getGlobalBounds().contains(this->game->window.mapPixelToCoords(sf::Mouse::getPosition(this->game->window))))
                    {
                        if (!comp->isSelected && alreadySelected == false) { comp->isSelected = true; alreadySelected = true; comp->GetBackRect().setFillColor(sf::Color(62, 82, 224)); }
                        else if (comp->isSelected && alreadySelected == true) { comp->isSelected = false; alreadySelected = false; comp->GetBackRect().setFillColor(sf::Color(210, 210, 210)); }
                        else if (!comp->isSelected && alreadySelected == true)
                        {
                            for (auto comp : deckInHand1)
                            {
                                if (comp->isSelected) { comp->isSelected = false; comp->GetBackRect().setFillColor(sf::Color(210, 210, 210)); }
                            }
                            for (auto comp : deckOnField1)
                            {
                                if (comp->isSelected) { comp->isSelected = false; comp->GetBackRect().setFillColor(sf::Color(210, 210, 210)); }
                            }
                            comp->isSelected = true;
                            comp->GetBackRect().setFillColor(sf::Color(62, 82, 224));
                        }
                    }
                }
                if (whoplays == WhoPlays::Player1)
                {
                    for (auto slot : cardslots) /// For first player /// Only For Playing Card (Not Moving)
                    {
                        if (slot->GetButtonRect().getGlobalBounds().contains(this->game->window.mapPixelToCoords(sf::Mouse::getPosition(this->game->window))))
                        {
                            if (slot->numero >= 8 && slot->numero <= 15 && slot->isActive == false && alreadySelected)
                            {
                                for (auto comp : deckInHand1)
                                {
                                    if (comp->isSelected && this->money1P >= comp->cost)
                                    {
                                        this->money1P -= comp->cost; comp->posOnField = slot->numero;
                                        slot->isActive = true; PlayCard1P(slot->GetButtonRect().getPosition());
                                        //placedCard = true;
                                    }
                                }
                            }
                            if (slot->numero == 0 && slot->underAttack == true && slot->isActive == false) { /// Attack player 2 directly
                                for (auto comp : deckOnField1) {
                                    if (comp->posOnField == 8 && comp->isSelected) {
                                        if (rand() % 6 + 1 <= comp->cur_acr && comp->hasAttacked == false) {
                                            this->health2P -= comp->cur_dmg;

                                        }
                                        comp->hasAttacked = true;
                                    }
                                }
                            }
                            if (slot->numero == 1 && slot->underAttack == true && slot->isActive == false) { /// Attack player 2 directly
                                for (auto comp : deckOnField1) {
                                    if (comp->posOnField == 9 && comp->isSelected) {
                                        if (rand() % 6 + 1 <= comp->cur_acr && comp->hasAttacked == false) {
                                            this->health2P -= comp->cur_dmg;
                                            comp->hasAttacked = true;
                                        }
                                    }
                                }
                            }
                            if (slot->numero == 2 && slot->underAttack == true && slot->isActive == false) { /// Attack player 2 directly
                                for (auto comp : deckOnField1) {
                                    if (comp->posOnField == 10 && comp->isSelected) {
                                        if (rand() % 6 + 1 <= comp->cur_acr && comp->hasAttacked == false) {
                                            this->health2P -= comp->cur_dmg;
                                            comp->hasAttacked = true;
                                        }
                                    }
                                }
                            }
                            if (slot->numero == 3 && slot->underAttack == true && slot->isActive == false) { /// Attack player 2 directly
                                for (auto comp : deckOnField1) {
                                    if (comp->posOnField == 11 && comp->isSelected) {
                                        if (rand() % 6 + 1 <= comp->cur_acr && comp->hasAttacked == false) {
                                            this->health2P -= comp->cur_dmg;
                                            comp->hasAttacked = true;
                                        }
                                    }
                                }
                            }

                        }
                    }
                    /// Attack player 2 cards
                    if (phaseP1 == Phase::Attack)
                    {
                        for (auto comp : deckOnField2)
                        {
                            if (comp->GetSpriteRect().getGlobalBounds().contains(this->game->window.mapPixelToCoords(sf::Mouse::getPosition(this->game->window))))
                            {
                                if (comp->underAttack) {
                                    for (auto card1P : deckOnField1) {
                                        if (comp->posOnField == card1P->posOnField - 8 && card1P->isSelected && card1P->cur_dmg > 0) {
                                            if (rand() % 6 + 1 <= card1P->cur_acr && card1P->hasAttacked == false) {
                                                comp->cur_hp -= card1P->cur_dmg;
                                                comp->Update();
                                            }
                                            card1P->hasAttacked = true;

                                            if (comp->cur_hp <= 0)
                                            {
                                                this->money1P += comp->income;
                                                this->cardslots[comp->posOnField]->isActive = false;
                                                this->discarddeck2.push_back(comp);
                                                auto it = deckOnField2.begin();
                                                for (int i = 0; i < deckOnField2.size(); i++)
                                                {
                                                    if (deckOnField2[i]->cur_hp <= 0) { std::advance(it, i);  this->deckOnField2.erase(it); }
                                                }

                                            }
                                            continue;
                                        }
                                        else if (comp->posOnField == card1P->posOnField - 4 && card1P->isSelected && card1P->cur_dmg > 0) {
                                            if (rand() % 6 + 1 <= card1P->cur_acr && card1P->hasAttacked == false) {
                                                comp->cur_hp -= card1P->cur_dmg;
                                                comp->Update();
                                            }
                                            card1P->hasAttacked = true;

                                            if (comp->cur_hp <= 0)
                                            {
                                                this->money1P += comp->income;
                                                this->cardslots[comp->posOnField]->isActive = false;
                                                this->discarddeck2.push_back(comp);
                                                auto it = deckOnField2.begin();
                                                for (int i = 0; i < deckOnField2.size(); i++)
                                                {
                                                    if (deckOnField2[i]->cur_hp <= 0) { std::advance(it, i);  this->deckOnField2.erase(it); }
                                                }


                                            }
                                            continue;
                                        }
                                        else if (comp->posOnField == card1P->posOnField - 12 && card1P->isSelected && card1P->cur_dmg > 0) {
                                            if (rand() % 6 + 1 <= card1P->cur_acr && card1P->hasAttacked == false) {
                                                comp->cur_hp -= card1P->cur_dmg;
                                                comp->Update();
                                            }
                                            card1P->hasAttacked = true;

                                            if (comp->cur_hp <= 0)
                                            {
                                                this->money1P += comp->income;
                                                this->cardslots[comp->posOnField]->isActive = false;
                                                this->discarddeck2.push_back(comp);
                                                auto it = deckOnField2.begin();
                                                for (int i = 0; i < deckOnField2.size(); i++)
                                                {
                                                    if (deckOnField2[i]->cur_hp <= 0) { std::advance(it, i);  this->deckOnField2.erase(it); }
                                                }
                                            }
                                            continue;
                                        }
                                    }
                                }
                            }
                        }
                    }

                }

            }

            break;
        }
    }



    ///Button Highlight
    for (auto comp : buttons)
    {
        if (comp->GetButtonRect().getGlobalBounds().contains(this->game->window.mapPixelToCoords(sf::Mouse::getPosition(this->game->window))))
        {
            comp->SetFillColor(sf::Color(210, 210, 210));
            continue;
        }
        comp->SetFillColor(sf::Color(255, 255, 255));
    }
    ///Cards Slots Highlight
    if (!playerIsBot)
    {
        for (auto comp : cardslots)
        {
            if (comp->GetButtonRect().getGlobalBounds().contains(this->game->window.mapPixelToCoords(sf::Mouse::getPosition(this->game->window))))
            {
                comp->SetFillColor(sf::Color(247, 177, 130));
                continue;
            }
            comp->SetFillColor(sf::Color(252, 142, 68));
        }
    }
    else if (playerIsBot)
    {
        for (int i = 8; i < 16; i++)
        {
            if (cardslots[i]->GetButtonRect().getGlobalBounds().contains(this->game->window.mapPixelToCoords(sf::Mouse::getPosition(this->game->window))))
            {
                cardslots[i]->SetFillColor(sf::Color(247, 177, 130));
                continue;
            }
            cardslots[i]->SetFillColor(sf::Color(252, 142, 68));
        }
    }

    ///Card Highlight
    for (auto comp : deckInHand1)
    {
        if (comp->GetSpriteRect().getGlobalBounds().contains(this->game->window.mapPixelToCoords(sf::Mouse::getPosition(this->game->window))))
        {
            if (!comp->isSelected) comp->GetBackRect().setFillColor(sf::Color(130, 130, 130));
            continue;
        }
        if (!comp->isSelected) comp->GetBackRect().setFillColor(sf::Color(210, 210, 210));
    }
}

void GameStateBattle::NextTurn()
{
    this->turnnum++;
    if (turnnum > 2) this->firstTurnOfAllPlayers = false;
    if (turnnum == 2) { whoplays = WhoPlays::Player2; }
    if (!this->firstTurnOfAllPlayers && whoplays == WhoPlays::Player1)
    {
        this->money2P += income2P;
        whoplays = WhoPlays::Player2;
    }
    else if (!this->firstTurnOfAllPlayers && whoplays == WhoPlays::Player2)
    {
        this->money1P += income1P;
        whoplays = WhoPlays::Player1;
    }
    for (auto comp : deckOnField1)
    {
        comp->hasAttacked = false;
    }
    for (auto comp : deckOnField2)
    {
        comp->hasAttacked = false;
    }
}

void GameStateBattle::AIplays()
{
    if (!deck2.empty() && this->deckInHand2.size() == 0)
    {
        this->deckInHand2.push_back(deck2.back());
        deck2.pop_back();
    }
    else if (deck2.empty())
    {
        for (auto comp : discarddeck2)
        {
            comp->InitCard();
            comp->hasAttacked = false;
            comp->canShoot = false;
            deck2.push_back(comp);
        }
        if (!deck2.empty()) ShuffleDeck(deck2);
    }

    if (!deckInHand2.empty())
    {

        int slotnum = rand() % 8;

        for (auto slot : this->cardslots)
        {
            if (slot->numero == slotnum && slot->isActive == false)
            {
                if (this->money2P >= this->deckInHand2.back()->cost)
                {
                    this->money2P -= this->deckInHand2.back()->cost;
                    this->deckOnField2.push_back(this->deckInHand2.back());
                    this->deckInHand2.pop_back();
                    this->deckOnField2.back()->setPosition(slot->GetButtonRect().getPosition());
                    this->deckOnField2.back()->posOnField = slot->numero;
                    this->deckOnField2.back()->nextturn = this->turnnum + 2;
                    slot->isActive = true;
                    std::cout << "P2 played " << deckOnField2.back()->GetCardNameInString() << " cur_hp: " << deckOnField2.back()->cur_hp << " hp: " << deckOnField2.back()->hp << std::endl;
                }
            }
        }
    }


    for (auto card2P : this->deckOnField2)
    {
        if (card2P->nextturn == this->turnnum) card2P->canShoot = true;

        if (card2P->posOnField == 4 && !cardslots[8]->isActive && !cardslots[12]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                this->health1P -= card2P->cur_dmg;
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 4 && cardslots[8]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 8) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 4 && cardslots[12]->isActive && !cardslots[8]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 12) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        if (card2P->posOnField == 5 && !cardslots[9]->isActive && !cardslots[13]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                this->health1P -= card2P->cur_dmg;
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 5 && cardslots[9]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 9) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 5 && cardslots[13]->isActive && !cardslots[9]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 13) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        if (card2P->posOnField == 6 && !cardslots[10]->isActive && !cardslots[14]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                this->health1P -= card2P->cur_dmg;
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 6 && cardslots[10]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 10) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 6 && cardslots[14]->isActive && !cardslots[10]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 14) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        if (card2P->posOnField == 7 && !cardslots[11]->isActive && !cardslots[15]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                this->health1P -= card2P->cur_dmg;
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 7 && cardslots[11]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 11) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 7 && cardslots[15]->isActive && !cardslots[11]->isActive && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 15) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        if (card2P->posOnField == 0 && !cardslots[8]->isActive && !cardslots[12]->isActive && cardslots[4]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                this->health1P -= card2P->cur_dmg;
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 0 && cardslots[8]->isActive && cardslots[4]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 8) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 0 && cardslots[12]->isActive && !cardslots[8]->isActive && cardslots[4]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 12) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        if (card2P->posOnField == 1 && !cardslots[9]->isActive && !cardslots[13]->isActive && cardslots[5]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                this->health1P -= card2P->cur_dmg;
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 1 && cardslots[9]->isActive && cardslots[5]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 9) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 1 && cardslots[13]->isActive && !cardslots[9]->isActive && cardslots[5]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 13) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        if (card2P->posOnField == 2 && !cardslots[10]->isActive && !cardslots[14]->isActive && cardslots[6]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                this->health1P -= card2P->cur_dmg;
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 2 && cardslots[10]->isActive && cardslots[6]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 10) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 2 && cardslots[14]->isActive && !cardslots[10]->isActive && cardslots[6]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 14) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        if (card2P->posOnField == 3 && !cardslots[11]->isActive && !cardslots[15]->isActive && cardslots[7]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                this->health1P -= card2P->cur_dmg;
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 3 && cardslots[11]->isActive && cardslots[7]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 11) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }
        else if (card2P->posOnField == 3 && cardslots[15]->isActive && !cardslots[11]->isActive && cardslots[7]->isActive == false && card2P->cur_dmg > 0) {
            if (rand() % 6 + 1 <= card2P->cur_acr && card2P->hasAttacked == false && card2P->canShoot) {
                for (int i = 0; i < this->deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->posOnField == 15) { deckOnField1[i]->cur_hp -= (card2P->cur_dmg - deckOnField1[i]->cur_armor); deckOnField1[i]->Update(); }
                }
            }
            card2P->hasAttacked = true;
        }

        for (auto card1P : deckOnField1)
        {
            if (card1P->cur_hp <= 0)
            {
                this->money2P += card1P->income;
                this->cardslots[card1P->posOnField]->isActive = false;
                this->discarddeck1.push_back(card1P);
                auto it = deckOnField1.begin();
                for (size_t i = 0; i < deckOnField1.size(); i++)
                {
                    if (deckOnField1[i]->cur_hp <= 0) std::advance(it, i);
                }
                this->deckOnField1.erase(it);
            }
        }
    }

    NextTurn();
    this->phaseP1 = Phase::PlayCards;
}

void GameStateBattle::PlayCard1P(sf::Vector2f slotpos)
{
    cardsInHand1--;
    int tmp;
    for (auto comp : deckInHand1)
    {
        if (comp->isSelected)
        {
            this->deckOnField1.push_back(comp);
            comp->setPosition(slotpos);
            comp->isSelected = false;
            comp->GetBackRect().setFillColor(sf::Color(210, 210, 210));
            tmp = comp->posInHand;
            comp->posInHand = -1;
            comp->nextturn = this->turnnum + 2;
        }
    }

    auto it = deckInHand1.begin();
    std::advance(it, tmp - 1);
    deckInHand1.erase(it);

    PullCard1P(tmp);


    alreadySelected = false;
}

void GameStateBattle::ShuffleDiscardedCards1P()
{

}

void GameStateBattle::PullCard1P(int newposinhand)
{
    this->cardsInHand1++;

    if (deck1.empty())
    {
        if (!discarddeck1.empty())
        {
            ShuffleDeck(discarddeck1);
            for (auto comp : discarddeck1)
            {
                comp->InitCard();
                comp->hasAttacked = false;
                comp->canShoot = false;
                comp->isSelected = false;
                deck1.push_back(comp);
            }
            discarddeck1.clear();
        }
    }

    if (!deck1.empty())
    {
        if (newposinhand == -1 || newposinhand == 3)
        {
            deckInHand1.push_back(this->deck1.back());
            deck1.pop_back();

            deckInHand1.back()->setPosition(sf::Vector2f(this->game->standartWsizeX * 0.5f, this->game->standartWsizeY * 0.5f));

            this->deckInHand1.back()->move(sf::Vector2f(-305 + (160 * this->cardsInHand1), 670));
            this->deckInHand1.back()->posInHand = cardsInHand1;

            std::cout << deckInHand1.back()->GetCardNameInString() << " was added to hand" << std::endl;
        }
        else if (newposinhand == 1 || newposinhand == 2)
        {
            auto it = deckInHand1.begin();
            std::advance(it, newposinhand - 1);
            this->deckInHand1.insert(it, this->deck1.back());
            this->deck1.pop_back();

            deckInHand1.at(newposinhand - 1)->setPosition(sf::Vector2f(this->game->standartWsizeX * 0.5f, this->game->standartWsizeY * 0.5f));

            this->deckInHand1.at(newposinhand - 1)->posInHand = newposinhand;
            this->deckInHand1.at(newposinhand - 1)->move(sf::Vector2f(-305 + (160 * newposinhand), 670));

            std::cout << deckInHand1.at(newposinhand - 1)->GetCardNameInString() << " was added to hand" << std::endl;
        }
        return;
    }
}

bool GameStateBattle::FinishedGame()
{
    if (health1P <= 0)
    {
        this->labels[12]->SetString(sf::String(L"Игрок 2 победил!"));
        return true;
    }
    else if (health2P <= 0)
    {
        this->labels[12]->SetString(sf::String(L"Игрок 1 победил!"));
        return true;
    }
    return false;
}

void GameStateBattle::Swap(std::shared_ptr<Card> _a, std::shared_ptr<Card> _b)
{
    std::shared_ptr<Card> tmp = _a;
    _a = _b;
    _b = tmp;
}

void GameStateBattle::ShuffleDeck(std::vector<std::shared_ptr<Card>>& _deck)
{
    for (int i = _deck.size() - 1; i > 0; i--)
    {
        // Pick a random index from 0 to i
        int j = rand() % (i + 1);

        // Swap arr[i] with the element
        // at random index
        Swap(_deck[i], _deck[j]);
    }
}
*/