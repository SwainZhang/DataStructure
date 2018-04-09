#include <iostream>
#include "Sort/header/sort.h"



using namespace std;

void syso(const int a[] , int length) {
    cout << "数组长度:" << length << endl;
    for (int i = 0; i < length; ++i) {
        cout << a[i] << ",";
    }
    cout << endl;
}

int main() {

    int a[] = {1,3,4,0,9,11,99,39,90,35,53,56,23,55,1,3};

    syso(a,sizeof(a) / sizeof(a[0]));
    bubble_sort(a, sizeof(a)/ sizeof(a[0]));

    int* pt = a;
    for (int i = 0; i < sizeof(a)/ sizeof(a[0]); ++i) {
        cout << *(pt+i) << ",";
    }
    return 0;
}





