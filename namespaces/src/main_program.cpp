/*
 * Homework7.cpp
 *
 *  Created on: Sep 27, 2020
 *      Author: cj6bo
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

namespace color {
       enum color{
         red   = 0xFF0000,
		 green = 0x009900,
		 blue  = 0x0000FF

  };
}
namespace shape {
       enum color{
         circle = 0,
		 triangle = 1,
		 square = 2
  };
}
void print_object(int color, int shape) {

}
int main() {
	int random_color = 0;
	int random_shape = 0;
	srand(time(NULL));
	print_object(color::red, shape::circle);
	print_object(color::green, shape::square);
	print_object(shape::triangle, color::blue);
	for (int i=0; i < 10; i++) {
		random_color = rand() % 0xFFFFFF;
		random_shape = rand() % 3;
		print_object(random_color, random_shape);
	}
	return (0);
}
