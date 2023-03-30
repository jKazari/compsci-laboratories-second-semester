#include <iostream>
#include <math.h>

using namespace std;

void dec_to_bin_left(int dec_number, int n)
{
	int mask = 1 << (n / 2 - 1);

	while (mask > 0)
	{
		if ((dec_number & mask) == 0)
			cout << 0;
		else
			cout << 1;
		mask >>= 1;
	}
}

void dec_to_bin_right(int dec_number, int n)
{
	int mask = 1;

	while (mask <= pow(2, (n / 2)) - 1)
	{
		if ((dec_number & mask) == 0)
			cout << 0;
		else
			cout << 1;
		mask <<= 1;
	}
}

void palindrome(int dec_number, int n)
{
	if (dec_number < 0)
	{
		return;
	}
	else
	{
		if (n % 2 == 1)
		{
			for (int i = 1; i >= 0; i--)
			{
				dec_to_bin_left(dec_number, n - 1);
				cout << i;
				dec_to_bin_right(dec_number, n - 1);
			}
		}
		else
		{
			dec_to_bin_left(dec_number, n);
			dec_to_bin_right(dec_number, n);
		}
		palindrome(dec_number - 1, n);
	}
}

int main()
{
	int n;
	while (cin >> n)
	{
		int dec_number = pow(2, (n / 2)) - 1;
		palindrome(dec_number, n);
		cout << '\n';
	}
	return 0;
}