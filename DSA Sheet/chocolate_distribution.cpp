#include<bits/stdc++.h>
using namespace std;
 
//  Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
// Output: Minimum Difference is 2 
// TIME COMPLEXITY = O(N*logN)
// SC : o(1)

 int chocolateDistribution(vector<int> nums,int m)
 {
     int min_diff = INT_MAX;
     sort(nums.begin(), nums.end());
     for (int i = 0; i < nums.size() - m;i++)
     {
       if(nums[m+i-1]-nums[i] < min_diff)
       {
           min_diff = nums[m + i - 1] - nums[i];
       }
     }
     return abs(min_diff);
 }

int main(){
     vector<int> nums;
     int n;
     cin >> n;
     for (int i = 0; i < n;i++)
     {
       int a;
       cin >> a;
       nums.push_back(a);
     }
     int m;
     cin >> m;
     int ans  =   chocolateDistribution(nums, m);
     cout << "Minimum Difference is " << ans << endl;

     return 0;
}
