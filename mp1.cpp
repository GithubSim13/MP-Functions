#include <iostream>

using namespace std;

float height_meter(float height, float inches) {
	float height_inch = (height * 12) + inches;
	return height_inch * 0.0254;
}

float weight_pounds(float pounds) {
	return pounds / 2.2;
}


int main ()
{
	float feet, inches, pounds;
	cout << "Enter your height in feet and inches:\n";
	cout << "\nFirst, enter the feet: ";
	cin >> feet;
	cout << "\nNext, enter the inches: ";
	cin >> inches;
	cout << "\nFinally, enter your weight in pounds: ";
	cin >> pounds;
	
		
	float height = height_meter(feet, inches);
	float weight = weight_pounds(pounds);
	
	cout << "\nYour height in meters is: " << height;
	cout << "\nYour weight in kilograms is: " << weight;

	float bmi = weight / (height * height);
		
	cout << "\nYour BMI is: " << bmi;
}
