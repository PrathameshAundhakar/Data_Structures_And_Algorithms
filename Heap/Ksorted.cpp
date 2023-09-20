#include<bits/stdc++.h> 
using namespace std;

void  ksorted(int *input,int n,int k){
    priority_queue<int> pq;

    for(int i=0;i<k;i++){
        pq.push(input[i]);
    }
    int start=0,i=k;
    while(i<n){
        input[start]=pq.top();
        pq.pop();
        pq.push(input[i]);
        start++;
        i++;
    }

    while(!pq.empty()){
        input[start]=pq.top();
        pq.pop();
        start++;
    }
}


int main(){
    int input[]={10,12,6,7,9};
    ksorted(input,5,3);
    for(int i=0;i<5;i++){
        cout<<input[i]<<" ";
    }
    

}