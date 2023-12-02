#include <iostream>
using namespace std;

int grossPay(int hours) 
{
	float ot;
	if (hours >= 41)
	{
		ot = 750 * (hours - 40);
		float total = (40 * 500) + ot;
		return total; 
	
	} else if (hours <= 40) {
		return 500 * hours; 
	}
};

float ss(int a)
{
	return a * 0.015;
}

float hdmf(int a)
{
	return a * 0.03;
}

float pit(int a)
{
	return a * 0.10;
}

int main()
{
	int input, input2;
	float nts;
	cout << "Enter the number of hours worked this week: ";
	cin >> input;
	cout << "\nEnter the number of dependents: ";
	cin >> input2;

	nts = grossPay(input);
	cout << "\nGross Pay = " << nts << " pesos\n";
	int healthInsurance = (input2 <= 2) ? 0 : 300; 
	cout << "\nSocial Security Tax = " << ss(nts) << " pesos\n";
	cout << "HDMF = " << hdmf(nts) << " pesos\n";
	cout << "Professional Income Tax = " << pit(nts) << " pesos\n";
	cout << "Health Insurance = " << healthInsurance << " pesos\n";
	
	float totalSalary = nts - ss(nts) - hdmf(nts) - pit(nts);
	
	if(input2 >= 3) {
	totalSalary = totalSalary - healthInsurance;
	}
	cout << "\nNet Take Home Pay for the Week = " << totalSalary;
	
}
