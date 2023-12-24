#include <bits/stdc++.h>
using namespace std;

void revst(stack<int> &s){
    if(s.empty()){
        return;
    }
    cout<<s.top()<<" ";
    s.pop();
    revst(s);
}
     
int main() {
    int n,a;
    stack<int> st;
    cin>>n;
    while(n--){
        cin>>a;
        st.push(a);
    }

    revst(st);

    return 0;
}