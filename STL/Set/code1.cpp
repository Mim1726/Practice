#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    vector<int> v(st.begin(),st.end());
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;
}
