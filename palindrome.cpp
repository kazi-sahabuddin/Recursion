#include <bits/stdc++.h>
using namespace std;

bool checkPal(string s, int st, int en){
	if(st>=en)
		return true;
	if(s[st] != s[en]){
		return false;
	}

	return checkPal(s, st+1, en-1);
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	cout<<s<<endl;
	int st = 0;
	int en = s.size()-1;
	if(checkPal(s,st,en)){
		cout<<"true"<<endl;
	} else{
	cout<<"false"<<endl;
}
	return 0;
}
