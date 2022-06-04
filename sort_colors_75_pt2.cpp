#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ctr;
        ctr.push_back(0);
        ctr.push_back(0);
        ctr.push_back(0);
        for(int i=0; i<nums.size(); i++) {
            ctr[nums[i]] += 1;
        }
        for(int i=0; i<nums.size(); i++)
            if(i<ctr[0])
                nums[i] = 0;
            else if(i<ctr[0]+ctr[1])
                nums[i] = 1;
            else
                nums[i] = 2;
    }
};
/*
Runtime: 4 ms, faster than 41.77% of C++ online submissions for Sort Colors.
Memory Usage: 8.2 MB, less than 90.80% of C++ online submissions for Sort Colors.
*/