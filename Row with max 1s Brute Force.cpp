Q.Row with max 1s
link-->https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1
code-->int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int ind=-1;
	    int maxcount=0;
	    for(int i=0;i<n;i++){
	        int count=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                count++;
	            }
	        }
	        if(count>maxcount){
	            maxcount=count;
	            ind=i;
	        }
	    }
	    return ind;
	}
Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(1)
