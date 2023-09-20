#include<bits/stdc++.h>
using namespace std;

class stack{
    int *arr;
    int capacity;
    int nextIndex;
    stack(){
        capacity=4;
        arr=new int[capacity];
        nextIndex=0;
    }
    void push(int ele){
        if(nextIndex==capacity){
            int *newarr=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newarr[i]=arr[i];
            }
            delete arr;
            arr=newarr; 
            capacity=2*capacity;
        }
    }
};


int main(){
    return 0;
}