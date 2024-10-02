#include "../include/taylor.h"

double Taylor::euler(int x) {
	double res = 0.;
	for(int i = 0; i <= Taylor::N; i++) {
		double upper = std::powl(x,i);
		double fact = Util::factorial(i);
		res += upper / fact;
	}
	return res;
}

double Taylor::sine(double x) {
	double res = 0.;
	for(int i = 0; i <= Taylor::N; i++) {
		double upper = std::pow(-1.,i) * std::powl(x, 2. * (double) i + 1.);
		double fact = Util::factorial(2 * i + 1);
		res += upper / fact;
	}
	return res;
}

double Taylor::cosine(double x) {
	double res = 0.;
	for(int i = 0; i <= Taylor::N; i++) {
		double upper = std::pow(-1.,i) * std::powl(x,2. * (double) i);
		double fact = Util::factorial(2 * i);
		res += upper / fact;
	}
	return res;
}
