 bool subset_sum(int arr[],int n, int tar){ 
 	if(tar==0) return true;
 	if(n==0) return false;
 	if(arr[n-1]>tar) return subset_sum(arr,n-1,tar);
 	return (subset_sum(arr,n-1,tar) || subset_sum(arr,n-1,tar-arr[n-1]));
 }
 int main(){
 	int n,tar; cin>>n>>tar;
 	int arr[n];
 	for(int i=0;i<n;i++) cin>>arr[i];
 	if (subset_sum(arr,n,tar)) cout<<"YES";
 	else cout<<"NO";
 	return 0;
 }

