#pragma once

#include "GameState.h"
#include "gui/Button.h"
#include "gui/CheckBox.h"
#include "gui/Label.h"
#include "Game.h"
#include "Card.h"
#include "GameStateBattle.h"
#include "gui/TextBox.h"

#include <stdlib.h>
#include <memory>
#include "SFML/Graphics.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <iterator>
#include <map>

#include <cstdlib> // random
#include <ctime>   // random

///
///Deck Builder and difficulty
///

class GameStateCustomization : public GameState
{
    enum SceneNum
    {
        Main,
        FirstGeneralDeck,
        SecondGeneralDeck,
        FirstPlayerDeck, /// they are not realized yet
        SecondPlayerDeck, /// they are not realized yet
    };

    SceneNum m_currentScene;

    sf::View m_view;

    std::vector<std::vector<std::shared_ptr<Card>>> m_generalcards; //vector of vectors of Cards for different pages 1 player
    std::vector<std::vector<std::shared_ptr<Card>>> m_generalcards2; //vector of vectors of Cards for different pages 2 player
    std::vector<std::vector<std::shared_ptr<gui::Label>>> m_labels; //vector of vectors of Labels for different scenes in the same Game State
    std::vector<std::vector<std::shared_ptr<gui::Button>>> m_buttons; //vector of vectors of Buttons for different scenes in the same Game State
    std::shared_ptr<gui::TextBox> m_textbox;

    void changeScene(GameStateCustomization::SceneNum _newcurrentscene);

    int m_currentPage = 1;
    int m_maxPage = 1;
    int m_currentPage2 = 1;

    bool m_typeMode = false;
    bool m_scaleMode = false;
    bool m_AIchooseDeck = false;

    //bool scaleMode2 = false;

    void sortDeckByID(std::vector<std::shared_ptr<Card>>& _deck, int _generaldecknum);

    void handleGeneralDeck(sf::Event& event);

    void CreateGeneralCards(std::vector<std::vector<std::shared_ptr<Card>>>& _generalcards);

    bool CanStartBattle();

    void buildBotsDeck();

    int m_botdifficulty = 1;

    std::vector<std::shared_ptr<Card>> m_deck1;
    std::vector<std::shared_ptr<Card>> m_deck2;

    int m_maxDeckSize = 12;
    int m_maxPHealth = 30;

    bool m_playerIsBot = true;

public:

    virtual void initGui() override;

    virtual void init() override;

    virtual void draw(const float dt) override;

    virtual void update(const float dt) override;

    virtual void handleInput(const float dt) override;

    GameStateCustomization(Game* game);

    ~GameStateCustomization();

};
