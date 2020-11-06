---Recursive Function---
 bool isPrime(int n, int d=2){
 	if(d<n-1 && n % d==0) return false;
 	if(d>=n) return true;
 	return isPrime(n, d+1);
 }
 
 ---Iterative Function---
  bool isPrime(int n){
 	for(int i=2; i<n; i++){
 		if(n%i==0) return false; 
 	}
 	return true;
 }

 int main(){
 	int n; cin>>n;
 	for(int i=2; i<=n; i++){
 		if(isPrime(i)) cout<<i<<" ";
 	}
 	return 0;
 }
