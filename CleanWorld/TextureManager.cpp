#include "TextureManager.h"
#include"Game.h"

SDL_Texture* TextureManager::LoadTexture(const char* filename) {
	SDL_Surface* tmpSurface = IMG_Load(filename);
	SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::_renderer, tmpSurface);
	SDL_FreeSurface(tmpSurface);
	return texture;
}
void TextureManager::Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest, SDL_RendererFlip flip) {
	SDL_RenderCopyEx(Game::_renderer, tex, &src, &dest, NULL, NULL, flip);
}