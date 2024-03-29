#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int>& arr, int x) {
    if(x>1 && arr[x-1]<arr[x-2])
    {
        swap(arr[x-1], arr[x-2]);
        InsertionSort(arr, x-1);
    }
    else if(arr.size()>x+1)
    {
        if(arr[x]>arr[x+1]) swap(arr[x], arr[x+1]);
        InsertionSort(arr, x+1);
    }
}
int main() {
    int y;
    cout << "Enter the number of elements: ";
    cin >> y;
    vector<int> arr(y);
    for (int i = 0; i < arr.size(); i++) 
    {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        arr[i] = x;
    }
    InsertionSort(arr,0);
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.size()-1 == i) cout << arr[i] << " ";
        else cout << arr[i] << ", ";
    }
    return 0;
}