#pragma once

namespace Util {
	double factorial(int);
};

inline double Util::factorial(int n) {
	double res = 1.;
	int i = 2;
	while(i <= n) {
		res *= i;
		i++;
	}
	return res;
}
