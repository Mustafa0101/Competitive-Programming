 int binary_search(int arr[], int k, int low, int high){
 	if(low>high) return -1;
 	int mid=(low + high)/2;
 	if(arr[mid]==k) return mid+1;
 	if(arr[mid]>k) binary_search(arr, k, low, mid-1);
 	else return binary_search(arr, k, mid+1, high);
 }

 int main(){
 	int n,k; cin>>n>>k;
 	int arr[n];
 	for(int i=0; i<n; i++) cin>>arr[i];
 	cout<<binary_search(arr,k,0,n-1);
 	return 0;
 }
