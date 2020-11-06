---Recursive Function---
 bool isPower(int n){
 	if(n==1) return true;
 	if(n%2!=0) return false;
 	return isPower(n/2);
 }

---Iterative Function---
 bool isPower(int n){
 	while(n!=1){
 		if(n%2!=0) return false;
 		n/=2;
 	}
 	return true;
 }

 int main(){
 	int n; cin>>n;
 	if(isPower(n)) cout<<"Yes";
 	else cout<<"No";
 	return 0;
 }
