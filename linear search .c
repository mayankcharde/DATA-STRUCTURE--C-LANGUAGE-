#include <stdio.h>

int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // FOR SORTED AND UNSORTED ARRAY 
    int arr[] = {1, 2, 3, 3, 4, 5, 67, 8, 9, 0};
    int size = sizeof(arr) / sizeof(int);
    int element = 67;
    int result = linearsearch(arr, size, element);
    printf("the element %d was found at index %d\n", element, result);
    return 0;
}
