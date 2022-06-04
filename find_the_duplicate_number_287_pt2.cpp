#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i;
        for(i=1; i<nums.size(); i++) {
            if (nums[i] == nums[i-1])
                break;
        }
        return nums[i];
    }
};
/*
In this case the vector was changed because of sorting.
Runtime: 268 ms, faster than 16.27% of C++ online submissions for Find the Duplicate Number.
Memory Usage: 61.2 MB, less than 91.17% of C++ online submissions for Find the Duplicate Number.
*/