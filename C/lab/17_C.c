#include<stdio.h>
int main(){
    int a[4],sum=0;
    for(int i=0; i<4; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int max=a[0];
    int min=a[0];
    for(int i=0; i<4; i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    float ans=(float)(sum-max-min)/2;
    printf("%.3f\n",ans);
    return 0;
}
