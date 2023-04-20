#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name, lastname, result;
	cout << "\nEnter your name: ";
	cin >> name;
	cout << "\nEnter your lastname: ";
	cin >> lastname;
	result = name + " " + lastname;
	cout << "\nHello, " << result << "! Nice to meet you!\n";
	return 0;
}