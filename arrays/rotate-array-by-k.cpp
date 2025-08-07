#include <vector>
using namespace std;
#-----------------Brute----------------------
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
--------------------------------------------------------
---------------Optimized--------------------------------
void rotateArray(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin >> d;
    rotateArray(arr,n,d);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}