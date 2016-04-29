#include "Definitions.h"

namespace Primitives {
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