 int main(){
 	int n; cin>>n;
 	queue<string>q;
 	string s="1";
 	q.push(s);
 	while(n>0){
 		string temp = q.front();
 		cout<<temp<<endl;
 		q.pop();
 		q.push(temp+"0");
 		q.push(temp+"1");
 		n--;
 	}
 	return 0;
 }
