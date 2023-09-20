#include<bits/stdc++.h>
using namespace std;

class stack{
    private:
        int *arr;
        int nextIndex;
        int capacity;
        public:
            stack(){
                capacity=4;
                arr=new int[capacity];
                nextIndex=0;
            }
            stack(int cap){
                cap=capacity;
                arr=new int[cap];
                nextIndex=0;
            }
            bool isEmpty(){
                return nextIndex==0;
            }
            int size(){
                return nextIndex;
            }
            void push(int element){
                if(nextIndex==capacity){
                    cout<<"Stack Full"<<endl;
                    return;
                }
                arr[nextIndex]=element;
                nextIndex++;
            }
            void pop(){
                if(isEmpty()){
                    cout<<"stack underflow"<<endl;
                    return;
                }
                nextIndex--;
            }
            int top(){
                 if(nextIndex==capacity){
                    cout<<"Stack Full"<<endl;
                    return -1;
                }
                return arr[nextIndex-1];
            }
            
            

};