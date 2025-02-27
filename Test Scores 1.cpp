
#include "Sort Search.h"


int main()
{
	ifstream scores1;
	ifstream names2;
	ofstream Output;
	int count = 0;
	const int SIZE = 20;
	int scoreArr[SIZE];
	double averageDisplay = 0;
	int total = 0;
	string NamesList[SIZE * 2];
	int score;
	names2.open("StudentData.txt");
	while (count < 20)
	{
		names2 >> NamesList[count] >> score;
		count++;
	}
	cout << endl;
	count = 0;
	scores1.open("NumericData.txt");
	while (count < 20)
	{
		scores1 >> scoreArr[count];
		if (scoreArr[count] < 0)
		{
			terminate();
		}
		count++;
	}
	cout << endl;
	count = 0;
	unsorted(scoreArr);
	
	selectionSort(scoreArr, NamesList, SIZE);
	Output.open("Output.txt");
	count = 0;
	Output << "The sorted array is" << endl;
	while (count < 20)
	{
		Output << setw(10) << NamesList[count] << " ";
		count++;
	}
	Output << endl;
	count = 0;
	while (count < 20)
	{
		Output << setw(10) << scoreArr[count] << " ";
		count++;
	}
	Output << endl;
	
	cout << "The average of the scored is ";
	averageDisplay = average(scoreArr);
	Output << "The average is " << averageDisplay;
	cout << setprecision(4) << averageDisplay << endl;
	Output.close();
}
void unsorted(int array[])
{
	cout << "The current list is" << endl;
	int count = 0;
	while (count < 20)
	{
		cout << array[count] << " ";
		count++;
	}
	cout << endl;
	
}

void selectionSort(int array[], string list[], int size)
{
	int minIndex, minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		swap(array[minIndex], array[start]);
		swap(list[minIndex], list[start]);
	}
	int count = 0;
	cout << "The sorted array is" << endl;
	while (count < 20)
	{
		cout << setw(10) << list[count] << " ";
		count++;
	}
	cout << endl;
	count = 0;
	while (count < 20)
	{
		cout << setw(10) << array[count] << " ";
		count++;
	}
	cout << endl;
}

double average(int array[])
{
	int count = 1;
	double sum = 0;
	double mean = 0;
	
	while (count < 20)
	{
		sum = array[count] + sum;
		count++;
	}
	mean = sum / (count - 1);
	return mean;
}

void terminate(void)
{
	cout << "Whoops, Something went wrong." << endl;
	exit(0);
}