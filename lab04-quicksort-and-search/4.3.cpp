#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int boundary = 0;
        for (size_t scan = 0; scan < nums.size(); scan++)
            if (nums[scan] % 2 == 0)
                swap(nums[boundary++], nums[scan]);
        return nums;
    }
};
