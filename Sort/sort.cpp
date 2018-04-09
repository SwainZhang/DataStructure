//
// Created by emery on 2018/4/9.
//

#include <iostream>
#include "header/sort.h"
using namespace std;
void swap(int &a, int& b);

int bubble_sort(int a[], int length){
    bool sorted = false;
    while (!sorted){
        sorted = true;
        for (int i = 1; i < length; ++i) {
            if(a[i-1] > a[i]){
                swap(a[i-1],a[i]);
                sorted = false;
            }
        }

        length--;
    }
    return 0;
}

void swap(int &a, int &b) {
   int temp = a;
   a = b;
   b = temp;
}