#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time_t(NULL));

	const int SIZE = 10;
	int arr[SIZE]{};
	int min, max;
	float sum{0};

	for (int i = 0; i < SIZE; )
	{
		bool alreadyThere = false;
		int newRandoValue = rand() % 100;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRandoValue)
			{
				alreadyThere = true;
			}
		}

		if (!alreadyThere)
		{
			arr[i] = newRandoValue;
			i++;
		}

	}

	for (int k = 0; k < SIZE; k++)
	{
		cout << arr[k] << "\t";
		if (k == 10)
		{
			cout << endl;
		}
	}

	min = arr[0];
	max = arr[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];

		sum += arr[i];
	}

	float average = sum / SIZE;

	cout << "Maximum element: " << max << endl;
	cout << "Minimum element: " << min << endl;
	cout << "Average: " << average << endl;

	return 0;


}