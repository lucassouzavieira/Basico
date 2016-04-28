#pragma once

#include <GLFW\glfw3.h>

namespace {

	class Rasterization
	{
	public:
		void dda();
		void bresenham();

	private:
		Rasterization();
		~Rasterization();
	};
}