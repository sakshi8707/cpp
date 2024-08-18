#include<bits/stdc++.h>
using namespace std;
                   

// class Solution {
// public:
//     void recursivePermute(vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,vector<int>&freq)
//     {
//         if(ds.size()==nums.size())
//         {
//             ans.push_back(ds); 
//         }
//         for (int i = 0; i < nums.size();i++)
//         {
//             if(!freq[i])
//             {
//             ds.push_back(nums[i]);
//             freq[i] = 1;
//             recursivePermute(nums, ds, ans, freq);
//             freq[i] = 0;
//             ds.pop_back();
//             }
//         }
//     }
//     vector<vector<int>>  nextPermutation(vector<int>& nums) {
//         vector<vector<int>> ans;
//         int n = nums.size();
//         vector<int> ds;
//         vector<int> freq(n,0);
//         recursivePermute(nums,ds,ans,freq);
//         // return ans;
//         for (int i = 0; i < ans.size();i++)
//         {
//             vector<int> temp;
//             for (int j = 0; j < ans[0].size();j++)
//            {
//             temp.push_back(ans[i][j]);
//            }
//             if(temp==nums)
//              {
//             cout << "mathced" << endl;
//              }
//         }
//         return ans;
//     }
// };
        //    **Better Approch**
class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        int n = nums.size(), idx1, idx2;
        for ( idx1 = n - 2; idx1 >= 0;idx1--)
        {
            if(nums[idx1+1]>nums[idx1])
            {
                break;
            }
        }
        if(idx1<0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (idx2 = n - 1; idx2 > idx1;idx2--)
           {
                if(nums[idx2]>nums[idx1])
                {
                     break;
                }
           }
           swap(nums[idx1], nums[idx2]);
           reverse(nums.begin() + idx1 + 1, nums.end());
        }
        return nums;
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
vector<int> ans = s.nextPermutation(nums);
for(auto it : ans)
{
        cout << it << " ";
}

return 0;
}