#include <stdio.h>

void bubble_sort(int arr[], int size)
{
    int i;
    int j;
    int swapped;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

int main(void)
{
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i;

    bubble_sort(numbers, size);

    printf("Sorted result: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
