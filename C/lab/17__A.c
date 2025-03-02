#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll n;
    scanf("%lld",&n);
    int ans=0;
    for(ll i=1;i<=32;i++)
    {
        if(n==pow(2,i))
        {
            ans=1;
            break;
        }
    }
    if(ans==1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
