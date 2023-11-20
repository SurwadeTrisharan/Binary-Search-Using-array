#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) 
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    return -1;
}

int main(void) 
{
    int arr[20];
    int i, n, x;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter elements in Sorted order:\n";
    for (i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1) 
    {
       cout << "Element not found";
    }
    else
    {
        cout << "Element found at index " << result << ", value is: " << arr[result];
    }
     return 0;
}
