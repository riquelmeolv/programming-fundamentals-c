#include <stdio.h>
#define row 3
#define column 4

void vectorizer(int matrix[row][column], int *vector);

int main()
{
    int matrix[row][column], vector[12];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Row %d | Column %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    vectorizer(matrix, vector);

    for(int i = 0; i < 12; i++)
    {
        printf("Number: %d\n", vector[i]);
    }

    return 0;
}

void vectorizer(int matrix[row][column], int *vector)
{
    int k = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            vector[k] = matrix[i][j];
            k++;
        }
    }
}