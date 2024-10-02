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
