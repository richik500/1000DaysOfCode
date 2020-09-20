#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
int * bubbleSort(int *arr, int n) {
    for (int i=0;i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr+j, arr+(j+1));
            }
        }
    }
    return arr;
}

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }   
    arr= bubbleSort(arr, n);
    for (int i=0; i<n ; i++) {
        printf("%d ", arr[i]);
    }
    
}
