#include<iostream>
using namespace std;

int main()
{
    int a[] = {10,20,30,40,50};

    cout<<(*(&a+1)-a);

    return 0;
}
