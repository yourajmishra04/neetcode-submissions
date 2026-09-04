class Solution {
public:
int M, N;
     int solve(vector<vector<long long>>& v , int i ,int j ){
        if(j>=M || i>= N) return 0 ;

        if(i==N-1 && j==M-1) return 1;

         if(v[i][j]!=0) return v[i][j];
          
          
       int  d=   solve (v , i+1 , j );
       int r=  solve(v,i,j+1 );

       return v[i][j]= d+r;

     }
    int uniquePaths(int m, int n) {
        vector<vector<long long>> v(m,vector<long long>(n,0));
        N=m;
        M=n;
        
        
        return solve(v , 0,0);

    }
};
