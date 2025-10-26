#include<iostream>
using namespace std;

//Include class
#include "MiniVector.h"

//class for test:
class Employee
{
};

int main()
{
	//test1
	MiniVector<int> list1(5);

	for (int i = 0; i < list1.Length(); i++)
	{
		list1.Add(i + 1);
	}
	list1.Display();

	list1.Add(6);
	list1.Add(7);
	list1.Add(8);
	cout << "\n================\n";
	list1.Display();

	cout << '\n' << list1[0] << '\n';
	list1[0] = 15;
	cout << list1[0] << '\n';

	//cout << list1[10] << '\n'; //Index out of range! exptions

	cout << list1.Length();

	////////////////////////////////////////////////////////////
	cout << "\n\n==============================================\n\n";

	//test2
	MiniVector<string> list2(3);

	for (int i = 0; i < list2.Length(); i++)
	{
		list2.Add("AAA");
	}
	list2.Display();

	list2.Add("Example");
	list2.Add("Element 7");
	cout << "\n================\n";
	list2.Display();

	cout << '\n' << list2[0] << '\n';
	list2[0] = "ay haga";
	cout << list2[0] << '\n';

	//cout << list2[10] << '\n'; //Index out of range! exptions

	cout << list2.Length();

	////////////////////////////////////////////////////////////

	class Employee e1;
	MiniVector<Employee> list3(5);

	return 0;
}