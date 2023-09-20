#include<bits/stdc++.h>
using namespace std;

void removedup(char arr[]){
    if(arr[0]=='\0'){
        return;
    }
    if(arr[0]==arr[1]){
        for(int i=0;arr[i]!='\0';i++){
            arr[i]=arr[i+1];
        }
        removedup(arr);
    }
    else{
        removedup(arr+1);
    }
}

int main(){
    char arr[]="aabbbbcdd";
    removedup(arr);
    cout<<arr<<endl;
}