#include<bits/stdc++.h>
using namespace std;




int main(){
    priority_queue<int,vector<int>,greater<int>> pq;//min heap
    pq.push(16);
    pq.push(10);
    pq.push(18);
    pq.push(20);
    pq.push(30);

    cout<<pq.size()<<endl;//5
    cout<<pq.top()<<endl;//10
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}