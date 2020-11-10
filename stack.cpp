  //Last In First Out (LIFO)
  //Syntax: stack<data_type> stack_name;
   stack<int> s;
 // Methods on stack
   s.push(50);
   s.push(20);
   s.push(35);
   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   cout<<s.size()<<endl;
   cout<<s.empty();
