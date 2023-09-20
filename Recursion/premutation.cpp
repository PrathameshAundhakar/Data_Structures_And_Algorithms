#include<bits/stdc++.h>
using namespace std;

void PrintPermutation(char s[],int i){
    if(s[i]=='\0'){
        cout<<s<<endl;
        return;
    }
    for(int j=i;s[j]!='\0';j++ ){
        swap(s[i],s[j]);
        PrintPermutation(s,i+1);
        swap(s[i],s[j]);

    }
}

void Store(char s[],int i,vector<string> &v){
    if(s[i]=='\0'){
        v.push_back(s);
    }
    for(int j=i;s[j]!='\0';j++){
        swap(s[i],s[j]);
        Store(s,i+1,v);
        swap(s[i],s[j]);
    }
}

int main(){
    char s[100];
    cin>>s;
    PrintPermutation(s,0);
    vector<string> v;
    Store(s,0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}