// ~usr/datastruct/Search.h
// The implementations of the functions contained in the corresponding header.

#include "Search.h"
#include <iostream>

int binary_search_tree(int list[], int low, int high, int to_find) {
    // This function searches the list (sorted) for the element to_find
    // Maybe throw in a verification that the list is sorted
    int mid = (high + low)/2;
    if(low < high) {     
        if(list[mid] == to_find)
            return mid;
        if(to_find < list[mid])
            return binary_search_tree(list, low, mid, to_find);
        else
            return binary_search_tree(list, mid + 1, high, to_find);
    }
    else
        return -1;
    
}
