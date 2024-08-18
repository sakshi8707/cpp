#include<bits/stdc++.h>
using namespace std;

//brute approch
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for (int j = i + 1; j < n;j++)
            {
                if(nums[i]==nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }   
};
//better approch

// best approch
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};


int main(){
    


return 0;
}