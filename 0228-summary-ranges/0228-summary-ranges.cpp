class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> temp;
        int j=0;
        int n = nums.size();
        int start;
        if(n==1){
            return {to_string(nums[0])};
        }
        for(int i =1;i<n;i++)
        {
            if(nums[i] == nums[i-1]+1 && j==0){
                start = i-1;
                j++;
            }
            if(nums[i] != nums[i-1]+1){
                
               if(j==0){
                temp.push_back(to_string(nums[i-1]));
               }
               else{
                temp.push_back(to_string(nums[start]) + "->" + to_string(nums[i-1]));
               }
                j=0;
            }
            if(i==n-1){
               if(j==0){
                temp.push_back(to_string(nums[i]));
               }
               else{
                temp.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
               }
            }

        }

        
        return temp;
    }
};