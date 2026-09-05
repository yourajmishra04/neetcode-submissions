class Solution {
public:
  void s( vector<vector<int>>& mat , vector<bool>& vis , int node){
      if(vis[node]) return;
      vis[node]=1;
      for(int x : mat[node]) s(mat, vis , x);
  }
    int countComponents(int n, vector<vector<int>>& edges) {
          vector<vector<int>>mat(n);
          for(auto it : edges) {
            mat[it[0]].push_back(it[1]);
            mat[it[1]].push_back(it[0]);
          }
          int com=0;
          vector<bool>vis(n,0);
          for(int i=0;i<n;i++){
           
            if(!vis[i]) { com++;s(mat,vis,i);}
          }
          return com;
    }
};
