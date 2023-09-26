//
//  BubbleSort.c
//  BubbleSort
//
//  Created by Mariam Elsaqa on 09/02/2022.
//

#include "types.h"
#include "stat.h"
#include "user.h"

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
  
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
  
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf(1,"%d ", arr[i]);
    printf(1,"\n");
}

int main(int argc, const char * argv[]) {
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    
    if(argc <= 5){
        printf(1,"enter an array of 5 numbers");
        exit();
    }
    
//    printf(1,"size of array =%d\n", n);
//    for(int i=0; i<=5; i++){
//        printf(1,"%s\n",argv[i]);
//    }
   
    for(int i=1; i<=5; i++){
        arr[i-1] = atoi(argv[i]);
    }
    
    bubbleSort(arr, n);
    printf(1,"Sorted array: \n");
    printArray(arr, n);
}
