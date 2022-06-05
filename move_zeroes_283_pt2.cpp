#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int st = 0, en=1;
        
        while(st<nums.size() && en<nums.size()) {
            if(nums[en]==0) {
                en++;
                continue;
            }
            if(nums[st]!=0) {
                st++;
                en = st;
                continue;
            }
            int temp = nums[st];
            nums[st] = nums[en];
            nums[en] = temp;
        }
    }
};
/*
Runtime: 424 ms, faster than 5.06% of C++ online submissions for Move Zeroes.
Memory Usage: 19.1 MB, less than 83.93% of C++ online submissions for Move Zeroes.
*/