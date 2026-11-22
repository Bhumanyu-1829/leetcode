class Solution {
public:
    int countCommas(int n) {
       
    //     int final =0;
    //     for(int i = 1;i<=n;i++)
    //     {
    //         int count=0;
    //         while(i>0)
    //         {
    //             i=i/10;
    //             count++;
    //         }
    //         if(count<=3){
    //             continue;
    //         }
    //         final+=count/3;
    //     }
    //     return final;
    // }
    int k=n;
    int c =0;
    while(k>0)
        {
            k=k/10;
            c++;
        }
        if(c<=3){
            return 0;
        }
        else{
            return n-999;
        }
    }
};