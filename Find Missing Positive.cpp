#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int j=1;
        set<int> num;
        for(int i=0;i<n;i++){
            if(nums[i]>0)
            num.insert(nums[i]);
        }
        for(auto it=num.begin(); it != num.end(); ++it){
            if(*it != j) return j;
            else j++;
        }
        return j;
    }
};