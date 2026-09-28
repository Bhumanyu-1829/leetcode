class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size()-1;
        int col = matrix[0].size()-1;
        int minc =0;
        int minr =0;
        vector<int> vec;
        int sign=0;
        int sign2=0;
        while(col>=minc && row>=minr){
            //right ja rha
            for(int i=minc;i<=col;i++)
            {
                vec.push_back(matrix[minr][i]);
            }
            minr++;

            if(!(col>=minc && row>=minr))
            break;

            for(int i=minr;i<=row;i++)//down ja rha
            {
                vec.push_back(matrix[i][col]);
            }
            col--;

            if(!(col>=minc && row>=minr))
            break;

            for(int i = col;i>=minc;i--)//left ja rha
            {
                vec.push_back(matrix[row][i]);
            }
            row--;

            if(!(col>=minc && row>=minr))
            break;
            
            for(int i =row;i>=minr;i--)//uper ja rha
            {
                vec.push_back(matrix[i][minc]);
            }
            minc++;

            if(!(col>=minc && row>=minr))
            break;
            // break;
        }
        // for(int i=0;i<row;i++)
        // {
        //     if(i%2==0){
        //     if(sign%2==0) // going right
        //     {
        //         for(int j=0;j<col;j++)
        //         {
        //             vec.push_back(matrix[i][j]);
        //         }
        //     }
        //     else{// going left
        //         for(int j=col-1;j>=minc;j--)
        //         {
        //             vec.push_back(matrix[i][j]);
        //         }
        //         minc++;
        //         col--;
        //     }
        //     sign++;
        //     }
        //     else{
        //         if(sign2%2==0)// going down vertically
        //         {
        //             for(int k=minr;k<maxr;k++)
        //             {
        //                 vec.push_back(matrix[k][col-1]);
        //             }
        //             minr++;
        //             col--;
        //         }
        //         else{   //going up
        //             for(int k=maxr;k>=minr;k--)
        //             {
        //                 vec.push_back(matrix[k][minc]);
        //             }
        //             maxr--;
        //         }
        //         sign2++;
        //     }
        // }
        return vec;
    }
};