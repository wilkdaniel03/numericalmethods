#include "../include/taylor.h"
#include <iomanip>
#include <iostream>

static double PI = 3.141592653;

int main(void) {
	std::cout << std::setprecision(10) << Taylor::euler(1) << std::endl;
	std::cout << std::setprecision(10) << Taylor::sine(30. * PI / 180.) << std::endl;
	std::cout << std::setprecision(10) << Taylor::cosine(60 * PI / 180.) << std::endl;

	return 0;
}
