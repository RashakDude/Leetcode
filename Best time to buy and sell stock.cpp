#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        if(len==0) return 0;
        int minn=prices[0];
        int maxx=0;
        for(int i=1;i<len;i++){
            if(minn>prices[i]) minn = prices[i];
            else maxx = max(maxx,prices[i]-minn);
        }
        return maxx;
    }
};