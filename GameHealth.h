#pragma once

class GameHealth {
private:
	double mHealth = 0.0;
public:
	GameHealth(double health);
	~GameHealth();
	void changeHP(double health);
	double currentHP() const;
};