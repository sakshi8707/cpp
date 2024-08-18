#include<bits/stdc++.h>
using namespace std;

                                        // brute force approch
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans;
      for(int i=0;i<nums.size();i++)
      {
          if(target==nums[i])
          {
            return i;
          }
      }
        return -1;
    }
};
                                       // better approch 

 class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while(low<=high)
        {
          int mid = (low + high) >> 1;
          if(nums[mid]==target)
          {
            return mid;
          }
          else if(nums[low]<=nums[mid])
          {
            //left half sorted
            if(nums[low]<=target && target<=nums[mid])
            {
              high = mid - 1;
            }
            else
            {
              low = mid + 1;
            }

          }
          else
          {
            //right half sorted
            if(nums[mid]<=target && target<=nums[high])
            {
              low = mid + 1;
            }
            else
            {
              high = mid - 1;
            }
          }
        }
        return -1; 
    }
};

  
int main(){
    


return 0;
}































