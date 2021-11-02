#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void CreatArray(int arr[], const int size, int i)
{
    if (i < size)
    {
        arr[i] = 4 + rand() % 70;
        CreatArray(arr, size, i + 1);
        return;
    }
}

void PrintArray(int arr[], const int size, int i)
{
    if (i < size)
    {
        if (i == 0)
            cout << "{";
        cout << arr[i];
        if (i != size - 1)
            cout << ", ";
        else cout << "}" << endl;

        PrintArray(arr, size, i + 1);
        return;
    }
}

int SumArray(const int *const arr, const int size, int i)
{
    if (i < size)
    {
        if ((arr[i] % 6 == 0) || ((i + 1) % 5 != 0))
            return arr[i] + SumArray(arr, size, i + 1);
        else
            return SumArray(arr, size, i + 1);
    }
    else return 0;
}

int CountElementArray(int const *const arr, const int size, int i) 
{
    if (i < size)
    {
        if ((arr[i] % 6 == 0) || ((i + 1) % 5 != 0))
            return CountElementArray(arr, size, i + 1) + 1;
        else
            return CountElementArray(arr, size, i + 1);

    }
    else return 0;
    
}

void ReplaceElementArray(int arr[], const int size, int i)
{
    if (i < size)
    {
        if ((arr[i] % 6 == 0) || ((i + 1) % 5 != 0))
            arr[i] = 0;
        ReplaceElementArray(arr, size, +1);
        return;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 25;
    int arr[n];

    CreatArray(arr, n, 0);
    PrintArray(arr, n, 0);

    cout << "SumArray= " << SumArray(arr, n, 0) << endl;
    cout << "CountElementArray= " << CountElementArray(arr, n, 0) << endl;

    ReplaceElementArray(arr, n, 0);
    PrintArray(arr, n, 0);

    return 0;
}





