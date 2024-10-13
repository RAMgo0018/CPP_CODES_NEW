#include <iostream>
using namespace std;
void mergeAscendingDescending(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0;
    int j = n2 - 1;
    int k = 0;

    while (i < n1 && j >= 0) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            k++;
            i++;
        } else {
            result[k] = arr2[j];
            k++;
            j--;
        }
    }
    while (i < n1) {
        result[k] = arr1[i];
        k++;
        i++;
    }
    while (j >= 0) {
        result[k] = arr2[j];
        k++;
        j--;
    }
}
int main() {
    int arr1[] = {0, 0, -4, 7};
    int arr2[] ={-4,-3,-4,0,9}; 

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[n1 + n2]; //
    mergeAscendingDescending(arr1, n1, arr2, n2, result);
    cout<< "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout<< result[i] << " ";
    }
    cout<< endl;
    return 0;
}