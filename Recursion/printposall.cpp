#include<bits/stdc++.h>
using namespace std;
void allpos(int arr[],int n,int key,int i){
    if(i==n){
        return;
    }
    if(arr[i]==key){
        cout<<i<<" ";
    }
    // else{
    //   cout<<"";
    // }
    allpos(arr,n,key,i+1);


}


int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    allpos(arr,n,key,0);

}