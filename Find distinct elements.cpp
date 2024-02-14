Q.Find distinct elements
link-->https://www.geeksforgeeks.org/problems/find-distinct-elements2054/1
code-->int distinct(vector<vector<int>> M, int N){

        // code here
        unordered_set<int>s;
        unordered_map<int , int>mp;
        vector<int>ans;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                s.insert(M[i][j]);
            }
            for(auto it:s){
                mp[it]++;
            }
            s.clear();
        }
        for(auto it:mp){
            if(it.second==N){
                ans.push_back(it.first);
            }
        }   
        return ans.size();
        
        
    }
Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(N *N)
