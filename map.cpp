 // Collection of pairs
 // Syntax: map<data_type1, data_type2> map_name;
    map<string, string> m;
 // Inserting pair in map
   m["prince"] = "clock tower";
   m.insert({"ritik","mohan_nagar"});
   m.insert({"prashant","Railway station"});
  

  //check if key is present or not
   if(m.find("r")!=m.end()) cout<<m["ritik"];
   else cout<<"Not exist";
