#include <vector>
using namespace std;

class Solution {
    vector<int> buf;

    void mergeSort(vector<int>& a, int lo, int hi) {
        if (hi - lo <= 1) return;
        int mid = lo + (hi - lo) / 2;
        mergeSort(a, lo, mid);
        mergeSort(a, mid, hi);

        int i = lo, j = mid, k = lo;
        while (i < mid && j < hi) {
            if (a[i] <= a[j]) buf[k++] = a[i++];
            else buf[k++] = a[j++];
        }
        while (i < mid) buf[k++] = a[i++];
        while (j < hi) buf[k++] = a[j++];
        for (int t = lo; t < hi; t++) a[t] = buf[t];
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        buf.assign(nums.size(), 0);
        mergeSort(nums, 0, (int)nums.size());
        return nums;
    }
};
