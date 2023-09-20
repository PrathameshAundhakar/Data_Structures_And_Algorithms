#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr={5,7,1,2,8,4,3};
    unordered_set<int> m;
    for(int i=0;i<7;i++){
        m.insert(arr[i]);
    }
    for(auto it:m){
        if(m.find(10-it)!=m.end()){
            cout<<"Pair found";
            return 0;
        }
    }
}