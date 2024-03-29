#pragma once
#include <cassert>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "../math/algebra/vec.hpp"


using namespace sgc;
using namespace math;
using namespace algebra;



namespace sgc
{
namespace surface
{
	class Surface
	{
	public:
		Surface(size_t _width, size_t _height, color col = color{ 0, 0, 0 });
		Surface();
		~Surface();

		void drop_image(std::string filename);
		void load_image(std::string filename);

		void flip_vertically(void);

		void change_pixel_color(size_t x, size_t y, color col);
		void change_pixel_color(const vec2i& pos, color col);

		void fill(const color& c);
		void test_image(void);

		// TODO replace 
		size_t width, height;
	private:
		size_t color_deep = 255;
		std::vector<vec<3, uint8_t>> canvas;
	};
}}
