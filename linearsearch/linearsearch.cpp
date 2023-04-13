#include <iostream>
using namespace std;


int arr[20];	// Array to be searched 
int n;			// number od elements in the array
int i;			// index of array element


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	// accept array elements
	cout << "\n---------------------\n";
	cout << "Enter array elements \n";
	cout << "-----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}

}


void LinearSearch()
{
	char ch;
	int comparison;		// Number of comparison 

	do		// langkah 3
	{
		// Accept the number to be searched
		cout << "\nEnter tge elements you want to search: ";		// langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; 1 < n; i++)										// langkah 2 dan 4
		{
			comparison = 0;
			if (arr[i] == item)										// langkah 5 a found
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break;
			}
		}

		if (i == n)													// langkah 5 b not found
			cout << "\n" << "not found un the array\n";
		cout << "n\Number of the comparison: " << comparison << endl;

		cout << "n\Continue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}


int main()
{
	input();
	LinearSearch();
}