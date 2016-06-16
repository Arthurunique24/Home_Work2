#include <iostream>
#include "header.h"
using namespace std;
int main()
{

	Driver p1;
	Passenger p2;
	Car p3;
	Freight_Car p4;
	Bus p5;
	int n;
	cout << "Enter 0, if you want work with drivers " << endl;
	cout << "Enter 1, if you want work with passengers " << endl;
	cout << "Enter 2, if you want to work with cars " << endl;
	cout << "Enter 3, if you want to work with freight Cars " << endl;
	cout << "Enter 4, if you want to work with buses " << endl;
	int count = 1;
	while (count = 1)
	{
		cin >> n;
		if (n == 0)
		{
			cout << "Enter 0, if you want to see data baze of drivers" << endl;
			cout << "Enter 1, if you want to complete data baze of drivers" << endl;
			cout << "Enter 2, if you want to correct data baze of drivers" << endl;
			cout << "Enter 3, if you want to find passengers" << endl;
			int k;
			cin >> k;
			if (k == 0)
			{
				p1.loaddb();
			}
			else if (k == 1)
			{
				p1.savedb();
			}
			else if (k == 2)
			{
				p1.correctdb();
			}
			else if (k == 3)
			{
				p1.finddb();
			}
		}
		if (n == 1)
		{
			cout << "Enter 0, if you want to see data baze of passengers" << endl;
			cout << "Enter 1, if you want to complete data baze of passengers" << endl;
			cout << "Enter 2, if you want to correct data baze of passengers" << endl;
			cout << "Enter 3, if you want to find passengers" << endl;
			int k;
			cin >> k;
			if (k == 0)
			{
				p2.loaddb();
			}
			else if (k == 1)
			{
				p2.savedb();
			}
			else if (k == 2)
			{
				p2.correctdb();
			}
			else if (k == 3)
			{
				p2.finddb();
			}
			
		}
		if (n == 2)
		{
			cout << "Enter 0, if you want to see data baze of cars" << endl;
			cout << "Enter 1, if you want to complete data baze of cars" << endl;
			cout << "Enter 2, if you want to correct data baze of cars" << endl;
			cout << "Enter 3, if you want to find car" << endl;
			int k;
			cin >> k;
			if (k == 0)
			{
				p3.loaddb();
			}
			else if (k == 1)
			{
				p3.savedb();
			}
			else if (k == 2)
			{
				p3.correctdb();
			}
			else if (k == 3)
			{
				p3.finddb();
			}
		}
		if (n == 3)
		{
			cout << "Enter 0, if you want to see data baze of freight car" << endl;
			cout << "Enter 1, if you want to complete data baze of freight car" << endl;
			cout << "Enter 2, if you want to correct data baze of freight car" << endl;
			cout << "Enter 3, if you want to find freight car" << endl;

			int k;
			cin >> k;
			if (k == 0)
			{
				p4.loaddb();
			}
			else if (k == 1)
			{
				p4.savedb();
			}
			else if (k == 2)
			{
				p4.correctdb();
			}
			else if (k == 3)
			{
				p4.finddb();
			}
		}
		if (n == 4)
		{
			cout << "Enter 0, if you want to see data baze of buses" << endl;
			cout << "Enter 1, if you want to complete data baze of buses" << endl;
			cout << "Enter 2, if you want to correct data baze of buses" << endl;
			cout << "Enter 3, if you want to find freight buses" << endl;
			int k;
			cin >> k;
			if (k == 0)
			{
				p5.loaddb();
			}
			else if (k == 1)
			{
				p5.savedb();
			}
			else if (k == 2)
			{
				p5.correctdb();
			}
			else if (k == 3)
			{
				p5.finddb();
			}
		}
	} 

	system("pause");
	return 0;
}
