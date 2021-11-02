#include <iostream>
#include <iomanip>

using namespace std;

void CreatArray(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
		arr[i] = 4 + rand() % 70;
}

void PrintArray(int arr[], const int size)
{
	cout << "{";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";

	}
	cout << "}" << endl;

}
int SumArray(const int* const arr, const int size)
{
	int S = 0;
	for (size_t i = 0; i < size; i++)
		if ((arr[i] % 6 == 0) || ((i + 1) % 5 != 0))
			S += arr[i];
	return S;
}
int CountElementArray(const int* const arr, const int size)
{
	int C = 0;
	for (size_t i = 0; i < size; i++)
		if ((arr[i] % 6 == 0) || ((i + 1) % 5 != 0))
			C++;
	return C;
}

void ReplaceElementArray(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if ((arr[i] % 6 == 0) || ((i + 1) % 5 != 0))
			arr[i] = 0;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 25;
	int arr[n];

	CreatArray(arr, n);
	PrintArray(arr, n);

	cout << "SumArray= " << SumArray(arr, n) << endl;
	cout << "CountElementArray= " << CountElementArray(arr, n) << endl;

	ReplaceElementArray(arr, n);
	PrintArray(arr, n);

	return 0;
}