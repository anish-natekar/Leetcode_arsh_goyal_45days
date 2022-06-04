#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> dict;
        int i;
        for(i=0; i<nums.size(); i++) {
            auto it = dict.find(nums[i]); // O(log(n))
            if(it == dict.end()) {
                dict[nums[i]] = 1;
            }
            else 
                break; 
        }
        return nums[i];
    }
};
/*
Runtime: 401 ms, faster than 6.90% of C++ online submissions for Find the Duplicate Number.
Memory Usage: 85.7 MB, less than 11.21% of C++ online submissions for Find the Duplicate Number.
*/