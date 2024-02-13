Q.Sorted matrix
link-->https://www.geeksforgeeks.org/problems/sorted-matrix2333/1
code-->vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        // code here
    vector<int>v;
        for(int i=0;i<N;i++){
            for(int j =0;j<N;j++){
                v.push_back(mat[i][j]);
            }
        }
        sort(v.begin() , v.end());
        int ind=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                mat[i][j]=v[ind++];
            }
        }
        return mat;
    } 
    Expected Time Complexity:O(N2LogN)
Expected Auxillary Space:O(N2)
