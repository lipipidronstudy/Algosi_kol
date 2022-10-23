#include <iostream>

int binarySearch(int array[], int x) {
    int length = sizeof(array) / sizeof(int);
    int l = 0;
    int r = length;

    while (r > l + 1) {
        int m = (l + r) / 2;

        if (array[m] < x) {
            l = m;
        } else {
            r = m;
        }
    }
    if (r < length && array[r] == x) {
        return r;
    } else {
        return -1;
    }
}

int main() {
    return 0;
}