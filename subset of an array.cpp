 bool subset(vector<int>v1, vector<int>v2, int n1, int n2){
 	unordered_map<int, int>um;
 	for(int i=0; i<n1; i++){
 		um[v1[i]] = um[v1[i]]+1;
 	}
 	for(int i=0; i<n2; i++){
 		um[v2[i]] -= 1;
 		if(um[v2[i]]<0) return false;
 	}
 	return true;
 }
 int main(){
 	int n1, n2; cin>>n1>>n2;
 	vector<int> v1(n1);
 	vector<int> v2(n2);
 	for(int i=0; i<n1; i++) cin>>v1[i];
 	for(int i=0; i<n2; i++) cin>>v2[i];
 	cout<<subset(v1, v2, n1, n2);
 	return 0;
 }
