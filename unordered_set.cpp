  //Syntax: unordered_set<data_type> set_name;
  unordered_set<int>s;
  //Methods on unordered_set
   s.insert(12);  O(1)
   s.insert(13);
   s.insert(12);
   s.insert(17);

  //finding element in the set
   if(s.find(13)!=s.end()) cout<<"Element exist"; O(1)
   else cout<<"Doesn't exist";
  
 // traversing the set
  for(int x:s) cout<<x<<" ";
