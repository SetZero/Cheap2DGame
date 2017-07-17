#include <memory>
#include "stdafx.h"
#include "GameObject.h"

void GameObject::updatePosition()
{
	mSprite.get()->dstrect = { mPosition.get()->getX(), mPosition.get()->getY(), mSprite.get()->getWidth(), mSprite.get()->getHeight() };
}

GameObject::GameObject(GameSprite & sprite, LevelPosition & pos)
{
	sprite.dstrect = { pos.getX(), pos.getY(), sprite.getWidth(), sprite.getHeight() };
	mSprite = std::make_shared<GameSprite>(sprite);
	mPosition = std::make_shared<LevelPosition>(pos);
}

std::shared_ptr<GameSprite> GameObject::drawObject(SDL_Renderer *renderer)
{
	updatePosition();
	SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, mSprite.get()->getSprite());
	SDL_RenderCopy(renderer, texture, &mSprite.get()->srcrect, &mSprite.get()->dstrect);
	SDL_DestroyTexture(texture);
	return mSprite;
}
