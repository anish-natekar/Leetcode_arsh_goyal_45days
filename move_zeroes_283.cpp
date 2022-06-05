#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ctr = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                int j = i;
                while(j<nums.size() && nums[j]==0)
                    j++;  
                if(j<nums.size()) {
                    nums[i] = nums[j];
                    nums[j] = 0;    
                }
            }
        }
    }
};
/*
Runtime: 338 ms, faster than 5.31% of C++ online submissions for Move Zeroes.
Memory Usage: 19.3 MB, less than 58.73% of C++ online submissions for Move Zeroes.
*/