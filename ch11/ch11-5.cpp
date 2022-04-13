#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	cout << left << setw(15) << "Number" << setw(15) << "Square"
	<< setw(15) << "Square Root" << endl;
	for (int i=0;i<=45;i=i+5)
	{
		cout << setw(15) << setfill('_') << i;
		cout << setw(15) << setfill('_') << i*i;
		cout << setw(15) << setfill('_') << setprecision(3) << sqrt(i);
		cout << endl;
	}
}