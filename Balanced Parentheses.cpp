 bool balanced(string s){
 	stack<char> st;
 	for(char x: s){
 		if(x=='{' || x=='(' || x=='[')
 			st.push(x);
 		else{
 			if(x=='}' && st.top()=='{') 
 				st.pop();
 			else if(x==')' && st.top()=='(') 
 				st.pop();
 			else if(x==']' && st.top()=='[') 
 				st.pop();
 			else return false;
 		}
 	}
 	return true;
 }
 int main(){
 	string s; cin>>s;
 	cout<<balanced(s);
 	return 0;
 }
