#include <stdio.h>
int hasPairWithSum(int arr[], int n, int sum){
    int key=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum)
            {
                key=1;
                break;
            }
        }
    }
    return key;
}
int main(){
    int n,sum;
    scanf("%d%d",&n,&sum);
    int arr[n];
    for (int i=0;i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", hasPairWithSum(arr, n, sum));
    return 0;
}
