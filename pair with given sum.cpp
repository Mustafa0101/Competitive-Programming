 void sum(vector<int> v, int n, int target){
 	unordered_set<int> us;
 	for(int i=0; i<n; i++){
 		if(us.find(target-v[i])!=us.end()){
 			cout<<"Pair Found";
 			return;
 		}
 		us.insert(v[i]);
 	}
 	cout<<"Pair doesn't exist";
 	return;
 }
 int main(){
 	int n, target;
 	cin>>n>>target;
 	vector<int>v(n);
 	for(int i=0; i<n; i++) cin>>v[i]; 
 	sum(v, n, target);
 	return 0;
 }
