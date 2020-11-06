---Recursive Function---
 bool isSorted(int arr[], int n){
 	if(n==1) return true;
 	if(arr[n-2]>arr[n-1]) return false;
 	return isSorted(arr, n-1);
 }

---Iterative Function---
 bool isSorted(int arr[], int n){
 	for(int i=1; i<n; i++){
 		if(arr[i-1]>arr[i]) return false;
 	}
 	return true;
 }

 int main(){
 	int n; cin>>n;
 	int arr[n];
 	for(int i=0; i<n; i++) cin>>arr[i];
 	cout<<isSorted(arr, n);
 	return 0;
 }
