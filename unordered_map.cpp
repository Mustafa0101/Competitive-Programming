 // Syntax: unordered_map<data_type1, data_type2> map_name;
   unordered_map<string, string> m;

 // Inserting pair in unordered_map
   m["prince"] = "clock tower";
   m.insert({"ritik","mohan_nagar"});
   m.insert({"prashant","Railway station"});
  

 // check if key is present or not
   if(m.find("ritik")!=m.end()) cout<<m["ritik"];
   else cout<<"Not exist";

 // traversing map
   for(auto x: m) 
     cout<<x.first<<" "<<x.second<<endl;
