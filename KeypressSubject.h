#pragma once
#include <vector>
#include <memory>
#include "KeypressObserver.h"
#include "KeypressVariable.h"


class KeypressObserver;
class KeypressSubject {
private:
	std::vector<std::shared_ptr<KeypressObserver>> views;
	KeypressVariable value;
public:
	void attach(std::shared_ptr<KeypressObserver> obs);
	void setVal(KeypressVariable& val);
	KeypressVariable& getVal();
	void notify();
};