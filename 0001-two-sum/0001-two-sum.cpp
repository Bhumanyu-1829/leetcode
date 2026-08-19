class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector  <int> arr(2);// = new vector(2);
        for(int i=0;i<nums.size();i++)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]+nums[i]==target)
                    {
                       
                        arr[0]=i;
                        arr[1]=j;
                        return arr;
                    }
                }
            }
            return arr;
    }
};



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//     * returnSize = 2;
//     int *arr = malloc(sizeof(int)*2);
//     for(int i=0;i<numsSize;i++)
//     {
//         for(int j=i+1;j<numsSize;j++)
//         {
//             if(nums[j]+nums[i]==target)
//             {
//                 arr[0]=i;
//                 arr[1]=j;
//                 return arr;
//             }
//         }
//     }
//     return arr;
// }