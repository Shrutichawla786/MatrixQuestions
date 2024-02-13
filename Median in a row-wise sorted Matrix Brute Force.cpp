Q.Median in a row-wise sorted Matrix
link-->https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
code-->int median(vector<vector<int>> &matrix, int R, int C){
        // code here          
        vector<int>v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin() , v.end());
        int n= v.size()/2;

        return v[n];
    }
Expected Time Complexity: O(n*m)+(n*m) log(n*m)
Expected Auxiliary Space: O(n+m)
