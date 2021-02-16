#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int start, int end, int key){
    int mid = (start + end) / 2; //mid=start+(start-end)/2
    if (start > end)
        return -1;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearchRecursive(arr, start, mid - 1, key);
    else
        return binarySearchRecursive(arr, mid + 1, end, key);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarySearchRecursive(arr, 0, n - 1, key);
    return 0;
}
