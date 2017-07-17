#pragma once
#include <memory>
#include "KeypressSubject.h"
#include "KeypressVariable.h"

class KeypressSubject;
class KeypressObserver {
private:
	std::shared_ptr<KeypressSubject> model;
	KeypressVariable denom;
public:
	KeypressObserver(std::shared_ptr<KeypressSubject> mod, KeypressVariable& div);
	virtual void keypressUpdate() = 0;
protected:
	std::shared_ptr<KeypressSubject>& getSubject();
	KeypressVariable getKeypress();
};