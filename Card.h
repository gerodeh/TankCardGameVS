#pragma once

#include "Game.h"
#include "game/Object.h"
#include "gui/Label.h"
#include "gui/Utility_SFML.h"

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <memory>

class TextureManager;

class Card : public Object, public sf::Drawable
{
public:
    enum class CardNames
    {
        T_34_76, T_34_85, IS_2, SU_100, MS_1, LTvz38, TigerI, Hetzer, TigerII, PzIII, IS_1, KV_1, SU_152, ISU_152, Panther, Lowe, MarderI, PzI,
        StugIIIG
    };
    enum class CardTypes
    {
        LightTank, MediumTank, HeavyTank, TankDestroyer, Building, AAG, Artillery, Spell
    };
    enum class CardNations
    {
        Neutral, USSR, USA, UK, France, Wehrmacht
    };
    enum class CardAbilities
    {
        None, Protection_1_if_1, Damage_1_if_Wehrmacht, ImmediateAttack, Heal_1HP_Ally_After_Play, Protection_1_VS_MT, DodgeLess_1_VS_MT_and_LT,
        Ricochet_if_1, Endurance_1_if_enemy_more_than_3, Damage_4_if_MT_and_LT, Only_1_DMG, Get_1_Acr_if_HT
    };
    enum class CardAttackDirections
    {
        Forward, ThreeLines, Right, Left
    };
private:

    sf::RectangleShape m_sprite;

    sf::RectangleShape m_backrect; // back rectangle shape

    std::vector<std::shared_ptr<gui::Label>> m_labels;

    float m_scaled = 1;

    bool m_isHighlighted = false;

    sf::Color m_colorHolder;

public:

    Card::CardTypes m_cardType;
    Card::CardNations m_cardNation;
    Card::CardAbilities m_cardAbility;
    Card::CardAttackDirections m_cardAttackDirection;

    bool m_canAttackBase = true;
    bool m_canPierce = false;

    bool m_isSelected = false;
    bool m_isScaled = false;
    bool m_isOnField = false;
    bool m_hasAttacked = false;
    bool m_canShoot = false;
    bool m_isUnderAttack = false;

    int m_posOnField = -1;

    int m_nextturn = -1;

    int m_posInHand  = -1;

    float m_scaleofdescr = 1;

    int m_armor = 0;
    int m_income;
    int m_cost;
    int m_hp;
    int m_dmg;
    int m_acr;
    int m_penetration = 0;

    int m_cur_armor = 0;
    int m_cur_hp;
    int m_cur_dmg;
    int m_cur_acr;

    Card::CardNames m_cardName;

    int m_CardID = -1; /// Why

    int m_CardPositionInPlayerDeck = -1; // this is made for general deck

    Card() = delete;

    Card(const Card::CardNames& _cardname, const Game* const _game);

    Card(const Card& other) = default;

    ~Card();

    CardNames getCardName();

    std::string getCardNameInString();

    sf::RectangleShape& getSpriteRect();

    sf::RectangleShape& getBackRect();

    bool isPressed(sf::Event& _event, const sf::RenderWindow& _window);
    bool isPressed(sf::Event& _event, const sf::RenderWindow& _window, const sf::Mouse::Button& _btn);
    bool isPointedByMouse(const sf::RenderWindow& _window);
    void highlight(const sf::Color& _color);
    void disableHighlight();

    void initCard(const TextureManager& _texturemanager);

    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    void updateSpecs();

    void setPosition(const sf::Vector2f& _pos);

    void setPosition(const Alignment& _alignment, const sf::RenderTarget& _target, float _offsetX = 0, float _offsetY = 0);

    void setOrigin(const Alignment& _alignment, float _offsetX = 0, float _offsetY = 0);

    void move(const sf::Vector2f& _offset);

    void setScale(float _factor);

    void setSizeX2();
};
