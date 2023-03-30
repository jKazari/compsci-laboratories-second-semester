#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int Parent(int index) {
    return index/2;
}

int LeftChild(int index) {
    return index*2;
}

int RightChild(int index) {
    return index*2 + 1;
}

bool Compare(string arrayOne, string arrayTwo) {
    int arrayOneSize = arrayOne.size();
    if (arrayOne.size() > arrayTwo.size()) {
        return true;
    }
    else if (arrayOne.size() < arrayTwo.size()) {
        return false;
    }
    else {
        for (int i = 0; i < arrayOneSize; i++) {
            if (arrayOne[i] > arrayTwo[i]) {
                return true;
            }
            else if (arrayOne[i] < arrayTwo[i]) {
                return false;
            }
            else {
                continue;
            }
        }
    }
    return false;
}

void Heapify(string array[], int parentIndex, int arraySize) {
    int leftchildIndex = LeftChild(parentIndex);
    int rightchildIndex = RightChild(parentIndex);
    int maxIndex;

    if (leftchildIndex <= arraySize && Compare(array[leftchildIndex-1], array[parentIndex-1])) {
        maxIndex = leftchildIndex;
    }
    else {
        maxIndex = parentIndex;
    }
    if (rightchildIndex <= arraySize && Compare(array[rightchildIndex-1], array[maxIndex-1])) {
        maxIndex = rightchildIndex;
    }
    if (maxIndex != parentIndex) {
        string temp = array[parentIndex-1];
        array[parentIndex-1] = array[maxIndex-1];
        array[maxIndex-1] = temp;

        Heapify(array, maxIndex, arraySize);
    }
}

void BuildHeap(string array[], int size) {
    for (int i = Parent(size); i > 0; i--) {
        Heapify(array, i, size);
    }
}

void HeapSort(string array[], int size) {
    BuildHeap(array, size);
    for (int i = size; i > 1; i--) {
        string temp = array[i-1];
        array[i-1] = array[0];
        array[0] = temp;
        Heapify(array, 1, i-1);
    }
}

int main() {
    int size;
    cin >> size;

    string *array;
    array = new string[size];

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    HeapSort(array, size);

    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    delete[] array;
    return 0; 
}