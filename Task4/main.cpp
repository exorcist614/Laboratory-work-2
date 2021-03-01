//calculating the volume of the cone
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float S, n, R, H;
	n = 3.14f;
	cout << "calculating the volume of the cone" << endl;
	cout << "input R and H " << endl;
	cin >> R >> H;
	S = (n*pow(R,2)*H)/3;
	cout << "volume:"<< S << endl;
	return 0;
}
