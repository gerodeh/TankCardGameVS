#include "Game.h"
#include "GameState.h"
#include <iostream>
void Game::pushState(GameState* state)
{
    m_states.push_back(state);
    std::cout << "stack: " << m_states.size() << std::endl;
}

void Game::popState()
{
    m_states.pop_back();
}

void Game::changeState(GameState* state)
{
    if (!m_states.empty())
        popState();
    pushState(state);
}

GameState* Game::peekState()
{
    if (m_states.empty())
        return nullptr;
    return m_states[m_states.size() - 1];
}

void Game::gameLoop()
{
    sf::Clock clock;
    while (m_window.isOpen())
    {
        sf::Time elapsed = clock.restart();
        float dt = elapsed.asSeconds();

        if (this->peekState() == nullptr)
            continue;

        peekState()->handleInput(dt);
        peekState()->update(dt);


        m_window.clear(peekState()->m_backgrdColor);

        peekState()->draw(dt);

        m_window.display();
    }
}

void Game::loadalltextures()
{
    m_texturemanager.LoadTexture("src/textures/checkMark.png", "checkMark");
    m_texturemanager.LoadTexture("src/textures/crossMark.png", "crossMark");
    m_texturemanager.LoadTexture("src/textures/cards/T-34-76.png", "T-34-76");
    m_texturemanager.LoadTexture("src/textures/cards/T-34-85.png", "T-34-85");
    m_texturemanager.LoadTexture("src/textures/cards/SU-100.png", "SU-100");
    m_texturemanager.LoadTexture("src/textures/cards/IS-2.png", "IS-2");
    m_texturemanager.LoadTexture("src/textures/cards/MS-1.png", "MS-1");
    m_texturemanager.LoadTexture("src/textures/cards/LTvz38.png", "LT vz.38");
    m_texturemanager.LoadTexture("src/textures/cards/Tiger I.png", "TigerI");
    m_texturemanager.LoadTexture("src/textures/cards/Hetzer.png", "Hetzer");
    m_texturemanager.LoadTexture("src/textures/cards/TigerII.png", "TigerII");
    m_texturemanager.LoadTexture("src/textures/cards/PzIII.png", "Pz.III");
    m_texturemanager.LoadTexture("src/textures/cards/KV-1.png", "KV-1");
    m_texturemanager.LoadTexture("src/textures/cards/IS-1.png", "IS-1");
    m_texturemanager.LoadTexture("src/textures/cards/SU-152.png", "SU-152");
    m_texturemanager.LoadTexture("src/textures/cards/ISU-152.png", "ISU-152");
    m_texturemanager.LoadTexture("src/textures/cards/Panther.png", "Panther");
    m_texturemanager.LoadTexture("src/textures/cards/Lowe.png", "Lowe");
    m_texturemanager.LoadTexture("src/textures/cards/Marder I.png", "MarderI");
    m_texturemanager.LoadTexture("src/textures/cards/PzI.png", "Pz.I");
    m_texturemanager.LoadTexture("src/textures/cards/StugIIIG.png", "StugIIIG");
    m_texturemanager.LoadTexture("src/textures/Coin.png", "Coin");
    m_texturemanager.LoadTexture("src/textures/HitPoint.png", "HitPoint");
}

Game::Game()
{
    m_window.create(sf::VideoMode(standartWsizeX, standartWsizeY), "Tank Card Game", sf::Style::Default);

    m_window.setFramerateLimit(60);

    this->scrXmetric = GetSystemMetrics(SM_CXSCREEN);
    this->scrYmetric = GetSystemMetrics(SM_CYSCREEN);

    m_font.loadFromFile("src/fonts/sfns-display-bold.ttf");
    m_fontforCards.loadFromFile("src/fonts/arnamu.ttf");

    loadalltextures();
}

Game::~Game()
{
    std::cout << "pop of all states" << std::endl;
    while (!m_states.empty())
        popState();
    m_states.shrink_to_fit();
}

