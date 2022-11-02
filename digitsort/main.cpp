#include <iostream>
#include <valarray>

using namespace std;

int digit(int number, int position) {
    return (int)(number / pow(10, position - 1)) % 10;
}

void radixSort(int array[], int length, int n) {
    int C[10], result[n];
    int SumId[10];
    for (int position = 1; position <= length; ++position) {

        for (int j = 0; j < 10; ++j) {
            C[j] = 0;
            SumId[j] = 0;
        }
        for (int j = 0; j < n; ++j) {
            C[digit(array[j], position)]++;
        }
        for (int j = 1; j < 10; ++j) {
            SumId[j] = SumId[j-1] + C[j-1];
        }
        for (int j = 0; j < n; ++j) {
            result[SumId[digit(array[j], position)]] = array[j];
            ++SumId[digit(array[j], position)];
        }
        for (int j = 0; j < n; ++j) {
            array[j] = result[j];
        }
    }
}

int main() {
    int n, length;
    cin >> n >> length;

    int array[n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    radixSort(array, length, n);

    cout << '\n';

    for (int i = 0; i < n; ++i) {
        cout << array[i] << '\n';
    }

    return 0;
}
