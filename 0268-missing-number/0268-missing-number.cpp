class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mpp;
        for(auto x : nums)
        {
            mpp[x]++;
        }
        for(int i = 0;i<=n;i++)
        {
            if(!mpp[i]) return i;
        }
        return -1;
    }
};