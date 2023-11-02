#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int prime_number, number, f = 0, i;
	char n;
	long int range;
	long int start_point, end_point;
	cout << "FIND THE PRIME NUMBER (P/p) OR CHECK THE SPECIFIC NO (N/n)?";
	cin >> n;
	if (n == 'P' || n == 'p')
	{
		cout << "ENTER START POINT:";
		cin >> start_point;
		cout << "ENTER END POINT:";
		cin >> end_point;
		cout << "\nPRINT NO FROM" << " "<< start_point<< " " << "TO" << " " << end_point << "" << '=';
		while (start_point <= end_point)
		{
			f = 0;
			for (i = 2; i <= start_point / 2; i++)
			{
				if (start_point % i == 0)
				{
					f = 1;
					break;
				}
			}
			if (f == 0)
				cout << "\n" << start_point;
			start_point = start_point + 1;
		}

	}
	else if (n == 'N' || n == 'n')
	{
		cout << "CHECKING THE NUMBER:";
		cin >> number;
		for (int n = 1; n <= number; n++)
		{
			if (number % n != 0)
			{
				cout << "PRIME NUMBER\n";
				break;
			}
			else
			{
				cout << "COMPOSITE NUMBER\n";
				break;
			}
		}

	}
	else
	{
		cout << "INVALID OPTION\n";
		return 1;
	}

	
}

