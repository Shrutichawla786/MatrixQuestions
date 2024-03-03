Q.Rotate by 90 degree
link-->https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
code--> void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
    }

Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(1)
