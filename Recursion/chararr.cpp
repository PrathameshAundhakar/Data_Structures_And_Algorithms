#include<bits/stdc++.h>
using namespace std;

void print(char arr[]){
    if(arr[0]=='\0'){
        return;
    }
    cout<<arr[0];
    print(arr+1);
}

void reverseprint(char arr[]){
    if(arr[0]=='\0'){
        return;
    }
    reverseprint(arr+1);
    cout<<arr[0];
}

int main(){
    char arr[100];
    cin>>arr;
    cout<<arr<<endl;

}