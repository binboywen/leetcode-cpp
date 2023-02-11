//
// Created by BinPC on 2023-02-11.
//
#include <iostream>
#include <vector>


using namespace std;

class Solution{
public:
    static void mergeSort(vector<int> &arr)
    {
        if (arr.size() < 2) {
            return;
        }
        mergeSort(arr, 0, arr.size() - 1);
    }
    static void mergeSort(vector<int> &arr, int l, int r)
    {
        if (l == r) {
            return;
        }
        int mid = l + ((r - l) / 2);
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }

    static void merge(vector<int> &arr, int l, int m, int r)
    {
        vector<int> help(r - l + 1);
        int i = 0;
        int p1 = l;
        int p2 = m + 1;
        while (p1 <= m && p2 <= r) {
            help[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
        }
        while(p1 <= m) {
            help[i++] = arr[p1++];
        }
        while(p2 <= r) {
            help[i++] = arr[p2++];
        }
        for (i = 0; i < help.size(); i++) {
            arr[i + l] = help[i];
        }
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
    aa.mergeSort(arr);
    for(auto a : arr) {
        cout << a << endl;
    }
    cout << "hello world" << endl;
}