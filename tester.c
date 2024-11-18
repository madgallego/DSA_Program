#include <stdio.h>
#define MAX 100

void main (){

    int arr[100]={0};
    int *arrPtr1 = arr; 
    int *arrPtr2 = arrPtr1; 
    int size=10;
    int temp;

    for(int i=0;i<size;i++){
        printf("fill the array: ");
        scanf("%d", &temp);
        *(arrPtr2+i)=temp;
    }

    printf("Array Content: ");
    for(int i=0;i<size;i++){
        printf("%d ", arrPtr2[i]);
        
    }
    printf("\n");

}