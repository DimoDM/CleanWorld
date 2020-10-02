<<<<<<< HEAD
﻿#include"Game.h"
=======
﻿#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
>>>>>>> ef37ec40bc548b39037137c05f7dafb9cc013a38

Game* game = nullptr;
int main(int argc, char** argv)
{
<<<<<<< HEAD
	const int FPS = 60;
	const int frameDelay = 1000 / FPS;
	Uint32 frameStart;
	int frameTime;

	game = new Game();
	game->init("Display", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
	
	while (game->running()) {
		frameStart = SDL_GetTicks();
		//std::cout << frameStart << std::endl;

		game->handleEvents();
		game->update();
		game->render();

		frameTime = SDL_GetTicks() - frameStart;
		if (frameDelay > frameTime) {
			SDL_Delay(frameDelay - frameTime);
		}
	}
	system("pause");
	return 0;
=======

>>>>>>> ef37ec40bc548b39037137c05f7dafb9cc013a38
}