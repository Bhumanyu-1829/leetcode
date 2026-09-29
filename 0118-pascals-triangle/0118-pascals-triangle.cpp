class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        vector<vector<int>> vec;
        for(int j = 0;j<numrows;j++)
        {
            int l=0;
            int r=1;
            vector<int> invec;
            if(j!=0 && j!=1){
            for(int i =0;i<=j;i++)
            {
                if(i==0){
                    invec.push_back(1);
                }
                else if(i==j)
                {
                    invec.push_back(1);
                }
                else{       
                   invec.push_back(vec[j-1][l]+vec[j-1][r]);
                l++;
                r++;
                }
            }
            }
            if(j==0)
            {
                invec.push_back(1);
            }
            if(j==1)
            {
                invec.push_back(1);
                invec.push_back(1);
            }
                                                    
            vec.push_back(invec);
        }
        return vec;
    }
};