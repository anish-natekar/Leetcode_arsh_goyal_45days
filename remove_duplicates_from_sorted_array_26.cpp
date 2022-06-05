#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=nums.size()-1; i>0; i--) {
            if(nums[i] == nums[i-1])
                nums.erase(nums.begin()+i);
        }
    return nums.size();
    }
};
/*
Runtime: 35 ms, faster than 11.34% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 18.5 MB, less than 36.75% of C++ online submissions for Remove Duplicates from Sorted Array.
*/