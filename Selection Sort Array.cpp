#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	int size = 10;
	cout << "Enter numbers: " << endl;
	for (int l= 0; l < 10; l++)
		cin >> arr[l];
	for (int j = 0; j < 10; j++)
	{
		int max = arr[0], index = 0;
		for (int i = 0; i < size; i++)
		{
			if (max < arr[i])
			{
				max = arr[i];
				index = i;
			}
		}
		cout << "max is :" << max << endl;
		cout << "index of max is: " << index << endl;
		int swap;
		swap = arr[size - 1];
		arr[size - 1] = arr[index];
		arr[index] = swap;
		size--;
	}
	for (int k = 0; k < 10; k++)
		cout << arr[k] << ",  ";
	system("pause");
	return 0;
}