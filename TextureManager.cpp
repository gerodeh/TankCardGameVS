#include "TextureManager.h"

void TextureManager::LoadTexture(const sf::String& path, const sf::String& name)
{
    textures.emplace(std::make_pair(name, new sf::Texture));
    textures.at(name)->loadFromFile(path);
}

const sf::Texture& TextureManager::GetTextureRef(const sf::String& name) const
{
    return *textures.at(name);
}
