#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include<stdio.h>
#include<iostream>

class Game
{
public:
	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void update();
	void handleEvents();
	void render();
	void clean();

	bool running() { return isRunning; }

	static SDL_Renderer* _renderer;
	static SDL_Event event;
	enum groupLabels : std::size_t {
		groupMap,
		groupColliders,
		groupPlayer,
		groupNPS
	};
	static SDL_Rect camera;

private:
	bool isRunning;
	int cnt = 0;
	SDL_Window* _window;
	int mapScale = 3;
	SDL_Rect windowSize;
};