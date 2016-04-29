#include "Point2D.h"
namespace Primitives {
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
		//delete this;
	}

	// Adjust the 'x' coordenate of point
	void Point2D::setXCoordenate(int x)
	{
		this->x = x;
	}

	// Adjust the 'y' coordenate of point
	void Point2D::setYCoordenate(int y)
	{
		this->y = y;
	}

	// Adjust the RGB color of point
	void Point2D::setColors(usint red, usint green, usint blue)
	{
		this->rgbComponent = setRGBColors(this->rgbComponent, red, green, blue);
	}

	// Return the 'x' coordenate of point
	int Point2D::getXCoordenate()
	{
		return x;
	}

	// Return the 'y' coordenate of point
	int Point2D::getYCoordenate()
	{
		return y;
	}

	// Return the RGB component of point
	RGBComponent Point2D::getColors()
	{
		return rgbComponent;
	}

	// Operator Overloading
	Point2D Point2D::operator++()
	{
		return Point2D(x++, y++, rgbComponent);
	}

	// Operator Overloading
	Point2D Point2D::operator--()
	{
		return Point2D(x--, y--, rgbComponent);
	}

	// Operator Overloading
	Point2D Point2D::operator+(Point2D point) const
	{
		RGBComponent	component;
		RGBComponent	otherComponent = point.getColors();

		component = setRGBColors(component,
			rgbComponent.red + otherComponent.red,
			rgbComponent.green + otherComponent.green,
			rgbComponent.blue + otherComponent.blue
		);
		return Point2D(x + point.getXCoordenate(), y + point.getYCoordenate(), component);
	}
}