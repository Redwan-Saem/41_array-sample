#include <stdio.h>

int main() {
    int N=5,arr[N],i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    printf("Elements of array:\n");
    for (i=N-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;

}
