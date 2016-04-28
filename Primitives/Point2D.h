#ifndef POINT2D_H
#define POINT2D_H

#include "Definitions.h"
class Point2D
{
public:
	Point2D(int x, int y, RGBComponent colorComponent); // Construtor
	~Point2D();

	// Setters
	void setXCoordenate(int x);
	void setYCoordenate(int y);
	void setColors(usint red, usint green, usint blue);

	// Getters
	int getXCoordenate();
	int getYCoordenate();
	RGBComponent getColors();

private:
	int x; // X Coordenate
	int y; // Y Coordenate
	RGBComponent rgbComponent;
};

#endif