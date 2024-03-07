#pragma once

class GameState;

#include "TextureManager.h"

#include <vector>
#include <SFML/Graphics.hpp>
#include <windows.h>

class Game
{
    void loadalltextures();
public:
    TextureManager m_texturemanager;

    unsigned int standartWsizeX = 950; //950
    unsigned int standartWsizeY = 750; //750

    unsigned int scrXmetric;
    unsigned int scrYmetric;

    sf::Font m_font;
    sf::Font m_fontforCards;

    bool m_fullscreen = false;

    sf::String m_language = "Russian";

    std::vector<GameState*> m_states;

    sf::RenderWindow m_window;

    void pushState(GameState* state);

    void popState();

    void changeState(GameState* state);

    GameState* peekState();

    void gameLoop();

    Game();

    ~Game();
};
