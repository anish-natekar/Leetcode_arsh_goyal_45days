#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) {
            for(int j=1; j<nums.size()-i; j++) {
                if(nums[j]<nums[j-1]) {
                    int temp = nums[j];
                    nums[j] = nums[j-1];
                    nums[j-1] = temp;
                }   
            }
        }
    }
};
/*
Runtime: 8 ms, faster than 9.41% of C++ online submissions for Sort Colors.
Memory Usage: 8.2 MB, less than 90.80% of C++ online submissions for Sort Colors.
*/