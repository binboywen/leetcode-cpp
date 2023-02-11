//
// Created by BinPC on 2023-02-11.
//
#include <iostream>
#include <vector>


using namespace std;

class Solution{
public:
    static void quickSort(vector<int> &arr)
    {
        if (arr.size() < 2) {
            return;
        }
        quickSort(arr, 0, arr.size() - 1);
    }
    static void quickSort(vector<int> &arr, int l, int r)
    {
        if (l < r) {
            vector<int> p = partition(arr, l, r);
            quickSort(arr, l, p[0]);
            quickSort(arr, p[1], r);
        }
    }

    static vector<int> partition(vector<int> &arr, int l, int r)
    {
        int less = l - 1;
        int more = r;
        while (l < more) {
            if (arr[l] < arr[r]) {
                swap(arr, ++less, l++);
            } else if (arr[l] > arr[r]) {
                swap(arr, l, --more);
            } else {
                l++;
            }
        }
        swap(arr, more, r);

        return {less, more + 1};
    }

    static void swap(vector<int> &arr, int l, int r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }

};

int main() {
    vector<int> arr = {1,3,5,2,4,6};
    Solution aa;
    aa.quickSort(arr);
    for(auto a : arr) {
        cout << a << endl;
    }
    cout << "hello world" << endl;
}