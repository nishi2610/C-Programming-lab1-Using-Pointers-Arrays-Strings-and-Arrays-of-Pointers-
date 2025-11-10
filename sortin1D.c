#include <stdio.h>
int main() {
    int matrix[4][4];
    int array[16];
    int i, j, k = 0, temp;
    printf("Enter elements of a 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);}
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            array[k++] = matrix[i][j];}
}
    for(i = 0; i < 15; i++) {
        for(j = i + 1; j < 16; j++) {
            if(array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;}
        }
    }
    printf("\nSorted elements in 1D array:\n");
    for(i = 0; i < 16; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
