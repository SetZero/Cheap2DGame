#include "stdafx.h"
#include "GameRender.h"
#include "GamePlayerObject.h"
#include <iostream>
#include <memory>

void GameRender::HandleEvent(SDL_Event event)
{
	KeypressVariable temp(event);
	mSubject.get()->setVal(temp);
}

GameRender::GameRender(Level& l, std::shared_ptr<KeypressSubject>& s) : mLevel(l), mSubject(s)
{

	SDL_Init(SDL_INIT_VIDEO);
	IMG_Init(IMG_INIT_PNG);

	window = SDL_CreateWindow("Billiges Kack Game",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
	renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_SetRenderDrawColor(renderer, 168, 230, 255, 255);
	SDL_RenderClear(renderer);
}

GameRender::~GameRender()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	IMG_Quit();
}

void GameRender::startLoop()
{
	//main loop
	while (1) {
		drawLevel();
		if (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT)
				break;
			else
				HandleEvent(event);
		}
		SDL_RenderClear(renderer);
	}
}

void GameRender::addPixel(RGBColor& color, int x, int y)
{
}

void GameRender::drawLevel()
{
	for (auto obj : mLevel.getObjects()) {
		obj.drawObject(renderer);
	}
	SDL_RenderPresent(renderer);
}
