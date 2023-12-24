#include <bits/stdc++.h>
using namespace std;
int multi(int a,int b)
{
	if(a==1)
		return b;
	return b + multi(a-1,b);
}

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	if(a>b){
		swap(a,b);
	}
	int n=a;
	cout<<multi(a,b)<<endl;
	return 0;
}
