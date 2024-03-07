#include "GameStateStart.h"
#include "Game.h"

#include "imgui.h"
#include "imgui-SFML.h"
#include <SFML/Graphics.hpp>

int main()
{
    Game game;

    game.pushState(new GameStateStart(&game));

    game.gameLoop();


    return EXIT_SUCCESS;
}
