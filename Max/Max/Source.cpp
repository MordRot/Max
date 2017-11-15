#include "Max.h"
#include <iostream>
using namespace std;

void main()
{
	cout << max(1, 2, 3) << endl;
	cout << max(1, 3, 2) << endl;
	cout << max(2, 1, 3) << endl;
	cout << max(2, 3, 1) << endl;
	cout << max(3, 1, 2) << endl;
	cout << max(3, 2, 1) << endl;

	cout << max(3, 2, 3) << endl;
	cout << max(3, 3, 2) << endl;
	cout << max(2, 3, 3) << endl;
}