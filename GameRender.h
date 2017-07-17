#pragma once
#include "Level.h"
#include "RGBColor.h"
#include "KeypressSubject.h"
#include <SDL.h>
#include <vector>
#include <cmath> 
#include <memory>

class GameRender {
private:
	Level& mLevel;
	std::shared_ptr<KeypressSubject>& mSubject;
	SDL_Event event;
	SDL_Renderer *renderer;
	SDL_Window *window;
	SDL_Surface *screen;
	static const int WINDOW_WIDTH = 600;
	static const int WINDOW_HEIGHT = 600;
	void HandleEvent(SDL_Event event);
public:
	GameRender(Level& l, std::shared_ptr<KeypressSubject>& s);
	~GameRender();
	void startLoop();
	void addPixel(RGBColor& color, int x, int y);
	void drawLevel();
};