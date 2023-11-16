#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
using namespace std;
ll a[3][3],fibo[3][3],h=1e9+7;
void nmt(ll a[3][3],ll b[3][3]) {
   ll c[3][3]={0};
    f(i,1,2)
    {
        f(j,1,2)
        {
            f(k,1,2)
            {
                ll x=((a[i][k]%h)*(b[k][j]%h))%h;
                c[i][j]=((c[i][j]%h)+(x%h))%h;
            }
        }
    }
    f(i,1,2)
    {
        f(j,1,2)
        a[i][j]=c[i][j];
    }
}
void nad(ll a[3][3],ll b)
{
    if(b<=1)return ;
    nad(a,b/2);
    nmt(a,a);
    if(b%2!=0)nmt(a,fibo);
}

int test;
int n,k,m;
int main()
{
    cin>>test;
    while(test--)
    {
       int ans=0;
       cin>>n;

       a[1][1]=1;a[1][2]=1;
       a[2][1]=1;a[2][2]=0;
       fibo[1][1]=1;fibo[1][2]=1;
       fibo[2][1]=1;fibo[2][2]=0;
       nad(a,n-1);
       cout<<a[1][1]<<endl;


    }
    return 0;
}