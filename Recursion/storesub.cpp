#include<bits/stdc++.h>
using namespace std;
void store(string s,string output ,vector<string> &v){
    if(s.length()==0){
        v.push_back(output);
        return;
    }
    store(s.substr(1),output,v);
    store(s.substr(1),output+s[0],v);

}

int main(){
    string s;
    cin>>s;
    vector<string> v;  
    store(s,"",v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    } 

}