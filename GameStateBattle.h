#pragma once

#include "gui/Button.h"
#include "gui/Label.h"
#include "Game.h"
#include "GameState.h"
#include "Card.h"

#include <memory>
#include "SFML/Graphics.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <iterator>
#include <ctime>
#include <cstdlib>

///
///Battle
///

class GameStateBattle : public GameState
{
    enum SceneNum
    {
        Battle,
        LoseScreen
    };

    enum Direction
    {
        None,
        Up,
        Down,
        Left,
        Right
    };

    enum class Phase
    {
        PlayCards,
        Attack,
        Wait
    };

    enum class WhoPlays
    {
        Player1, Player2
    };

    sf::View m_view;

    std::vector<std::shared_ptr<gui::Label>> m_labels;
    std::vector<std::shared_ptr<gui::Button>> m_buttons;

    std::vector<std::shared_ptr<gui::Button>> m_cardslots;

    ///
    ///FOR GAME PROCESS
    ///

    std::vector<std::shared_ptr<Card>> m_deck1;
    std::vector<std::shared_ptr<Card>> m_deck2;

    std::vector<std::shared_ptr<Card>> m_discarddeck1;
    std::vector<std::shared_ptr<Card>> m_discarddeck2;

    std::vector<std::shared_ptr<Card>> m_deckOnField1;
    std::vector<std::shared_ptr<Card>> m_deckOnField2;

    std::vector<std::shared_ptr<Card>> m_deckInHand1;
    std::vector<std::shared_ptr<Card>> m_deckInHand2;

    int m_maxhandsize = 3;
    int m_maxdecksize;
    int m_maxPHealth;

    bool m_playerIsBot = true;
    bool m_player1FirstTurn = true; /// For checking if first player is playing cards first
    bool m_alreadySelected = false; /// For checking if you choose only one card at the time
    bool m_selectedOnField = false;
    bool m_firstTurnOfAllPlayers = true;

    bool m_movedCard = false;
    bool m_placedCard = false;

    WhoPlays m_whoplays;

    Phase m_phaseP1 = Phase::PlayCards;
    Phase m_phaseP2 = Phase::PlayCards;

    int m_income1P = 2;
    int m_income2P = 2;

    int m_health1P;
    int m_health2P;

    int m_money1P;
    int m_money2P;

    int m_turnnum = 1;

    int m_cardsInHand1 = 0;
    int m_cardsInDiscardDeck1 = 0;
    int m_cardsInMainDeck1 = 1;

    int m_cardsInHand2 = 0;
    int m_cardsInDiscardDeck2 = 0;
    int m_cardsInMainDeck2 = 0;

    void CameraMovement(const float dt);
    void MoveGUI(sf::Vector2f movement);
    Direction m_direction = Direction::None;
    int m_camX = 0;
    int m_camY = 0;

    void Swap(std::shared_ptr<Card> _a, std::shared_ptr<Card> _b);
    void ShuffleDeck(std::vector<std::shared_ptr<Card>>& _deck);

    void PullCard1P(int newposinhand = -1);
    void PlayCard1P(sf::Vector2f slotpos);
    void DiscardCard1P();
    void ShuffleDiscardedCards1P();

    void PullCard2P(int newposinhand = -1);
    void DiscardCard2P();
    void ShuffleDiscardedCards2P();

    void AIplays();

    void NextTurn();

    bool FinishedGame();
public:

    virtual void initGui() override;

    virtual void init() override;

    virtual void draw(const float dt) override;

    virtual void update(const float dt) override;

    virtual void handleInput(const float dt) override;

    GameStateBattle(Game* _game, std::vector<std::shared_ptr<Card>>* _deck1, std::vector<std::shared_ptr<Card>>* _deck2, int _maxdecksize, bool _playerIsBot, int _maxPHealth);

    ~GameStateBattle();
};