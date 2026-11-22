class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
{
    return 0;
}        int num=x;
double sum=0,rem;
        for(;num!=0;)
        {
            rem=num%10;
            num/=10;
            sum=sum*10+rem;
    

        }
        if(sum==x){
            return 1;
        }
        else{
            return 0;
        }
    }
};