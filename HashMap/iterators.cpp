#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;
    m["abc"]=1;
    m["def"]=2;
    m["ghi"]=3;
    m["jkl"]=4;
    m["mno"]=5;
    m["pqr"]=6;

    unordered_map<string,int>::iterator it=m.begin();
    while(it!=m.end()){
        cout<<"key : "<<it->first<<" value : "<<it->second<<endl;
        it++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout<<"key : "<<it->first<<" value : "<<it->second<<endl;
    }
    unordered_map<string,int>::iterator it2=m.find("abc");
    m.erase(it2);

    if(m.find("abc")==m.end()){
        cout<<"Not found"<<endl;
    }   
    else{
        cout<<"Found"<<endl;
    }


}
