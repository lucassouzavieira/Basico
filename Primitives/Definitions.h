#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#include <Windows.h>
#include <gl\GL.h>

// Name redefinition
typedef unsigned short int usint;

namespace {
	// RGB struct
	typedef struct RGBComponent {
		GLbyte	red = 0;
		GLbyte	green = 0;
		GLbyte	blue = 0;
	} RGBComponent;

	// CMY struct
	typedef struct CMYComponent {
		GLbyte	cian = 0;
		GLbyte	magenta = 0;
		GLbyte	yellow = 0;
	} CMYComponent;

	// Set RGB Colors for an RGB component
	RGBComponent setRGBColors(RGBComponent rgbComponent, usint red,
		usint green, usint blue)
	{
		if (red > 255)
			red = 255;
		if (green > 255)
			green = 255;
		if (blue > 255)
			blue = 255;

		rgbComponent.red = red;
		rgbComponent.green = green;
		rgbComponent.blue = blue;

		return rgbComponent;
	}

	// Set CMY Colors for an CMY component
	CMYComponent setCMYColors(CMYComponent cmyComponent, usint cian,
		usint magenta, usint yellow)
	{
		if (cian > 255)
			cian = 255;
		if (magenta > 255)
			magenta = 255;
		if (yellow > 255)
			yellow = 255;

		cmyComponent.cian = cian;
		cmyComponent.magenta = magenta;
		cmyComponent.yellow = yellow;

		return cmyComponent;
	}
}
#endif