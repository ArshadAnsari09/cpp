#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5};
    //   printArray(arr1,10);

    int arr2[5] = {3, 5, 6, 7, 8};
    //  printArray(arr2,5);

    char ch[5]={'a','b','c','d','e'};
    printArray(ch,5);

    double firstDouble[29];
    float firstFloat[5];
    bool firstBool[8];
    return 0;
}