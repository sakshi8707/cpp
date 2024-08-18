#include<bits/stdc++.h>
using namespace std;
           //brute force approch

// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
        
//     }
// };
           //optimal force approch
class Solution {
public:
    void recursivePermute(vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,vector<int>&freq)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds); 
        }
        for (int i = 0; i < nums.size();i++)
        {
            if(!freq[i])
            {
            ds.push_back(nums[i]);
            freq[i] = 1;
            recursivePermute(nums, ds, ans, freq);
            freq[i] = 0;
            ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> ans;
        int n = nums.size();
        vector<int> ds;
        vector<int> freq(n,0);
        recursivePermute(nums,ds,ans,freq);
        return ans;
    }
};



int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n;i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    Solution s;
    vector<vector<int>> ans = s.permute(nums);
    for (int i = 0; i < ans.size();i++)
    {
        for (int j = 0; j < ans[0].size();j++)
        {
            cout<<ans[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
}