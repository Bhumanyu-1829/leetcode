class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int x : nums)
        {
            freq[x]++;
        }
        for(auto y : freq)
        {
            if(y.second > nums.size()/2)
            {
                return y.first;
            }
        }
        return -1;
    }
};