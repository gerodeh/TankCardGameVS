#pragma once

#include "GameState.h"
#include "GameStateCustomization.h"
#include "GameStateSettings.h"
#include "GameStateTutorial.h"
#include "gui/Button.h"
#include "gui/Utility_SFML.h"
#include "Game.h"

#include <memory>

#include "SFML/Graphics.hpp"

///
///Main menu
///

class GameStateStart : public GameState
{
    sf::View m_view;

    std::shared_ptr<sf::Text> m_headerText;
    std::vector<std::shared_ptr<gui::Button>> m_buttons;
public:

    virtual void initGui() override;

    virtual void init() override;

    virtual void draw(const float dt) override;

    virtual void update(const float dt) override;

    virtual void handleInput(const float dt) override;

    GameStateStart(Game* game);

    ~GameStateStart();

};