#include <stdio.h>

int bubbleSort(int arr[], int sizeArr);

int main()
{
    int array[] = {2,6,7,8,1,9};
    int sizeArray = sizeof(array) / sizeof(int);
    bubbleSort(array,sizeArray);
    return 0;
}

int bubbleSort(int arr[], int sizeArr)
{
    int result = 1;

    while(result)
    {
        result = 0;

        for(int i = 0; i < sizeArr; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int foo = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = foo;
                result = 1;
            }
        }
    }
}
