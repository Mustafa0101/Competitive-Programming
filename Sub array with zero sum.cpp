 bool subArray(vector<int>v, int n){
 	int sum = 0;
 	unordered_set<int> us;
 	us.insert(0);
 	for(int i=0; i<n; i++){
 		sum += v[i];
 		if(us.find(sum)!=us.end()) return true;
 		us.insert(sum);
 	}
 	return false;
 }
 int main(){
 	int n; cin>>n;
 	vector<int>v(n);
 	for(int i=0; i<n; i++) cin>>v[i]; 
 	cout<<subArray(v, n);
 	return 0;
 }
