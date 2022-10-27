#include <iostream>
void insertSort(int array[],int n){
    int key;
    int j;
    for (int i = 1; i < n; ++i){
        key = array[i];
        j = i-1;
        while (array[j] > key && j >= 0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}
int main() {
    int array[] = {5,4,3,2,1};
    insertSort(array,5);
    for (int i = 0; i < 5; ++ i){
        std::cout << array[i];
    }
    return 0;
}

