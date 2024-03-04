Q.Maximum no of 1's row
link-->https://www.geeksforgeeks.org/problems/maximum-no-of-1s-row3027/1
code-> int maxOnes (vector <vector <int>> &arr, int n, int m)
        {
            // your code here
            int count=0;
            int ans=0;
            int maxi=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(arr[i][j]==1){
                        count++;
                    }
                }
                if(count>maxi){
                    maxi=count;
                    ans=i;
                }
                count=0;
            }
            return ans;
        }

Expected Time Complexity: O(N*M).
Expected Auxiliary Space: O(1).
