#include <stdio.h>
#include <stdlib.h>

/*
12.	Създайте динамичен n-мерен масив. Реализирайте функция, която намира максималния елемент и позицията му 
(индекси във всяко измерение). Използвайте рекурсия за обхождане на всички елементи.
*/

int* createArray(int dimensions, int* sizes) 
{
    if (dimensions == 0) 
    {
        return NULL;
    }
    
    int totalSize = 1;
    for (int i = 0; i < dimensions; i++) 
    {
        totalSize *= sizes[i];
    }
    
    int* array = (int*)malloc(totalSize * sizeof(int));
    return array;
}

void findMax(int* array, int dimensions, int* sizes, int* maxValue, int* maxIndices, int currentIndices[], int currentDimension) 
{
    if (currentDimension == dimensions) 
    {
        int index = 0;
        for (int i = 0; i < dimensions; i++) 
        {
            index = index * sizes[i] + currentIndices[i];
        }
        
        if (array[index] > *maxValue) 
        {
            *maxValue = array[index];
            for (int i = 0; i < dimensions; i++) 
            {
                maxIndices[i] = currentIndices[i];
            }
        }
        return;
    }
    
    for (int i = 0; i < sizes[currentDimension]; i++) 
    {
        currentIndices[currentDimension] = i;
        findMax(array, dimensions, sizes, maxValue, maxIndices, currentIndices, currentDimension + 1);
    }
}

int main() 
{  
    int dimensions;
    printf("Enter the number of dimensions: ");
    scanf("%d", &dimensions);

    int* sizes = (int*)malloc(dimensions * sizeof(int));
    for (int i = 0; i < dimensions; i++) 
    {
        printf("Enter the size of dimension %d: ", i + 1);
        scanf("%d", &sizes[i]);
    }

    int* array = createArray(dimensions, sizes);
    int totalSize = 1;
    for (int i = 0; i < dimensions; i++) 
    {
        totalSize *= sizes[i];
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < totalSize; i++) 
    {
        scanf("%d", &array[i]);
    }

    int maxValue = array[0];
    int* maxIndices = (int*)malloc(dimensions * sizeof(int));
    int* currentIndices = (int*)malloc(dimensions * sizeof(int));

    findMax(array, dimensions, sizes, &maxValue, maxIndices, currentIndices, 0);

    printf("Maximum value: %d\n", maxValue);
    printf("Position of maximum value: ");
    
    for (int i = 0; i < dimensions; i++) 
    {
        printf("%d ", maxIndices[i]);
    }
    printf("\n");
    
    free(sizes);
    free(array);
    free(maxIndices);
    free(currentIndices);

    return 0;
}