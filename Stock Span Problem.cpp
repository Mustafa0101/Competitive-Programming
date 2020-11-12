 int main(){
 	int n; cin>>n;
 	vector<int> v(n);
 	vector<int> ans(n);
 	for(int i=0; i<n; i++) cin>>v[i];
 	stack<pair<int,int>> st;
 	ans[0]=1;
 	st.push(make_pair(v[0],0));
 	int i=1;
 	while(i<n){
 		while(!st.empty() && st.top().first<=v[i]){
 			st.pop();
 		}
 		ans[i]=i-st.top().second;
 		st.push(make_pair(v[i],i));
 		i++;
 	}
 	for(int x:ans) cout<<x<<" ";
 	return 0;
 }
