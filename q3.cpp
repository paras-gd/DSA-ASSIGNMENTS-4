#include <iostream>
using namespace std;
int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int mid = n / 2;
    int result[100];
    int k = 0;
    for (int i = 0; i < mid; i++) {
        result[k++] = arr[i];        
        result[k++] = arr[mid + i];  
    }
    if (n % 2 != 0) {
        result[k++] = arr[n - 1];
    }
    cout << "Interleaved output: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
