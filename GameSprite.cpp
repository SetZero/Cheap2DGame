#include "stdafx.h"
#include "GameSprite.h"
#include <iostream>

GameSprite::GameSprite(const char * file)
{
	display = IMG_Load(file);
	if (!display) {
		printf("IMG_Load: %s\n", IMG_GetError());
	}
	std::cout << "Created a Sprite: " << file << std::endl;
}

GameSprite::GameSprite(const char * file, int dstx, int dsty) : GameSprite(file)
{
	srcrect = { dstx, dsty, spriteWidth, spriteHeight };
}

GameSprite::GameSprite(SDL_Surface* fullSprite)
{
	display = fullSprite;
}

GameSprite::~GameSprite()
{
	//SDL_FreeSurface(display);
}

SDL_Surface* GameSprite::getSprite()
{
	return display;
}

int GameSprite::getColorKey() const
{
	return mColor;
}

void GameSprite::autoColorKey(SDL_Surface *screen)
{
	mColor = SDL_MapRGB(screen->format, 255, 0, 255);
	SDL_SetColorKey(display, SDL_TRUE, mColor);
}

int GameSprite::getHeight() const
{
	return spriteHeight;
}

int GameSprite::getWidth() const
{
	return spriteWidth;
}

void GameSprite::setKeyframe(int frameX, int frameY)
{
	srcrect = { frameX*spriteWidth, frameY*spriteWidth, spriteWidth, spriteHeight };
}
