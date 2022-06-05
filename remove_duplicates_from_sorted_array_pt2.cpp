#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                nums[k++] = nums[i];
            }
        }
    return k;
    }
};
/*
Runtime: 19 ms, faster than 44.33% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 18.4 MB, less than 75.11% of C++ online submissions for Remove Duplicates from Sorted Array.
*/