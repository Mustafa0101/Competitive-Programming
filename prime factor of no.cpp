---Recursive Function---
 void factors(int n, int d=2){
 	if(n==1) return;
 	if(n%d==0){
 		cout<<d<<" ";
 		factors(n/d, d);
 	}
 	else factors(n, d+1);
 }

---Iterative Function---
 void factors(int n){
 	for(int i=2; i<=n; i++){
 		while(n%i==0){
 			cout<<i<<" ";
 			n /= i;
 		}
 	}
 }

 int main(){
 	int n; cin>>n;
 	factors(n);
 	return 0;	
 }
