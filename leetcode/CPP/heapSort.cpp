//
// Created by BinPC on 2023-02-11.
//
#include <iostream>
#include <vector>


using namespace std;

class Solution{
public:
    static void heapSort(vector<int> &arr)
    {
        if (arr.size() < 2) {
            return;
        }
        for (int i = 0; i < arr.size(); i++) {
            heapInsert(arr, i);
        }

        int size = arr.size();
        swap(arr, 0, --size);
        while (size > 0) {
            heapify(arr, 0, size);
            swap(arr, 0, --size);
        }
    }

    static void heapInsert(vector<int> &arr, int index)
    {
        while(arr[index] > arr[(index - 1) / 2]) {
            swap(arr, index, (index - 1) / 2);
            index = (index - 1) / 2;
        }
    }

    static void heapify(vector<int> &arr, int index, int size)
    {
        int left = index * 2 + 1; // 左孩子
        while (left < size) {
            int largest = left + 1 < size && arr[left + 1] > arr[left] ? left + 1 : left;
            largest = arr[largest] > arr[index] ? largest : index;
            if (largest == index) {
                break;
            }
            swap(arr, largest, index);
            index = largest;
            left = index * 2 + 1;
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
    aa.heapSort(arr);
    for(auto a : arr) {
        cout << a << endl;
    }
    cout << "hello world" << endl;
}