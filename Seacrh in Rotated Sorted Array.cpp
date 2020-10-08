#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0) return -1;
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target)return mid;
            if(nums[mid] > target){
                if(nums[mid] >= nums[low] && target < nums[low]) low = mid + 1;
                else high = mid - 1;
            }
            else{
                if(nums[mid] < nums[low] && target >= nums[low]) high = mid - 1;
                else low = mid + 1;
            }
        }
        return -1;
    }
};