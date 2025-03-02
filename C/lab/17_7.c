#include <stdio.h>
int findSmallest(int arr[],int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
        else
            min=min;
    }
    return min;
}
int findLargest(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        else
            max=max;
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
    }
    printf("Smallest: %d\n", findSmallest(arr, n));
    printf("Largest: %d\n", findLargest(arr, n));
    return 0;
}
