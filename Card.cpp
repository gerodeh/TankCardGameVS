#include "Card.h"

void Card::initCard(const TextureManager& _texturemanager)
{
     switch (m_cardName)
     {
        case Card::CardNames::T_34_76:
            m_hp = m_cur_hp = 2;
            m_dmg = m_cur_dmg = 1;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 1;
            m_cost = 2;
            m_cardType  = Card::CardTypes::MediumTank;
            m_cardNation = Card::CardNations::USSR;
            m_cardAbility = Card::CardAbilities::Protection_1_if_1;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("T-34-76"));
        break;

        case Card::CardNames::T_34_85:
            m_hp = m_cur_hp = 2;
            m_dmg = m_cur_dmg = 2;
            m_acr = m_cur_acr = 4;
            m_penetration = 0;
            m_income = 2;
            m_cost = 3;
            m_cardType  = Card::CardTypes::MediumTank;
            m_cardNation = Card::CardNations::USSR;
            m_cardAbility = Card::CardAbilities::None;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("T-34-85"));
        break;

        case Card::CardNames::SU_100:
            m_hp = m_cur_hp = 2;
            m_dmg = m_cur_dmg = 2;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 2;
            m_cost = 3;
            m_cardType  = Card::CardTypes::TankDestroyer;
            m_cardNation = Card::CardNations::USSR;
            m_cardAbility = Card::CardAbilities::Damage_1_if_Wehrmacht;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("SU-100"));
        break;

        case Card::CardNames::IS_2:
            m_hp = m_cur_hp = 4;
            m_dmg = m_cur_dmg = 3;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 3;
            m_cost = 6;
            m_cardType  = Card::CardTypes::HeavyTank;
            m_cardNation = Card::CardNations::USSR;
            m_cardAbility = Card::CardAbilities::ImmediateAttack;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("IS-2"));
        break;

        case Card::CardNames::MS_1:
            m_hp = m_cur_hp = 1;
            m_dmg = m_cur_dmg = 0;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 0;
            m_cost = 0;
            m_cardType  = Card::CardTypes::LightTank;
            m_cardNation = Card::CardNations::USSR;
            m_cardAbility = Card::CardAbilities::None;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("MS-1"));
        break;

        case Card::CardNames::LTvz38:
            m_hp = m_cur_hp = 1;
            m_dmg = m_cur_dmg = 1;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 1;
            m_cost = 2;
            m_cardType  = Card::CardTypes::LightTank;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::Heal_1HP_Ally_After_Play;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("LT vz.38"));
            m_scaleofdescr = 0.8f;
        break;

        case Card::CardNames::TigerI:
            m_hp = m_cur_hp = 4;
            m_dmg = m_cur_dmg = 2;
            m_acr = m_cur_acr = 4;
            m_penetration = 0;
            m_income = 3;
            m_cost = 5;
            m_cardType  = Card::CardTypes::HeavyTank;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::Protection_1_VS_MT;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("TigerI"));
        break;

        case Card::CardNames::Hetzer:
            m_hp = m_cur_hp = 1;
            m_dmg = m_cur_dmg = 1;
            m_acr = m_cur_acr = 4;
            m_penetration = 1;
            m_income = 1;
            m_cost = 2;
            m_cardType  = Card::CardTypes::TankDestroyer;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::None;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("Hetzer"));
        break;

        case Card::CardNames::TigerII:
            m_hp = m_cur_hp = 4;
            m_dmg = m_cur_dmg = 2;
            m_acr = m_cur_acr = 4;
            m_penetration = 0;
            m_income = 4;
            m_cost = 6;
            m_armor = m_cur_armor = 1;
            m_cardType  = Card::CardTypes::HeavyTank;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::DodgeLess_1_VS_MT_and_LT;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("TigerII"));
        break;

        case Card::CardNames::PzI:
            m_hp = m_cur_hp = 1;
            m_dmg = m_cur_dmg = 0;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 0;
            m_cost = 0;
            m_cardType  = Card::CardTypes::LightTank;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::None;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("Pz.I"));
        break;

        case Card::CardNames::PzIII:
            m_hp = m_cur_hp = 1;
            m_dmg = m_cur_dmg = 1;
            m_acr = m_cur_acr = 4;
            m_penetration = 0;
            m_income = 1;
            m_cost = 1;
            m_cardType  = Card::CardTypes::MediumTank;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::None;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("Pz.III"));
        break;

        case Card::CardNames::IS_1:
            m_hp = m_cur_hp = 4;
            m_dmg = m_cur_dmg = 2;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 3;
            m_cost = 5;
            m_cardType  = Card::CardTypes::HeavyTank;
            m_cardNation = Card::CardNations::USSR;
            m_cardAbility = Card::CardAbilities::Ricochet_if_1;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("IS-1"));
        break;

        case Card::CardNames::KV_1:
            m_hp = m_cur_hp = 3;
            m_dmg = m_cur_dmg = 1;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 2;
            m_cost = 3;
            m_cardType  = Card::CardTypes::HeavyTank;
            m_cardNation = Card::CardNations::USSR;
            m_cardAbility = Card::CardAbilities::Endurance_1_if_enemy_more_than_3;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("KV-1"));
        break;

        case Card::CardNames::SU_152:
            m_hp = m_cur_hp = 2;
            m_dmg = m_cur_dmg = 1;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 2;
            m_cost = 4;
            m_cardType  = Card::CardTypes::TankDestroyer;
            m_cardNation = Card::CardNations::USSR;
            m_cardAbility = Card::CardAbilities::Damage_4_if_MT_and_LT;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("SU-152"));
        break;

        case Card::CardNames::ISU_152:
            m_hp = m_cur_hp = 3;
            m_dmg = m_cur_dmg = 2;
            m_acr = m_cur_acr = 3;
            m_penetration = 0;
            m_income = 3;
            m_cost = 5;
            m_cardType  = Card::CardTypes::TankDestroyer;
            m_cardNation = Card::CardNations::USSR;
            m_cardAbility = Card::CardAbilities::Damage_4_if_MT_and_LT;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("ISU-152"));
        break;

        case Card::CardNames::Panther:
            m_hp = m_cur_hp = 3;
            m_dmg = m_cur_dmg = 1;
            m_acr = m_cur_acr = 4;
            m_penetration = 0;
            m_income = 2;
            m_cost = 3;
            m_cardType  = Card::CardTypes::MediumTank;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::Protection_1_if_1;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("Panther"));
        break;

        case Card::CardNames::Lowe:
            m_hp = m_cur_hp = 3;
            m_dmg = m_cur_dmg = 2;
            m_acr = m_cur_acr = 4;
            m_penetration = 0;
            m_income = 3;
            m_cost = 6;
            m_cardType  = Card::CardTypes::HeavyTank;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::Only_1_DMG;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("Lowe"));
        break;

        case Card::CardNames::MarderI:
            m_hp = m_cur_hp = 1;
            m_dmg = m_cur_dmg = 2;
            m_acr = m_cur_acr = 4;
            m_penetration = 1;
            m_income = 2;
            m_cost = 4;
            m_cardType  = Card::CardTypes::HeavyTank;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::Only_1_DMG;
            m_cardAttackDirection = Card::CardAttackDirections::ThreeLines;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("MarderI"));
        break;

        case Card::CardNames::StugIIIG:
            m_hp = m_cur_hp = 2;
            m_dmg = m_cur_dmg = 2;
            m_acr = m_cur_acr = 4;
            m_penetration = 0;
            m_income = 2;
            m_cost = 3;
            m_cardType  = Card::CardTypes::TankDestroyer;
            m_cardNation = Card::CardNations::Wehrmacht;
            m_cardAbility = Card::CardAbilities::Get_1_Acr_if_HT;
            m_cardAttackDirection = Card::CardAttackDirections::Forward;
            m_sprite.setTexture(&_texturemanager.GetTextureRef("StugIIIG"));
        break;
    }

    m_labels[0]->setString(std::to_string(m_cur_hp));
    m_labels[1]->setString(std::to_string(m_cur_dmg));
    m_labels[2]->setString(std::to_string(m_cost));
    m_labels[3]->setString(std::to_string(m_cur_acr));
    if (m_cur_armor > 0 || m_armor > 0) m_labels[5]->setString(std::to_string(m_cur_armor));
}

Card::Card(const Card::CardNames& _cardname, const Game* const _game)
{
    m_cardName = _cardname;

    m_backrect.setFillColor(sf::Color(210,210,210));
    m_backrect.setSize(sf::Vector2f(157,207));
    setOriginByAlignment(m_backrect, Alignment::Center);
    m_sprite.setSize(sf::Vector2f(150,200));
    setOriginByAlignment(m_sprite, Alignment::Center);
    m_backrect.setPosition(sf::Vector2f(0, 0));

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String("0"),                // string
        17,                             // char size
        sf::String("Label_HP")          // name
    ));
    m_labels[0]->setTextColor(sf::Color::Black);
    m_labels[0]->setFont(_game->m_fontforCards);
    m_labels[0]->setOrigin(Alignment::Center);
    m_labels[0]->setPosition(sf::Vector2f(59.f, 84.f));

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String("0"),                // string
        17,                             // char size
        sf::String("Label_DMG")         // name
    ));
    m_labels[1]->setTextColor(sf::Color::Black);
    m_labels[1]->setFont(_game->m_fontforCards);
    m_labels[1]->setOrigin(Alignment::Center);
    m_labels[1]->setPosition(sf::Vector2f(-59.f, 84.f));

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String("0"),                // string
        14,                             // char size
        sf::String("Label_COST")        // name
    ));
    m_labels[2]->setTextColor(sf::Color::Black);
    m_labels[2]->setFont(_game->m_fontforCards);
    m_labels[2]->setOrigin(Alignment::Center);
    m_labels[2]->setPosition(sf::Vector2f(59.f, 13.f));

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String("0"),                // string
        14,                             // char size
        sf::String("Label_ACR")         // name
    ));
    m_labels[3]->setTextColor(sf::Color::Black);
    m_labels[3]->setFont(_game->m_fontforCards);
    m_labels[3]->setOrigin(Alignment::Center);
    m_labels[3]->setPosition(sf::Vector2f(-64.f, 56.5f));

    m_labels.push_back(std::make_shared<gui::Label> /// THIS LABEL IS NOT USED BECAUSE CARDS HAS DESCR IN SPRITE
    (
        sf::String(""),                 // string
        12,                             // char size
        sf::String("Label_DESCRIPTION") // name
    ));
    m_labels[4]->setTextColor(sf::Color::Black);
    m_labels[4]->setFont(_game->m_fontforCards);
    m_labels[4]->setOrigin(Alignment::Center);
    m_labels[4]->setPosition(sf::Vector2f(-55, 12));

    m_labels.push_back(std::make_shared<gui::Label>
    (
        sf::String(""),                 // string
        15,                             // char size
        sf::String("Label_ARMOR")       // name
    ));
    m_labels[5]->setTextColor(sf::Color::Black);
    m_labels[5]->setFont(_game->m_fontforCards);
    m_labels[5]->setOrigin(Alignment::Center);
    m_labels[5]->setPosition(sf::Vector2f(-62.f, 14.f));

    initCard(_game->m_texturemanager);
}

Card::~Card()
{ //IT CRASHES THE GAME FOR SOME REASON
    /*delete labels[0];
    delete labels[1];
    delete labels[2];
    delete labels[3];
    delete labels[4];
    labels.clear();
    labels.shrink_to_fit();*/
}

Card::CardNames Card::getCardName()
{
    return m_cardName;
}

void Card::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_backrect);
    target.draw(m_sprite);
    for (const auto& lbl : m_labels)
    {
        target.draw(*lbl);
    }
}

bool Card::isPressed(sf::Event& _event, const sf::RenderWindow& _window)
{
    if (_event.type == sf::Event::MouseButtonReleased)
    {
        return this->isPointedByMouse(_window);
    }
    return false;
}

bool Card::isPressed(sf::Event& _event, const sf::RenderWindow& _window, const sf::Mouse::Button& _btn)
{
    if (_event.type == sf::Event::MouseButtonReleased && _event.mouseButton.button == _btn)
    {
        return this->isPointedByMouse(_window);
    }
    return false;
}

bool Card::isPointedByMouse(const sf::RenderWindow& _window)
{
    if (m_sprite.getGlobalBounds().contains(_window.mapPixelToCoords(sf::Mouse::getPosition(_window))))
    {
        return true;
    }
    return false;
}

void Card::highlight(const sf::Color& _color)
{
    if (!m_isHighlighted)
    {
        m_colorHolder = m_backrect.getFillColor();
        m_backrect.setFillColor(_color);
        m_isHighlighted = true;
    }
}

void Card::disableHighlight()
{
    if (m_isHighlighted)
    {
        m_backrect.setFillColor(m_colorHolder);
        m_isHighlighted = false;
    }
}

void Card::setPosition(const sf::Vector2f& _pos)
{
    m_sprite.setPosition(_pos);
    m_backrect.setPosition(_pos);
    for (const auto& lbl : m_labels)
    {
        lbl->setPosition(Alignment::Center, m_backrect);
    }
    m_labels[0]->move(sf::Vector2f(59.f, 84.f));
    m_labels[1]->move(sf::Vector2f(-59.f, 84.f));
    m_labels[2]->move(sf::Vector2f(59.f, 13.f));
    m_labels[3]->move(sf::Vector2f(-64.f, 56.5f));
    m_labels[4]->move(sf::Vector2f(-66.f, 8.f));
    m_labels[5]->move(sf::Vector2f(54.f, 48.f));
}

void Card::setPosition(const Alignment& _alignment, const sf::RenderTarget& _target, float _offsetX, float _offsetY)
{
    setPositionByAlignment(m_sprite, _target, _alignment, _offsetX, _offsetY);
    setPositionByAlignment(m_backrect, _target, _alignment, _offsetX, _offsetY);
    for (const auto& lbl : m_labels)
    {
        lbl->setPosition(Alignment::Center, m_backrect);
    }
    m_labels[0]->move(sf::Vector2f(59 * m_scaled, 84 * m_scaled));
    m_labels[1]->move(sf::Vector2f(-59 * m_scaled, 84 * m_scaled));
    m_labels[2]->move(sf::Vector2f(59 * m_scaled, 13 * m_scaled));
    m_labels[3]->move(sf::Vector2f(-64 * m_scaled, 56.5f * m_scaled));
    m_labels[4]->move(sf::Vector2f(-66 * m_scaled, 8 * m_scaled));
    m_labels[5]->move(sf::Vector2f(54 * m_scaled, 48 * m_scaled));

    /*if (m_isScaled)
    {
        m_labels[0]->move(sf::Vector2f(59 * m_scaled,84 * m_scaled));
        m_labels[1]->move(sf::Vector2f(-59 * m_scaled, 84 * m_scaled));
        m_labels[2]->move(sf::Vector2f(59 * m_scaled,13 * m_scaled));
        m_labels[3]->move(sf::Vector2f(-64 * m_scaled, 56.5f * m_scaled));
        m_labels[4]->move(sf::Vector2f(-66 * m_scaled, 8 * m_scaled));
        m_labels[5]->move(sf::Vector2f(54 * m_scaled, 48 * m_scaled));
    }
    else // !m_isScaled
    {
        m_labels[0]->move(sf::Vector2f(59,84));
        m_labels[1]->move(sf::Vector2f(-59, 84));
        m_labels[2]->move(sf::Vector2f(59,13));
        m_labels[3]->move(sf::Vector2f(-64, 56.5f));
        m_labels[4]->move(sf::Vector2f(-66, 8));
        m_labels[5]->move(sf::Vector2f(54,48));
    }*/

}

void Card::setOrigin(const Alignment& _alignment, float _offsetX, float _offsetY)
{
    setOriginByAlignment(m_sprite, _alignment, _offsetX, _offsetY);
    setOriginByAlignment(m_backrect, _alignment, _offsetX, _offsetY);

    for (const auto& lbl : m_labels)
    {
        lbl->setOrigin(Alignment::Center);
    }
}

void Card::move(const sf::Vector2f& _offset)
{
    m_sprite.move(_offset);
    m_backrect.move(_offset);
    if (!m_isScaled)
    {
        for (const auto& lbl : m_labels)
        {
            lbl->move(_offset);
        }
    }
    else // m_isScaled
    {
        for (const auto& lbl : m_labels)
        {
            lbl->move(_offset * m_scaled);
        }
    }
}

 void Card::setScale(float _factor)
 {
    //sf::Vector2f tmpforsprite = this->sprite.getPosition();
    //sf::Vector2f tmpforlabels;
    m_sprite.setScale(_factor, _factor);
    //this->sprite.setPosition(0,0);
    //setOriginByAlignment(sprite, this->game->window, GuiComponent::componentAlignment::Center);

    m_backrect.setScale(_factor, _factor);
    //this->backrect.setPosition(0,0);
    //setOriginByAlignment(backrect, this->game->window, GuiComponent::componentAlignment::Center);

    for (const auto& lbl : m_labels)
    {
        lbl->setTextScale(sf::Vector2f(_factor, _factor));
    }
    if (_factor == 1) m_labels[4]->setTextScale(sf::Vector2f(m_scaleofdescr, m_scaleofdescr));
    if (_factor != 1) m_labels[4]->setTextScale(sf::Vector2f(m_scaleofdescr * _factor, m_scaleofdescr * _factor));
    //labels[0]->Move(59*factor,84*factor);
    //labels[1]->Move(-59*factor, 84*factor);
    //labels[2]->Move(59*factor,13*factor);
    //labels[3]->Move(-64*factor, 56.5*factor);
    //labels[4]->Move(-66*factor, 8*factor);

    if (_factor != 1) m_isScaled = true;
    if (_factor == 1) m_isScaled = false;
    m_scaled = _factor;
 }

sf::RectangleShape& Card::getSpriteRect()
{
    return m_sprite;
}

sf::RectangleShape& Card::getBackRect()
{
    return m_backrect;
}

void Card::updateSpecs()
{
    m_labels[0]->setString(std::to_string(m_cur_hp));
    m_labels[1]->setString(std::to_string(m_cur_dmg));
    m_labels[2]->setString(std::to_string(m_cost));
    m_labels[3]->setString(std::to_string(m_cur_acr));
    if (m_armor > 0) m_labels[5]->setString(std::to_string(m_cur_armor));
}

std::string Card::getCardNameInString()
{
    switch (m_cardName)
    {
        case Card::CardNames::T_34_76:
            return "T-34-76";
        break;

        case Card::CardNames::T_34_85:
            return "T-34-85";
        break;

        case Card::CardNames::SU_100:
            return "SU-100";
        break;

        case Card::CardNames::IS_2:
            return "IS-2";
        break;

        case Card::CardNames::MS_1:
            return "MS-1";
        break;

        case Card::CardNames::LTvz38:
            return "Ltvz38";
        break;

        case Card::CardNames::TigerI:
            return "TigerI";
        break;

        case Card::CardNames::Hetzer:
            return "Hetzer";
        break;

        case Card::CardNames::TigerII:
            return "TigerII";
        break;

        case Card::CardNames::PzIII:
            return "PzIII";
        break;
    }
    return "Tank";
}

/*
Card::Card(const Card& other)
{
    this->game = other.game;

    this->sprite = other.sprite;

    this->backrect = other.backrect;

    this->labels = other.labels;

    this->scaled = other.scaled;

    this->cardType = other.cardType;
    this->cardNation = other.cardNation;
    this->cardAbility = other.cardAbility;
    this->cardAttackDirection = other.cardAttackDirection;

    this->canAttackBase = other.canAttackBase;
    this->canPierce = other.canPierce;

    this->isSelected = other.isSelected;
    this->isScaled = other.isScaled;

    this->scaleofdescr = other.scaleofdescr;

    this->armor = other.armor;
    this->income = other.income;
    this->cost = other.cost;
    this->hp = other.hp;
    this->dmg = other.dmg;
    this->acr = other.acr;
    this->penetration = other.penetration;

    this->cur_armor = other.cur_armor;
    this->cur_hp = other.cur_hp;
    this->cur_dmg = other.cur_dmg;
    this->cur_acr = other.cur_acr;

    this->cardName = other.cardName;

    this->CardID = other.CardID;

    this->CardPositionInPlayerDeck = other.CardPositionInPlayerDeck;
}*/
