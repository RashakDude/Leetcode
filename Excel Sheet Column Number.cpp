#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        auto const A = 'A' - 1;
        for (auto v: s) res = res * 26 + (v - A); 
        return res;
    }
};