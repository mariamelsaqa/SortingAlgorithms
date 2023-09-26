//
//  LinearSearch.c
//  LinearSearch
//
//  Created by Mariam Elsaqa on 09/02/2022.
//

#include "types.h"
#include "stat.h"
#include "user.h"

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(int argc, const char * argv[]) {
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    
    if(argc <= 6){
        printf(1,"enter the number to search then an array of 5 numbers");
        exit();
    }
    
//    for(int i=0; i<=6; i++){
//        printf(1,"%s\n",argv[i]);
//    }
   
    for(int i=2; i<=6; i++){
        arr[i-2] = atoi(argv[i]);
    }

    int result = search(arr, n, atoi(argv[1]));
    (result == -1)
        ? printf(1,"%s","Element is not found\n")
        : printf(1,"Element is found at index %d\n", result);
    return 0;
    
}

