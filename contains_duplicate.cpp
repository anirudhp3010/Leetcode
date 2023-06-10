#include<unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for (int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }
        
        for(auto x:count){
            if(x.second>1) return true;
           
        }
        return false;
    }
};
