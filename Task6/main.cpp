//display the digits of which this number consists in reverse order
#include <iostream>
using namespace std;

int main()
{
	int value, tmp=0;
	cout << "display the digits of which this number consists in reverse order" << endl;
	cout << " input value" << endl;
	cin >> value;
	while(value > 0)
	{
		tmp = 10 * tmp + value % 10;
		value /= 10;
	}
	cout << " your number:" << tmp << endl;
	return 0;
}
