#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k) {
    int length = arr.size();
    if (length == 0) return arr;

    k = k % length;

    vector<int> temp(arr.begin(), arr.begin() + k); // Store first k elements

    for (int i = k; i < length; i++) {
        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++) {
        arr[length - k + i] = temp[i];
    }

    return arr;
}