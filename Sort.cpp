// ~/usr/datastruct/Sort.cpp
// This file contains the implementations of sorting algorithms declared in
// the corresponding header.

#include "Sort.h"

// Sorting definitions 
void insertion_sort(int list[], int size) {
    // This function implements the insertion sort algorithm which is a sorting
    // algorithm similar to sorting a hand of cards.
    for(int i =1; i < size; i++) {
        int key = list[i];
        // Now shift list[i] into position
        int j = i - 1;
        while(j>-1 && list[j] > key) {
            list[j+1] = list[j];
            j--;
        }
        list[j+1] = key;
    }
}

void merge_sort(int list[], int low, int high) {
    if(low < high) {
        int mid = (high + low)/2;
        merge_sort(list, low, mid);
        merge_sort(list, mid+1, high);
        merge(list, low, mid, high);
    }
}

// Auxiliary definitions
void merge(int list[], int low, int mid, int high) {
    // This algorithm will merge two halves of list[], assume that they were
    // sorted independently.
    int n_1 = (mid - low) + 1;
    int n_2 = (high - mid);
    int L[n_1], R[n_2];

    // Initializing auxiliary arrays
    for(int i = 0; i < n_1; i++)
        L[i] = list[low + i];

    for(int i = 0; i < n_2; i++)
        R[i] = list[mid + i +1];

    // Sorting
    int i = 0, j = 0;
    for(int k = low; k < high + 1; k++) {
        if ((L[i] <= R[j] || j == n_2) && i!= n_1) {
            list[k] = L[i];
            i++;
        }
        else {
            list[k] = R[j];
            j++;
        }
    }
}
