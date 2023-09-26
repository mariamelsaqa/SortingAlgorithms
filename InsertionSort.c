//
//  InsertionSort.c
//  InsertionSort
//
//  Created by Mariam Elsaqa on 09/02/2022.
//

#include "types.h"
#include "stat.h"
#include "user.h"

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
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
    
    for(int i=1; i<=5; i++){
        arr[i-1] = atoi(argv[i]);
    }
 
    insertionSort(arr, n);
    printArray(arr, n);
}
