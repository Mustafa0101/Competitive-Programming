---Recursive Function---
 int helper(int arr[], int n, int &sum){
 	if(n==-1) return sum;
 	sum += arr[n];
 	return helper(arr, n-1, sum);
 }

 int missing(int arr[], int n){
 	int expected_sum = n*(n+1)/2;
 	int current_sum=0;
 	current_sum = helper(arr, n-2, current_sum);
 	return expected_sum - current_sum;
 }

---Iterative Function---
 int missing(int arr[], int n){
 	int expected_sum = n*(n+1)/2;
 	int current_sum = 0;
 	for(int i=0; i<n-1; i++){
 		current_sum += arr[i];
 	}
 	return expected_sum-current_sum;
 }

 int main(){
 	int n; cin>>n;
 	int arr[n];
 	for(int i=0; i<n-1; i++) cin>>arr[i];
 	cout<<missing(arr, n);
 	return 0;
 }
