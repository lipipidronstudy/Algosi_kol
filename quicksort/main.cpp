#include <iostream>
int partition(int array[], int left, int right){
    int pivot = array[(left+right)/2];
    int i = left;
    int j = right;
    while (i <= j){
        while (array[i] < pivot){
            i++;
        }
        while (array[j] > pivot){
            j--;
        }
        if (i >= j){
            break;
        }
        std::swap(array[i++],array[j--]);
    }
    return j;
}
void quicksort(int array[], int left, int right){
    if (left < right){
        int mid = partition(array,left,right);
        quicksort(array,left,mid);
        quicksort(array,mid+1,right);
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

