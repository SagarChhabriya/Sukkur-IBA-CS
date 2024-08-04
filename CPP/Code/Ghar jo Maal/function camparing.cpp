#include <iostream>
using namespace std;

double larger(double x, double y);

double compareThree(double x, double y, double z);

int main()
{
	double one, two; 
		cout << "Line 2: The larger of 5 and 10 is "<< larger(5, 10) << endl; 
		cout << "Line 3: Enter two numbers: "; 
		cin >> one >> two; 	cout << endl; 
		cout << "Line 6: The larger of " << one<< " and " << two << " is "<< larger(one, two) << endl; 
		cout << "Line 7: The largest of 43.48, 34.00, "<< "and 12.65 is "<< compareThree(43.48, 34.00, 12.65)<< endl; 
	
	return 0;
}
	double larger(double x, double y)
	{
	double max;
	if (x >= y)
		max = x;
	else
		max = y;
	return max;
	}
	double compareThree (double x, double y, double z)
	{
	return larger(x, larger(y, z));
	}