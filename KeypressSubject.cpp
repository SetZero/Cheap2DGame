#include "stdafx.h"
#include "KeypressSubject.h"
#include <iostream>

void KeypressSubject::attach(std::shared_ptr<KeypressObserver> obs)
{
	views.push_back(obs);
}

void KeypressSubject::setVal(KeypressVariable & val)
{
	value = val;
	notify();
}

KeypressVariable & KeypressSubject::getVal()
{
	return value;
}

void KeypressSubject::notify()
{
	for (size_t i = 0; i < views.size(); i++) {
		views[i].get()->keypressUpdate();
	}
}
