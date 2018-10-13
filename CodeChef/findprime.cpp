#include<iostream>
#include<math.h>
using namespace std;
int primefactors(int k,int l ){
  int arr1[(int)sqrt(k)]={0},arr2[(int)sqrt(l)]={0},count1[(int)sqrt(k)]={0},count2[(int)sqrt(l)]={0},sum1=0,sum2=0,c=0;
  while (k%2 == 0)
{
k = k/2;
count1[2]++;
}
for (int m = 3; m <= sqrt(k); m = m+2)
{
while (k%m == 0)
{
k = k/m;
count1[m]++;
}
}
for(int i=0;i<sqrt(k);i++){
  for(int j=0;j<count1[i];j++){
    arr1[j] = j;
  }
}
for(int i=0;i<arr1.size();i++)
sum1=sum1+arr1[i];
while (l%2==0) {
l = l/2;
count2[2]++;
}
for (int m = 3; m <= sqrt(l); m = m+2)
{
while (k%m == 0)
{
l = l/m;
count2[m]++;
}
}
for(int i=0;i<sqrt(l);i++){
  for(int j=0;j<count2[i];j++){
    arr2[j] = j;
  }
}
for(int i=0;i<sizeof();i++)
sum2=sum2+arr2[i];
if(sum2%sum1==0)
c++;
return c;
}
bool printPairs(int arr[], int n)
{
  int o,s=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && arr[j] % arr[i] == 0){
              int k =i;
              int l=j;
          int s=   primefactors( arr[k],arr[l]);
          int o=o+s;
        }
}
}
return o;
}

int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    if(n>=2)
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int k= printPairs(arr,n);
    cout<<k;
  }
return 0;
}
