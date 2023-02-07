#include "Header.h"
#include <functional>
#include <vector>

namespace ResearchCpp {

	static int lengthOfLIS(std::vector<int>& nums) {
		//auto t = new std::vector<int>(nums.size());
		int m = nums.size();
		int t = nums[0];
		for (int i = 1; i < nums.size(); i++) { 
			if (nums[i] > t) {
				m--;
				t = nums[i];
			} 
		}
		return m;
	}

}