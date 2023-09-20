#include<bits/stdc++.h>
using namespace std;

void remove(char arr[],char a){
    if(arr[0]=='\0'){
        return;
    }
    if(arr[0]!=a){
        remove(arr+1,a);
    }
    else{
        for(int i=0;arr[i]!='\0';i++){
            arr[i]=arr[i+1];
        }
    }
    remove(arr,a);
}

int main(){
    char arr[]="Prathamesh";
    char a='a';
    remove(arr,a);
    cout<<arr<<endl;


}