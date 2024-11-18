/*
PROGRAMMING EXERCISE
DSA PROJECT PROGRESS REPORT: Day 1 - 11/18/2024

Working Array Function

Working Search Function
- Linear Search
- Binary Search


*/


#include <stdio.h>
#define MAX 100

void arrMaker(int *arr, int size){
    int temp;
    //gets the user input for the array
    for(int i=0;i<size;i++){
        printf("Array Value #%d: ", i+1);
        scanf("%d", &temp);
        *(arr+i)=temp;
    }    
}

void arrPrinter(int *arr, int size){
    printf("Array Content: ");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
        
    }
    printf("\n");
}

int Searching(){
    int arrSize;
    int arr[MAX]= {0};
    

}

void main (){
    int choice;
    int userQuit=0;

    //Main Screen to be constructed

    while(userQuit==0){
        //Main Menu Screen


        printf("\nDATA STRUCTURES AND ALGORITHMS\n");
        printf("1) Linear Data Structure\n2) Non-Linear Data Structure\n3) Strings\n4) Sorting\n5) Searching\n6) Quit\n");
        printf("\nPlease choose: ");
        scanf("%d", &choice);

        switch (choice){
        case 1: printf("\nLinear Data Structures\n");
                printf("\nWIP\n");
                ///procedure

            break;

        case 2: printf("\nNon-Linear Data Structures\n");
                printf("\nWIP\n");
                ///procedure
            break;

        case 3: printf("\nStrings\n");
                printf("\nWIP\n");
                ///procedure
            break;

        case 4: printf("\nSorting\n");
                printf("\nWIP\n");
                ///procedure
            break;

        case 5: //Searching
                int arr[MAX]={0};
                int size;
                printf("Let's Create first an array\n");
                printf("What is the size of the array? ");
                scanf("%d", &size);
                arrMaker(arr, size);



                
            break;
        case 6:printf("\nQuit\n");
               userQuit=1;
                ///procedure
            break;
        default:printf("\nWrong Input!\n");
            break;
        }//while loop

}//main







}


