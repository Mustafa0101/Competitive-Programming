 int count_subset(int arr[],int n,int tar){ 
 	if(tar==0) {
 		return 1;
 	}
 	if(n==0){
 		return 0;
 	}
 	if(arr[n-1]>tar){
 		return count_subset(arr,n-1,tar);
 	}
 	return count_subset(arr,n-1,tar) + count_subset(arr,n-1,tar-arr[n-1]); 
 }
 int main(){
 	int n,tar; cin>>n>>tar;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
 	}
 	cout<<count_subset(arr,n,tar);
 }
