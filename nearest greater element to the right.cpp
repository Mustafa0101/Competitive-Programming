 int main(){
 	int n; cin>>n;
 	vector<int> v(n);
 	vector<int> ans(n);
 	for(int i=0; i<n; i++) cin>>v[i];
 	stack<int> st;
 	ans[n-1]=-1;
 	st.push(v[n-1]);
 	int i=n-2;
 	while(i>=0){
 		while(!st.empty() && st.top()<=v[i]){
 			st.pop();
 		}
 		if(st.empty()) ans[i]=-1;
 		else ans[i]=st.top();
 		st.push(v[i]);
 		i--;
 	}
 	for(int x:ans) cout<<x<<" ";
 	return 0;
 }
