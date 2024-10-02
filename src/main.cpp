#include "../include/taylor.h"
#include <iostream>

static double PI = 3.141592653;

int main(void) {
	std::cout << Taylor::euler(1) << std::endl;
	std::cout << Taylor::sine((30. * PI) / 180.) << std::endl;

	return 0;
}
