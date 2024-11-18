/*
PROGRAMMING EXERCISE
DSA PROJECT PROGRESS REPORT: Day 1 - 11/18/2024

Working Search Function
- Linear Search
- Binary Search


*/


#include <stdio.h>
#define MAX 100

int Searching(){
    int arrSize;
    int arr[MAX]= {0};
    printf("\nEnter array size: ");
    

    printf("\n1)Linear Search 2) Binary Search\n3)Exit\n\n Please Choose:");

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
        case 5: printf("\nSearching\n");
                ///procedure
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


