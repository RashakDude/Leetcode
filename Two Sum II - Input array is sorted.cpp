#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        vector<int> v;
        while(left<right){
            int first = numbers[left];
            int second = numbers[right];
            if((first+second)==target){
                v.push_back(left+1);
                v.push_back(right+1);
                break;
            }
            else if((first+second)>target) right--;
            else left++;
        }
        return v;
    }
};