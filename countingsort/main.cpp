#include <iostream>

using namespace std;

void countingSort(int A[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        k = max(A[i], k);
    }

    int C[k];
    for (int number = 0; number < k; number++) {
        C[number] = 0;
    }

    for (int i = 0; i < n; i++) {
        C[A[i]]++;
    }

    int pos = 0;
    for (int number = 0; number < k; number++) {
        for (int i = 0; i < C[number]; i++) {
            A[pos] = number;
            pos++;
        }
    }

}

int main() {
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    countingSort(array, n);

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
