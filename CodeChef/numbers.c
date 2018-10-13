#include<stdio.h>
void count(int* k){
  int d1,d2,d3,X;
  X= *k;
  d1 = *k%10;*k=*k/10;
  d2 = *k%10;*k=*k/10;
  d3= *k%10;
  if(d1!=d2&&d1!=d3&&d2!=d3)
  printf("%d\t",X);
}
int main(){
int i=0;
int k,l;
for(i=100;i<999;i++){
  k=i;
 count(&k);
}
printf("\n");
return 0;
}
