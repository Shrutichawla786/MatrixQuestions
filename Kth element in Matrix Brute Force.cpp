Q.Kth element in Matrix
link-->https://www.geeksforgeeks.org/problems/kth-element-in-matrix/1
code-->vector<int>v;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          v.push_back(mat[i][j]);
      }
  }
  sort(v.begin() , v.end());
  return(v[k-1]);
Expected Time Complexity: O(N*N)+O(N^2*Log(N^2))
Expected Auxiliary Space: O(N^2)
