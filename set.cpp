  //collection of distinct values
  //Syntax: set<data_type> set_name;
   set<int> s;

  //Methods on set
   s.insert(12);  O(log n)
   s.insert(17);
   s.insert(12);
   s.insert(13);

  //finding element in the set
   if(s.find(15)!=s.end()) cout<<"Element exist";
   else cout<<"Doesn't exist";
  
  //traversing the set
   for(int x:s) cout<<x<<" ";
