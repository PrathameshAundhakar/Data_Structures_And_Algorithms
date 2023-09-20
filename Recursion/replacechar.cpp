#include<bits/stdc++.h>
using namespace std;

void replace(char arr[], char a, char b){
    if(arr[0]=='\0'){
        return;
    }
    if(a==b){
        return;
    }
    if(arr[0]==a){
        arr[0]=b;
    }
    replace(arr+1,a,b);
}



int main(){
    char arr[]="Prathamesh";
    replace(arr,'a','b');
    cout<<arr<<endl;
}