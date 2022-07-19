#include <stdio.h>
/*
this is our first lab
c language
*/

// functions prototyping
void BubbleSort(void);
void BinarySearch(int number);

int arr[10] = {1, 5, 2, 77, 35, 43, 66, 92, 100, 17};


int main(void)
{
    int number = 0;
    printf("Please Enter a number to search for: ");
    scanf("%d", &number);
    BubbleSort();
    BinarySearch(number);
}

void BubbleSort(void)
{
    int temp = 0;
    printf("Unsorted Array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", arr[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < (9 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", arr[i]);
    }
}

void BinarySearch(int number)
{
    int first = 0;
    int last = 9;
    int mid;
    int flag = 0;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (number == arr[mid])
        {
            flag = 1;
            break;
        }
        else if (number > arr[mid])
        {
            first = mid + 1;
        }
        else if (number < arr[mid])
        {
            last = mid - 1;
        }
    }
    if (flag == 1)
    {
        printf("\n%d was found at Index Number %d\n", number, mid);
    }
    else
    {
        printf("\n%d wasn't found\n", number);
    }
}
