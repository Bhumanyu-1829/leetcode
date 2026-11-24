class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        
        if(n==1) return;
        // TLE on this : 
        // if(k>n){
        // k=k%n;
        // }
        // while(k--)
        // {
        // int first = nums[n-1];
        // for(int i =n-1;i>0;i--)
        // {
        //     nums[i] = nums[i-1];
        // }
        // nums[0] = first;
        // }

        // better solution reverse the whole array then reverse elements<k and > k seperately
        if(k>n) k=k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin()+k,nums.end());
    }
};