pair<int, int> range(vector<int> v, int n){
	pair<int, int> ans;
	int max_size=0;
	unordered_map<int, int> um;  //{cur_sum,index}
	um[0] = -1;
	int sum=0;
	for(int i=0; i<n; i++){
		sum+=v[i];
		if(um.find(sum)!=um.end()){
			if(max_size<i-um[sum]){
				max_size = i-um[sum];
				ans = make_pair(um[sum]+1, i);
			}
		}
		else{
			um[sum] = i;
		}
	}
	return ans;
}

int main(){
	int n; cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		int t; cin>>t;
		if(t==0) v[i]=-1;
		else v[i]=1;
	}
	pair<int, int> ans = range(v, n);
	cout<<ans.first<<" "<<ans.second;
	return 0;
}
