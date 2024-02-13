Q.Median in a row-wise sorted Matrix

link-->https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
code-->int uperBound(vector<int> &arr , int x , int n){
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>x){
                ans= mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int countsmallEqual(vector<vector<int>> &matrix , int n , int m , int x){
        int count=0;
        for(int i=0;i<n;i++){
            count+=uperBound(matrix[i] , x , m);
        }
        return count;
    }
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here          
        int low =INT_MAX;
        int high= INT_MIN;
        int n = matrix.size();
        int m= matrix[0].size();
        
        for(int i=0;i<n;i++){
            low = min(low , matrix[i][0]);
            high= max(high , matrix[i][m-1]);
        }
        int req= (n*m)/2;
        while(low<=high){
            int mid= (low+high)/2;
            int smallEqual= countsmallEqual(matrix , n , m , mid);
            if(smallEqual<=req){
                low=mid+1;
            }
            
            else{
                high=mid-1;
            }
        }
        return low;
    }

Expected Time Complexity: O(32 * R * log(C))
Expected Auxiliary Space: O(1)
