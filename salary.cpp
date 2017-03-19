#include <iostream>
using namespace std;
int main()
{

	double hours, salary, rate;
	
	cout << "Enter the hourly rate of pay: $";
	cin >> rate;
	cout << "Enter the number of hours worked: ";
	cin >> hours;
	
	if (hours > 40)
		salary = rate * 40 + 1.5 * rate * (hours-40);
	else
		salary = rate * hours;
	
	cout << "Salary = $" << salary << endl;
	
	return 0;
}