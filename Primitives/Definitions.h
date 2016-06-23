#pragma once

#include <GL/gl.h>

namespace Primitives {
	// Name redefinition
	typedef unsigned short int usint;

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
		usint green, usint blue);

	// Set CMY Colors for an CMY component
	CMYComponent setCMYColors(CMYComponent cmyComponent, usint cian,
		usint magenta, usint yellow);
}