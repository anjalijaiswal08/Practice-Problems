#include<stdio.h>
void P(int i){
while (true) // infinite condition
{
  char a;
    P(1);
    printf("%c", a);
    printf("%c", a);
    V(1);
}
}
void V(int  i){
while (true) // infinite condition
{  char b;
    P(1);
    printf("%c", b);
    printf("%c", b);
    P(1);
}}
int main(){
  V(1);
  P(1);
  return 0;
}
