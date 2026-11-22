class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long total=0;
        long long cb = costBoth;
        long long c1 = cost1;
        long long c2 = cost2;
        long long n1 = need1, n2 = need2;
            
        if(cb<c1+c2)
        {
            if(n2<n1)
            {
                if(c1<cb)
                {
                    total+=cb*n2 + c1*(n1-n2);
                }
                else{
                    total+=cb*n2 + cb*(n1-n2);
                }
            }
            else{
                if(c2<cb)
                {
                    total+=cb*n1 + c2*(n2-n1);
                }
                else{
                    total+=cb*n1 + cb*(n2-n1);
                }
            }
        }
        else{
            total+=c1*n1+c2*n2;
        }
        return total;
    }
};