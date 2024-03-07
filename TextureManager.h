#pragma once

#include "SFML/Graphics.hpp"
#include <map>
#include <iostream>
#include <memory>
#include <iterator>

class TextureManager
{
    std::map<sf::String, std::shared_ptr<sf::Texture>> textures;
public:

    void LoadTexture(const sf::String& path, const sf::String& name);

    const sf::Texture& GetTextureRef(const sf::String& name) const;
};

