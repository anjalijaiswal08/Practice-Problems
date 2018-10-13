#include<bits/stdc++.h>

using namespace std;

bool threeThrees(int n)
{
    int count=0;
    while(n>0)
    {
        if (n%10==3) count++;
        n/=10;
    }

    return count>2 ? 1:0;
}

void solve()
{
    int n;
    cin>>n;

    n++;

    while(!threeThrees(n))
        n++;

  cout<<n<<endl;
}
int main()
{
   int t;
   cin>>t;

     while(t--)
        solve();

  return 0;
}
