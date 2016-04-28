#include "Point2D.h"

// Constructor
Point2D::Point2D(int x, int y, RGBComponent colorComponent)
{
	this->x = x;
	this->y = y;
	this->rgbComponent = colorComponent;
}

// Destructor
Point2D::~Point2D()
{
	delete this;
}

void Point2D::setXCoordenate(int x)
{
	this->x = x;
}

void Point2D::setYCoordenate(int y)
{
	this->y = y;
}

void Point2D::setColors(usint red, usint green, usint blue)
{
	this->rgbComponent = setRGBColors(this->rgbComponent, red, green, blue);
}

int Point2D::getXCoordenate()
{
	return x;
}

int Point2D::getYCoordenate()
{
	return y;
}

RGBComponent Point2D::getColors()
{
	return rgbComponent;
}
