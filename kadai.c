#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(int _array[],int _SIZE);
void compare(int _array[],int _SIZE){
    int i;
    int j;
    int tmp = 0;
    for (i = 0; i < _SIZE; i++){
        for(j = i + 1; j < _SIZE;j++){
            if (_array[i] < _array[j]){
                tmp = _array[i];
                _array[i] = _array[j];
                _array[j] = tmp;
            }
        }
    }
}

int main(void){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    printf("scores = ");
    int a;
    for (a = 0;a < SIZE;a++){
        printf(" %d",scores[a]);
    }
    printf("\n");
    compare(scores,SIZE);
    printf("result = ");
    int b;
    for (b = 0;b < SIZE;b++){
        printf(" %d",scores[b]);
    }
    printf("\n");
    return 0;
}