 bool isValid(int x, int y, int n){
 	return (x>=0 && y>=0 && x<n && y<n);
 }
 int main(){
 	int n; cin>>n;
 	vector<vector<int>>v;
 	pair<int,int>one;
     set<pair<int,int>>us;
     queue<pair<int,int>>q;
     for(int i=0; i<n; i++){
 		vector<int> v1(n);
 		for(int j=0; j<n; j++){
 			cin>>v1[j];
 			if(v1[j]==1) one=make_pair(i,j);
 		}
 		v.push_back(v1);
 	}
     q.push(one);
     while(!q.empty()){
         int x=q.front().first;
         int y=q.front().second;
         q.pop();
         vector<vector<int>> check{{-1,0},{1,0},{0,-1},{0,1}};
        
         for(auto p: check){
             if(isValid(x+p[0],y+p[1],n) && v[x+p[0]][y+p[1]]!=0 &&
             			 us.find(make_pair(x+p[0],y+p[1]))==us.end()){
                 if(v[x+p[0]][y+p[1]]==2){
                 	cout<<"Path exist";
                 	return 0;
                 }
                 q.push(make_pair(x+p[0],y+p[1]));
                 us.insert(make_pair(x+p[0],y+p[1]));
             }
         }
     }
     cout<<"Path doesn't exist";
     return 0;
 }
