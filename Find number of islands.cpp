bool valid(int a, int b, int n, int m){
    return (a>=0 && b>=0 && a<n && b<m);
}
void add(vector<int> A[], vector<int> um[],queue<pair<int, int>>&q, 
                            pair<int,int>p, int n, int m){
    int i=p.first, j=p.second;
    vector<int> row{-1, -1, -1, 0, 1, 1,  1,  0};
    vector<int> col{-1,  0,  1, 1, 1, 0, -1, -1};
    for(int k=0 ;k<8; k++){
	    if(valid(i+row[k], j+col[k],n,m) && A[i+row[k]][j+col[k]]==1 
	                                         && !um[i+row[k]][j+col[k]]) {
	        q.push(make_pair(i+row[k],j+col[k]));
	        um[i+row[k]][j+col[k]]=1;
	    }
    }
}
void bfs(vector<int> A[], vector<int> um[], pair<int,int>p, int n, int m){
    queue<pair<int, int>>q;
    q.push(p);
    um[p.first][p.second]=1;
    while(!q.empty()){
        pair<int, int>temp =q.front();
        q.pop();
        add(A, um, q, temp, n, m);
    }
}

int main(){
	int n,m; cin>>n>>m;
	vector<int> A[n];
	vector<int> um[n];
	for (int i = 0; i < n; ++i){
		vector<int>v(m);
		for (int j = 0; j < m; ++j){
			cin>>v[j];
		}
		A[i]=v;
	}
    for(int i=0; i<n; i++){
    	vector<int>v(m,0);
        um[i]=v;
    }
    int ans=0;
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		if(A[i][j]==1 && um[i][j]==0){
    			ans++;
            	bfs(A, um, make_pair(i,j), n, m);
    		}
    	}	
    }
    cout<<ans;
	return 0;
}
