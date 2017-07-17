#pragma once
#include <vector>
#include "RGBColor.h"
#include "SDL.h"
#include "SDL_image.h"

class GameSprite {
private:
	SDL_Surface  *display;
	int mColor;
	int spriteHeight = 32;
	int spriteWidth = 32;
public:
	/* source and destination rectangles */
	SDL_Rect srcrect, dstrect;

	GameSprite(const char* file);
	GameSprite(const char* file, int dstx, int dsty);
	GameSprite(SDL_Surface* fullSprite);
	~GameSprite();
	SDL_Surface* getSprite();
	int getColorKey() const;
	void autoColorKey(SDL_Surface *screen);
	int getHeight() const;
	int getWidth() const;
	void setKeyframe(int frameX, int frameY);
};