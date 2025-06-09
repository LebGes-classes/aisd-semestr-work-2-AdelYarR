#include <iostream>

void shellSort(int a[], int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i++)
		{
			int temp = a[i];
			int j;
			for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
			{
				a[j] = a[j - gap];
			}
			a[j] = temp;
		}
	}
}

int main()
{
	int a[] = {6,3,5,-10,7,20,1,3};

	shellSort(a, 8);

	for (int i = 0; i < 8; i++) {
		std::cout << a[i] << " ";
	}
}