#include "stdafx.h"
#include "RGBColor.h"

RGBColor::RGBColor(int r, int g, int b) : mR(r), mG(g), mB(b)
{

}

int RGBColor::getR() const
{
	return mR;
}

int RGBColor::getG() const
{
	return mG;
}

int RGBColor::getB() const
{
	return mB;
}
