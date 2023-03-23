#include "Maths.h"
#include <functional>

namespace ResearchCpp {
	static bool ResearchCpp::max(int a, int b) {
		return a > b;
	}
	static int ResearchCpp::exposant(int a, int b) {
		int result = 1;
		for (int i = 0; i < b; i++) {
			result *= a;
		}
		return result;
	}
}