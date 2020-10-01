#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> a,x;
    
public:
    Solution(vector<int>& nums) {
        a = nums;
        x = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return a;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        next_permutation(x.begin(),x.end());
        return x;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */