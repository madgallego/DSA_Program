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

//function that creates an array, pass by reference
void arrMaker(int *arr, int size){
    int temp;
    //gets the user input for the array
    for(int i=0;i<size;i++){
        printf("Array Value #%d: ", i+1);
        scanf("%d", &temp);
        *(arr+i)=temp;
    }    
}

//function that prints an array, pass by reference
void arrPrinter(int *arr, int size){
    printf("Array Content: ");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
        
    }
    printf("\n");
}

int linearSearch(int *arr, int size, int key){

    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int binarySearch(int *arr, int low, int high, int key){
while (low <= high) {
        int mid = low + (high - low)/2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

void Searching(int *arr, int size){
    int choice;
    int key;
    int position;

    printf("1) Linear Search\n2) Bianry Search\n3)Exit\n");
    printf("\nPlease choose: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: //Linear
        printf("\nKey Value to be searched: ");
        scanf("%d", &key);
        position = linearSearch(arr, size, key);
        if (position<0)
            printf("Value not found!");
        else printf("Value %d is at index %d\n\n", key, position);
        break;

    case 2: //Binary
        printf("\nKey Value to be searched: ");
        scanf("%d", &key);
        position = binarySearch(arr, 0,  size-1, key);
        if (position<0)
            printf("Value not found!");
        else printf("Value %d is at index %d\n\n", key, position);
        break;
    case 3: //Exit
        break;
    default:
        break;
    }
    
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
                printf("Let's first create an array\n");
                printf("What is the size of the array? ");
                scanf("%d", &size);

                arrMaker(arr, size);//calls to create an array

                printf("\n\nSEARCHING ALGORITHM\n"); //header
                arrPrinter(arr, size);//calls to print the content of the array
                Searching(arr, size);



                
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


