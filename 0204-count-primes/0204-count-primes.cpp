class Solution {
public:
    int countPrimes(int n) {
        int total=0;
        
        for(int i =0;i<n;i++)
        {
            bool flag=1;
            if(i<=1) continue;
            if(i==2)
            {total++;
            continue;
            }//2,5,7,
            if(i%2==0) continue;
            for(int j = 3; 1LL*j*j<=i;j+=2) // 1LL to convert j square to long long
            {
                if(i%j==0) {
                    flag=0;
                    break;
                };
            }
            if (flag)total++;
        }
        return total;
    }
};