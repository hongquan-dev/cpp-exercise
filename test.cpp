#include <bits/stdc++.h>
using namespace std;

void InsertXAfterMax(int arr[], int &len, int x) {
    int max = arr[0];
    for (int i = len - 1; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
        }
        arr[i + 1] = arr[i];
    }
    arr[0] = x;
    ++len;
    for (int i = len - 1; i >= 0; i--) {
        if (arr[i] == max) {
            for (int j = len - 1; j > i; j--) {
                arr[j + 1] = arr[j];
            }
            arr[i + 1] = x;
            len++;
        }
    }
}
void PrintArr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {3, 5, 2, 5}, len = 4, x = 9;
    InsertXAfterMax(arr, len, x);
    PrintArr(arr, len);
    cout << len;
}
