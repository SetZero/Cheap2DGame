#pragma once

class RGBColor {
private:
	int mR;
	int mG;
	int mB;
public:
	RGBColor(int r, int g, int b);
	int getR() const;
	int getG() const;
	int getB() const;
};