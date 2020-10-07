#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++) map[nums[i]]++;
        int maxnum=0,maxind;
        for(auto j:map){
            if(j.second>maxnum){
                maxnum=j.second;
                maxind=j.first;
            }
        }
        return maxind;
    }
};