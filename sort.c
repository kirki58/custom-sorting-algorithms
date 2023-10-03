#include <stdio.h>

void simple_sort(int arr[], int len){
    for (size_t i = 0; i < len-1; i++)
    {
        for (size_t j = i+1; j < len; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void selection_sort(int arr[],int len){
    int smallest = __INT_MAX__;
    int index;
    for (size_t i = 0; i < len-1; i++)
    {
        for (size_t j = i; j < len; j++)
        {
            if(arr[j]< smallest){
                smallest = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = smallest;
        arr[index] = temp;
        smallest = __INT_MAX__;
    }
    return arr;
}
static void swap(int* e1, int* e2){
    int temp = (*e1);
    (*e1) = (*e2);
    (*e2) = temp;
}
void insertion_sort(int arr[],int len){
    for (size_t i = 1; i < len; i++)
    {
        if(arr[i] < arr[i-1]){
            int j = i;
            while(arr[j] < arr[j-1] ){
                if(j == 0){
                    break;
                }
                swap(&arr[j],&arr[j-1]);
                j--;
            }
        }
    }
}

void bubble_sort(int arr[],int len){
    bool swapped;
    for (size_t i = 0; i < len-1; i++)
    {
        swapped = false;
        for (size_t j = 0; j < len-1-i; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }     
    }
}