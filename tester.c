#include <stdio.h>
#define MAX 100

void main (){

    int arr[100]={0};
    int *arrPtr = arr; 
    int size=10;
    int temp;

    for(int i=0;i<size;i++){
        printf("fill the array: ");
        scanf("%d", &temp);
        *(arrPtr+i)=temp;
    }

    printf("Array Content: ");
    for(int i=0;i<size;i++){
        printf("%d ", arrPtr[i]);
        
    }
    printf("\n");

}