#include <iostream>
using namespace std;
#define size 5
int stack[size];
int top=-1;
void push(int num){
    if(top<size-1){
        top++;
        stack[top]=num;
        cout<<num<<"inserted"<<endl;
    }
    else{
        cout<<"stack is overflow"<<endl;
    }
}
    int main(){
        push(3);
        push(4);
        push(5);
        push(17);
        push(1);
        push(4);
        push(11);
    
  return 0;
}
