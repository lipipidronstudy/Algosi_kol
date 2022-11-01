#include <iostream>

void merge(int array[], int left,int mid, int right){
    int sizeL = mid - left + 1;
    int sizeR = right-mid;
    int arrayL[sizeL];
    int arrayR[sizeR];
    for (int i = 0; i < sizeL;++i){
        arrayL[i] = array[i];
    }
    for (int i = 0; i < sizeR; ++i){
        arrayR[i] = array[mid+1+i];
    }
    int i = 0;
    int j = 0;
    int point = left;
    while (i < sizeL && j < sizeR){
        if (arrayL[i] <= arrayR[j]){
            array[point++] = arrayL[i++];
        } else {
            array[point++] = arrayR[j++];
        }
    }
    while (i < sizeL){
        array[point++] = arrayL[i++];
    }
    while (j < sizeR){
        array[point++] = arrayR[j++];
    }
}
void mergesort(int array[],int left, int right){
    if (left >= right){
        return;
    }
    int mid = (left + right)/2;
    mergesort(array,left,mid);
    mergesort(array,mid+1,right);
    merge(array,left,mid,right);
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

