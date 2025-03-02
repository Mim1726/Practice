#include <stdio.h>
void countEvenOdd(int arr[], int n, int *evenCount, int
*oddCount) {
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int evenCount = 0, oddCount = 0;
    countEvenOdd(arr, n, &evenCount, &oddCount);
    printf("Even: %d, Odd: %d\n", evenCount, oddCount);
    return 0;
}
