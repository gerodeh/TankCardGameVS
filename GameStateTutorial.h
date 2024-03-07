#pragma once

#include "GameState.h"
#include "gui/Button.h"
#include "Game.h"

#include "SFML/Graphics.hpp"

///
///Tutorial
///

class GameStateTutorial : public GameState
{
    sf::View m_view;

    std::vector<std::shared_ptr<sf::Text>> m_texts;
    std::vector<std::shared_ptr<gui::Button>> m_buttons;
public:

    virtual void initGui() override;

    virtual void init() override;

    virtual void draw(const float dt) override;

    virtual void update(const float dt) override;

    virtual void handleInput(const float dt) override;

    GameStateTutorial(Game* game);

    ~GameStateTutorial();
};
