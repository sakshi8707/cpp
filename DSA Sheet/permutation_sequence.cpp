#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    string convertString(vector<int> ds)
    {
            string temp;
        for (int i = 0; i < ds.size();i++)
        {
            int n = ds[i];
            string t = to_string(n);
            temp.append(t);
            
        }
            return temp;
    }

    void permute(vector<int> nums,vector<int> ds,vector<int> &freq,vector<string>&ans,int n)
    {
       if(ds.size()==nums.size())
       {
           string temp = convertString(ds);
           ans.push_back(temp);
       }
       for (int i ; i < nums.size();i++)
       {
        if(!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i] = 1;
            permute(nums,ds, freq, ans, n);
            freq[i] = 0;
            ds.pop_back();
        }
       }
    }

    string getPermutation(int n, int k) {
        vector<string> ans;
        vector<int> ds;
        vector<int> freq(n, 0);
        vector<int> nums;
        for (int i = 1; i <= n;i++)
        {
        nums.push_back(i);
        }
        permute(nums,ds, freq, ans, n);
        string ps = ans[k-1];
        return ps;
        
    }
};

int main(){
    int n, k;
    cin >> n >> k;
    Solution s;
    string ans = s.getPermutation(n, k);
    for (auto it : ans)
    {
        cout << it << " ";
    }

        return 0;
}