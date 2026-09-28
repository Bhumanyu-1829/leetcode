class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int x : nums)
        {
            if(x>=1){
                pos.push_back(x);
            }
            else{
                neg.push_back(x);
            }
        }
    

    int pos_index=0;
    int neg_index=0;
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
        ans.push_back(pos[pos_index]);
        pos_index++;
        }
        else
        {
        ans.push_back(neg[neg_index]);
        neg_index++;
        }
    }
    return ans;
    }
};