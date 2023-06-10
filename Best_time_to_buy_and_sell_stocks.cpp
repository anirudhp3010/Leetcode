
#include <unordered_map>
#include <iostream>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int day1, day2, maxp;
        day1=prices[0];
        maxp =0;
        for(int i=1; i<prices.size(); i++){
            if (prices[i]<=day1){
                day1=prices[i];
            }
            else if(prices[i]-day1>maxp){
                maxp=prices[i]-day1;
            }
        }
        return maxp;       
    }
};
