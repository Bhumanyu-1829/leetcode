class Solution {
public:
    int countPrimes(int n) {
        // not optmized
        // int total=0;
        
        // for(int i =0;i<n;i++)
        // {
        //     bool flag=1;
        //     if(i<=1) continue;
        //     if(i==2)
        //     {total++;
        //     continue;
        //     }//2,5,7,
        //     if(i%2==0) continue;
        //     for(int j = 3; 1LL*j*j<=i;j+=2) // 1LL to convert j square to long long
        //     {
        //         if(i%j==0) {
        //             flag=0;
        //             break;
        //         };
        //     }
        //     if (flag)total++;
        // }
        // return total;

        //Sieve of Eratosthenes solution O(NloglogN)
        if (n <= 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;

        for (int p = 2; 1LL * p * p < n; p++){
            if(isPrime[p])
            {
                for (long long multiple = 1LL * p * p; multiple < n; multiple += p){
                    isPrime[multiple] = false;
                }
            }
        }

        int total = 0;
            for (int i = 2; i < n; i++) {
                if (isPrime[i]) total++;
            }
            return total;
    }
};