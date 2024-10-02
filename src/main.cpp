#include "../include/taylor.h"
#include <iomanip>
#include <iostream>
#include <string>

static double PI = 3.141592653;

typedef double (*funcint)(int);
typedef double (*funcdouble)(double);

void printint(funcint f, std::string str, int arg) {
	std::cout << std::setw(10) << std::left << str;
	std::cout << std::setw(10) << std::setprecision(10) << std::right << f(arg);
	std::cout << std::endl;
}

void printdouble(funcdouble f, std::string str, double arg) {
	std::cout << std::setw(10) << std::left << str;
	std::cout << std::setw(10) << std::setprecision(10) << std::right << f(arg);
	std::cout << std::endl;
}

int main(void) {
	printint(Taylor::euler, std::string("Euler"),1);
	printdouble(Taylor::sine, std::string("Sine"),30. * PI / 180.);
	printdouble(Taylor::cosine, std::string("Cosine"),60. * PI / 180.);

	return 0;
}
