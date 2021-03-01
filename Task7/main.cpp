//"Deposit Calculator"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float sum, month, result, profit;
	cout << "Deposit Calculator" << endl;
	cout << "input sum in \"$\" and month:" << endl;
	cin >> sum >> month;
	
	result = sum *(pow( (1+5.0/100 ), month/12) );
	profit = (result - sum)/month;
	
	cout << "the profit from the deposit for the month:" << profit << "$" << endl;
	cout << "entire term of the deposit:" << month << "month" << endl;
	cout << "your balance:" << result << "$" << endl;
	
	return 0;
}
