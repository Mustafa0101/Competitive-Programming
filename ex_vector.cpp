  int smaller(int t){};
   vector<int> smaller(vector<int> v, int k){
     vector<int> ans;
     for(unsigned int i=0; i<v.size(); i++){
       if(v[i]<k){
         ans.push_back(v[i]);
       }
     }
     return ans;
   }

   int main(){
     int n; cin>>n;
     int k; cin>>k;
     vector<int>v(n);
     for(int i=0; i<n; i++){
       cin>>v[i];
     }
     vector<int> ans = smaller(v, k);
     for(int x: ans){
       cout<<x<<" ";
     }
     return 0;
   }
