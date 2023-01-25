#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;

void fillRandom(int* arr, int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void printArr(int* ar, int size) {
    for (int i = 0; i < size; i++) {
        cout << i << " : " << ar[i] << endl;
    }
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
