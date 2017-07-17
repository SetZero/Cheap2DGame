#include "stdafx.h"
#include "KeypressObserver.h"

KeypressObserver::KeypressObserver(std::shared_ptr<KeypressSubject> mod, KeypressVariable& div)
{
	model = mod;
	denom = div;
	//model->attach(std::make_unique<KeypressObserver>(this));
}

std::shared_ptr<KeypressSubject>& KeypressObserver::getSubject()
{
	return model;
}

KeypressVariable KeypressObserver::getKeypress()
{
	return denom;
}
