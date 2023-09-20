#include<bits/stdc++.h>
using namespace std;

int staircase(int n){
    if(n==0 || n==1){
        return 1;
    }
    // if(n==2){
    //     return 2;
    // }
    if(n<0){
        return 0;
    }
    int smallans=staircase(n-1)+staircase(n-2)+staircase(n-3);
    return smallans;
}

int main(){
    int n;
    cin>>n;
    cout<<staircase(n);
}