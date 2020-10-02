#include"Game.h"
#include <iostream>

SDL_Renderer* Game::_renderer = nullptr;
SDL_Event Game::event;

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen) {
	int flags = 0;
	if (fullscreen) {
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "Subsystems initialized" << std::endl;

		_window = SDL_CreateWindow("Display", xpos, ypos, width, height, flags);
		if (_window) {
			std::cout << "Window Created \n";
		}
		_renderer = SDL_CreateRenderer(_window, -1, 0);

		if (_renderer) {
			SDL_SetRenderDrawColor(_renderer, 255, 255, 255, 255);
			std::cout << "Renderer Created \n";
		}
		isRunning = true;
	}
	else isRunning = false;
}


void Game::update() {

}

void Game::handleEvents() {

}

void Game::render() {

}

void Game::clean() {

}