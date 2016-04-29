#pragma once
#include "Definitions.h"
#include <iostream>

using namespace std;

namespace Primitives {
	class Point2D
	{
	public:
		Point2D(int x, int y, RGBComponent colorComponent); // Construtor
		~Point2D();

		// Setters
		void setXCoordenate(int x); // Adjust the 'x' coordenate of point
		void setYCoordenate(int y); // Adjust the 'y' coordenate of point
		void setColors(usint red, usint green, usint blue); // Adjust the RGB color of point

		// Getters
		int getXCoordenate(); // Return the 'x' coordenate of point
		int getYCoordenate(); // Return the 'y' coordenate of point
		RGBComponent getColors(); // Return the RGB component of point

		// Operators Overloading
		Point2D operator++();
		Point2D operator--();
		Point2D operator+(Point2D point) const; // Sum
		Point2D operator-(Point2D point) const; // Sub
		Point2D operator*(Point2D point) const; // Product
		Point2D operator/(Point2D point) const; // Division
		friend ostream& operator<<(ostream& stream, const Point2D& point);
		bool operator==(const Point2D& point);
		bool operator!=(const Point2D& point);


	private:
		int x; // X Coordenate
		int y; // Y Coordenate
		RGBComponent rgbComponent; // Color
	};
}