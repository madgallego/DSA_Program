#include <stdio.h>
#define MAX 100

void selectionSort(int arr [], int len);
void bubbleSort (int arr [],int len);

void main (){

    int arr[]={10,7,8,9,4,5,3,1,6,2};
    int len = 10;

    bubbleSort(arr,len);
    printf("Array Content: ");
    for(int i=0;i<len;i++){
        printf("%d ", arr[i]);
        
    }
    printf("\n");

}

void selectionSort(int arr [],int len){
    int min;//stores index of current minimum value int the array
    int temp;//stores value temorarily for swapping

    for(int i=0; i<len-1;i++){
        min=i; //assuminmg that the current index is the smallest, it is set as the minimim

        //compares the current minimum to the rest of the array to find the next smallest
        for(int j=i+1; j<len; j++){
            if(arr[min]>arr[j])
                min=j;
            
        }

        //gets the final evaluated minimum then swap the value to its sorted position
        if(min!=i){
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }

    }
}//selection sort

void bubbleSort (int arr [],int len){
    int temp; // a temporay value holder for swapping

    for(int i=0; i<len-1; i++){
        //traverses through the array from the first value
        for(int j=0; j<len-i-1; j++){
        //compares the value to next index in the array
             if(arr[j]>arr[j+1]){
                //swapping that bubble up the largest values to sorted sectin of the array
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
             }
        }
    }
}