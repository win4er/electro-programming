#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;

void Swap(int& a, int& b){
    int k = a;
    a = b;
    b = k;
}

int getIndMax(int* ar, int size){
    int result = 0;
    int flag = 1;
    for (int i = size - 1; i > -1; i--){
        int flag = 1;
        for (int j = 0; j < i + 1; j++){
            if (ar[i] < ar[j]){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            result = i;
            break;
        }
    }
    return result;
}

int getIndMin(int* ar, int size){
    int result = 0;
    int flag = 1;
    for (int i = size - 1; i > -1; i--){
        int flag = 1;
        for (int j = 0; j < i + 1; j++){
            if (ar[i] > ar[j]){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            result = i;
            break;
        }
    }
    return result;
}

void InsertSort(int* ar, int size) {
    int i, j, digit;
    for (i = 1; i < size; i++) {
        digit = ar[i];
        j = i - 1;

        while (ar[j] < digit) {
            if (j < 0) {
                break;
            }
            *(ar + j + 1) = ar[j];
            j--;
        }
        *(ar + j + 1) = digit;
    }
}

bool getStatInfo(int* ar, int sizeAr, int* statAr, int sizeStat) {
    bool error_status = true;
    for (int i = 0; i < sizeAr; i++) {
        if (sizeStat < ar[i]) {
            cout << "error" << endl;
            error_status = false;
            continue;
        }
        statAr[ar[i]]++;
    }
    return error_status;
}

void CountSort(int *inputArNeedSort, int sizeInput) {
    int countNum[100];
    memset(countNum, 0x00, 100 * sizeof(int));
    if (getStatInfo(inputArNeedSort, sizeInput, &countNum[0], 100) == false) {
        cout << "can`t sort" << endl;
    }

    int curIndexInputAr = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < countNum[i]; j++) {
            inputArNeedSort[curIndexInputAr++] = i;
        }
    }
}

void SelectionSort(int* ar, int size){
    for (int j = 0; j < size; j++) {
        cout << getIndMax(ar, size - j) << " ";
    }
    cout << endl;
}

void BubbleSort1(int* ar, int size){
    int i = 0;
    int j = 0;
    while (j < size){
        while (i < size-j-1){
            if (ar[i] > ar[i+1]){
                Swap(ar[i], ar[i+1]);
            }
            i++;
        }
        j++;
        i = 0;
    }
}

void BubbleSort2(int* ar, int size){
    for(int j = 0; j < size; j++){
        for(int i = 0; i < size - 1 - j; i++){
            if (ar[i] > ar[i+1]){
                Swap(ar[i], ar[i+1]);
            }
        }
    }
}

