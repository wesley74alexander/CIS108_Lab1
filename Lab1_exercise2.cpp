#include <iostream>
#include <string>
using namespace std;

int main() {
	string FirstName, LastName;
	int age, DogAge;
	float confidence;
	cout << "Enter your first name: " << endl;
	cin >> FirstName;
	cout << "Enter your last name: " << endl;
	cin >> LastName;
	cout << "How old are you?: " << endl;
	cin >> age;
	cout << "How confident are you in programmers on a scale of 0-100%?" << endl;
	cin >> confidence;
	confidence = confidence / 100;
	confidence = double(confidence);
	DogAge = age * 7;
	cout << "Hello " << FirstName << " " << LastName << ", nice to meet you! You might be " << age << " in human years, but in dog years you are " << DogAge << endl;
	if(confidence < 0.5)
	{
		cout << "I agree, programmers can't be trusted!" << endl;
	}
	else
	{
		cout << "Writing good code takes hard work!" << endl;
	}
	return 0;
}
