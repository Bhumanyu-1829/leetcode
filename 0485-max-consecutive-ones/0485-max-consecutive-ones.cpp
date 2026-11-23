class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        bool flag = false;
        vector<int> vec;
        for(int i = 0;i<nums.size();i++)
        {

            if(nums[i]==1) flag =true;
            else {
                vec.push_back(count);
                count = 0;
                flag =false;
            }
            if(flag) count++;
                        if(i==nums.size()-1) vec.push_back(count);

                        
        }
        int max=0;
        for(auto x : vec)
        {
            if(x>max)
            {
                max = x;
            }
        }
        return max;
    }
};