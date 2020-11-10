  //First In First Out (FIFO)
  //Syntax: queue<data_type> queue_name;
  queue<int> q;
  //methods on queue
   q.push(40);
   q.push(35);
   q.push(62);
   q.push(28);
   cout<<q.front()<<endl;
   q.pop();
   cout<<q.front()<<endl;
   cout<<q.empty()<<endl;
   cout<<q.back()<<endl;
