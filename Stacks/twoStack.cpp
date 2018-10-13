#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

class twoStacks{
  int top1;
  int top2;
  int *arr;
  int capacity;
  two twoStacks(int size){
    capacity = size;
    top1 = 1;
    top2 = size-1;
    arr = new int[size];
  }
  void push1(int x){
    if(top2-top1>1)
     arr[top1++] = x;
    else{
      cout<<"Overflow";
      exit(1);
    }
  }
  void push2(int y){
    if(top2-top1>1)
     arr[top2--] = y;
    else{
     cout<<"Overflow\n";
     exit(1);
   }
  }
  int  pop1(){
      if(top1>=0){
       cout<<arr[top1];
       top1--;
     }
     else{
      cout<<"Underflow\n";
      exit(1);
    }
  }
  int  pop2(){
      if(top2<size){
       cout<<arr[top2];
       top2++;
     }
     else{
      cout<<"Underflow\n";
      exit(1);
    }
  }
  void  display1() {
    /* code */
    for(int i=0;i<top1;i++)
     cout<<arr[i]<<'\t';
  }
  void  display1(int size) {
    /* code */
    for(int i=top2;i<size;i++)
     cout<<arr[i]<<'\t';
  }
};

int main(){
 int size;
 cin>>size;
 twoStacks ts(size);
 char ch;
 cout<<"1.Press 1 to push un stack1\t2.Press 2 push in Stack2\t 3.Pop from Stack1\t 4.Pop from Stack2 5.Display Stack" 6.Press 0 to exit;
 cin>>ch;
 while(ch){
   switch (ch) {
     case 1:
       int x;
       cin>>x;
       ts.push1(x);
    case 2:
     int y;
     cin>>y;
     ts.push2(y);
    case 3:
     cout<<ts.pop1();
    case 4:
     cout<<ts.pop2();
    case 5;
     display
   }
 }
 return 0;
}
