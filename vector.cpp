 //vector Syntax: vector<data_type>vector_name;
  vector<int> v;
  vector<int> v;
  vector<int> v(7, 5);

  //Methods on vector
  v.push_back(12);
  v.push_back(17);
  v.push_back(15);

   cout<<v.empty()<<" ";

  cout<<v.front();

  v.pop_back();

  cout<<v.back();

  cout<<*v.begin();

  cout<<*v.end();

  //Sorting the vector
  sort(v.begin(),v.end());


  //Traversing the vector.
  //Way 1:
   for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" ";
   }
  //Way 2:
   for(int x: v){
     cout<<x<<" ";
   }
  //Way 3:
   vector<int>::iterator itr;
   for(itr = v.begin(); itr!=v.end(); itr++){
     cout<<*itr<<" ";
   }
