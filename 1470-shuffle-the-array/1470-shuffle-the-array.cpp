class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> newv(2*n);
        for(int i=0;i<n;i++)
        {
            newv[i*2]=nums[i];
        }
        for(int i =n,j=1;i<2*n;i++,j=j+2)
        {
            newv[j] = nums[i];
        }
        return newv;
    }
};