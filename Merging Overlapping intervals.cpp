int main(){
	int n;cin>>n;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		pair<int,int> p;
		cin>>p.first>>p.second;
		v.push_back(p);
	}
	sort(v.begin(),v.end());
	cout<<v[0].first<<v[0].second<<endl;
	stack<pair<int,int>> st;
	st.push(v[0]);
	for(int i=1; i<n; i++){
		if(st.top().second>=v[i].first){
			st.top().second = max(st.top().second, v[i].second);
		}
		else{
			st.push(v[i]);
		}
	}
	while(!st.empty()){
		cout<<st.top().first<<" "<<st.top().second<<endl;
		st.pop();
	}
	return 0;
}
