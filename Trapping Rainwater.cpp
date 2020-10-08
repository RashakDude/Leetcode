#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int res = 0;
        if(right == -1) return 0;
        int lmax = height[left], rmax = height[right];
        while(left<right){
            lmax = max(lmax,height[left]);
            rmax = max(rmax,height[right]);
            res += lmax - height[left];
            res += rmax - height[right];
            if(height[left] < height[right]) left++;
            else right--;
        }
        return res;
    }
};