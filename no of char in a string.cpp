---Recursive Function---
 int count(char c, string s, int n){
 	if(n<0) return 0;
 	if(s[n]==c) return 1+count(c, s, n-1);
 	return count(c, s, n-1);
 }

---Iterative Function---
 int count(char c, string s, int n){
 	int ans=0;
 	for(int i=0; i<n; i++) if(s[i]==c) ans++;
 	return ans;
 }

 int main(){
 	string s; cin>>s; 
 	char c;cin>>c;
 	int n=s.size()-1;
 	cout<<count(c, s, n);
 }
