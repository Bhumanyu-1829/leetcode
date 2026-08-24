class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.length();
        
        vector<char > store(n) ;
        int sum = 0;
        int maxsum=0;
        int lastch = 0;
        for(int i=0;i<n;i++)
        {
            int index=-1;
            int flag=0;
            for(int j =lastch;j<i;j++)
            {
                if(store[j] == s[i])
                {
                    index = j;
                    flag = 1;
                }
            }
            store[i] = s[i];
            if(flag == 1)
            {
                lastch = index+1;
                // for(int k = 0;k<=index;k++)
                // {
                    
                //     store[k] = '\0';
                // } 
                sum=i-index;
            }
            else{
                sum++;
            }
            maxsum = max(maxsum,sum);
        }
        return maxsum;    
    }
};