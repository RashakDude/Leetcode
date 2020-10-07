#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string sol;
        while(n>0){
            int a=n%26;
            if(a>0) sol.insert(sol.begin(),char(a+64));
            else sol.insert(sol.begin(),'Z');
            n=(n-1)/26;
        }
        return sol;
    }
};