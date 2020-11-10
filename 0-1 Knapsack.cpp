 int knapsack(int v[],int w[],int W,int n){
 	if(W==0 || n==0) return 0;
 	if(w[n-1]>W) return knapsack(v,w,W,n-1);
 	return max(v[n-1]+knapsack(v,w,W-w[n-1],n-1), 
 		knapsack(v,w,W,n-1));
 }

 int main(){
 	int n,W; cin>>n>>W;
 	int v[n],w[n];
	
 	for(int i=0; i<n;i++) cin>>w[i];
 	for(int i=0; i<n;i++) cin>>v[i];

 	cout<<knapsack(v,w,W,n);
 }
