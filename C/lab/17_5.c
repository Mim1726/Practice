#include<stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    if(x<=50)
        printf("BDT %.1f Only\n",x*4);
    else if(x<50 && x<=80)
        printf("BDT %.1f Only\n",(50*4+(x-50)*3));
    else if(x<80 && x<=100)
        printf("BDT %.1f Only\n",(50*4+30*3+(x-80)*2));
    else if(x>100)
        printf("BDT %.1f Only\n",(50*4+30*3+20*2+x-100));
    return 0;
}
