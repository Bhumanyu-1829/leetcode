class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto x : nums)
        {
            mpp[x]++;
        }
        vector<int> vec;
        for(auto x : mpp)
        {
            if(x.second>nums.size()/3)
            {
                vec.push_back(x.first);
            }
        }
        return vec;
    }
};