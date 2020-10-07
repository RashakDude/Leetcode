#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])==0 or abs(map[nums[i]]-i)>k) map[nums[i]]=i;
            else return true;
        }
        return false;
    }
};