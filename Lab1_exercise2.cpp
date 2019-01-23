// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h" only for visual studio not for atom on macbook
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


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
