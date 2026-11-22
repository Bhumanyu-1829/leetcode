class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
       
        int n = nums.size();
        set<vector<int>> s;
        unordered_map<int, int> mpp;
        mpp.reserve(n);
        sort(nums.begin(),nums.end());
        for(int i =0;i<n-1;i++)
        {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1])continue;
            mpp.clear();
            for(int j =i+1;j<n;j++)
            {
                int diff = -nums[i] - nums[j];
                if(mpp.count(diff))
                {
                    s.insert({nums[i],nums[j],diff});
                
                }
                mpp[nums[j]]=j;
            }
        }

        return vector<vector<int>>(s.begin(), s.end());
    }
};