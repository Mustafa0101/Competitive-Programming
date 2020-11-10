 int knapsack(int w[],int p[],int n,int W){
 	if(n==0 or W==0){
 		return 0;
 	}
 	if(w[n-1]>W){
 		return knapsack(w,p,n-1,W);
 	}
 	return max(p[n-1]+knapsack(w,p,n,W-w[n-1]),knapsack(w,p,n-1,W));
 }

 int main(){
 	int n,W; cin>>n>>W;
 	int w[n],p[n];
 	for(int i=0;i<n;i++){
 		cin>>w[i];
 	} 
 	for(int i=0;i<n;i++){
 		cin>>p[i];
 	}
 	cout<<knapsack(w,p,n,W);
 	return 0;
 }
