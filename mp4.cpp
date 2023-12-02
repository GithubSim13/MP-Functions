#include <iostream>

using namespace std;

float novat(int a) 
{
	float total;
	float computation1 = a * 6.20;
	float computation2 = (250 * 6.20) + (9.30 * (a - 250));
	total = (a <= 250) ?  computation1 :  computation2;
	return total;
}

float withvat(int a)
{
	return a * 0.12;
}

int main () 
{
	int input;
	
	cout << "Enter the number of kilowatt hours consumed: ";
	cin >> input;
	
	float initialBill = novat(input);
	float withTax = withvat(initialBill);
	float totalBill = initialBill + withTax;
	
	cout << "Your electric bill is " << totalBill << " pesos";
}
