//convert the time interval's value, specified in minutes, to the value expressed in hours and minutes
#include <iostream>
using namespace std;

int main()
{
	int thh, thm, tm;
	cout << "convert the time interval's value" << endl;
	cout << " input minutes: " << endl;
	cin >> tm;
	thm = tm % 60;
	thh = tm / 60;
	cout << tm << " minutes is " << thh << " hours and " << thm << " minutes " << endl;
	
	return 0;
}

