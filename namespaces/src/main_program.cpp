/*
 * Homework8.cpp
 *
 *  Created on: Sep 27, 2020
 *      Author: cj6bo
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>


namespace color {
       enum color{
         red   = 0xFF0000,
		 green = 0x00FF00,
		 blue  = 0x0000FF,
		 white = 0x000000

  };
}
namespace shape {
       enum shape{
         circle = 0,
		 triangle = 1,
		 square = 2
  };
}
void print_object(int color, int shape) {

	int r = color >> 16 & 0xFF;
	int g = (color >> 8) & 0xFF;
	int b = color & 0xFF;

	color::color estimated_color = color::white;

	if ( (r > g) and (r > b) ) {
		estimated_color = color::red;
	}
	else if ( (g > r) and (g > b) ) {
		estimated_color = color::green;
	}
	else if ( (b > r) and (b> g) ) {
		estimated_color = color::blue;
	}
	std::cout<<"The object is a ";
	switch ( estimated_color ) {
	case color::red: std::cout<<"red "; break;
	case color::green: std::cout<<"green "; break;
	case color::blue: std::cout<<"blue "; break;
	default: exit(1);
	}

	switch ( shape ) {
	case shape::triangle: std::cout<<"triangle";break;
	case shape::square: std::cout<<"square "; break;
	case shape::circle: std::cout<<"circle "; break;
	default: exit(1);
	}
	std::cout<<std::endl;
}
int main() {
	int random_color = 0;
	int random_shape = 0;
	srand(time(NULL));
	print_object(color::red, shape::circle);
	print_object(color::green, shape::square);
	print_object(color::blue, shape::square);
	for (int i=0; i < 10; i++) {
		random_color = rand() % 0xFFFFFF;
		random_shape = rand() % 3;
		print_object(random_color, random_shape);
	}
	return (0);
}
