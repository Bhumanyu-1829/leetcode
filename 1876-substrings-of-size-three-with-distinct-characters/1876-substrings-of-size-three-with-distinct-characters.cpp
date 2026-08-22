class Solution {
public:
    int countGoodSubstrings(string s) {
        int last = 0;
        int n = s.length();
        int ans = 0;
        for(int i =0 ;i<n;i++)
        {
            if(i - last+1 > 3)
            {
                last++;
            }
            if(i-last+1==3)
            {
                if(s[i] == s[i-1] || s[i] == s[i-2] || s[i-1 ] == s[i-2])  {
                    // not good

                }else{
                    //good
                    ans++;
                }

            }
        }
        return ans;
    }
};