#include<bits/stdc++.h>
using namespace std;


bool checkarr(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }

    bool smallans=checkarr(arr+1,n-1,key);

    return smallans;
}
bool checkarr1(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(arr[n-1]==key){
        return true;
    }
    bool smallans=checkarr1(arr,n-1,key);

    return smallans;
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

    if(checkarr(arr,n,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    if(checkarr1(arr,n,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}
