 bool anagram(string s1, string s2){
 	unordered_map<char, int> um;
 	if(s1.size()==s2.size()){
 		for(int i=0; i<s1.size(); i++){
 			um[s1[i]]++;
 			um[s2[i]]--;
 		}
 		for(auto x: um){
 			if(x.second!=0) return false;
 		}
 		return true;
 	}
 	return false;
 }
 int main(){
 	string s1, s2;
 	cin>>s1>>s2;
 	cout<<anagram(s1,s2);
 	return 0;
 }
