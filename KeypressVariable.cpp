#include "stdafx.h"
#include "KeypressVariable.h"

KeypressVariable::KeypressVariable()
{
}

KeypressVariable::KeypressVariable(SDL_Event keypress) : mKeypress(keypress)
{
	
}

bool KeypressVariable::isMovementKey()
{
	if (mKeypress.type == SDL_KEYDOWN) {
		switch (mKeypress.key.keysym.sym) {
		case SDLK_LEFT:
		case SDLK_RIGHT:
		case SDLK_UP:
		case SDLK_DOWN:
			return true;
			break;
		default:
			return false;
		}
	}
	return false;
}

SDL_Event KeypressVariable::getEvent()
{
	return mKeypress;
}
