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
	while (count =1)
	{
		cin >> n;
		if (n == 0)
		{
			cout << "Enter 0, if you want to see data baze of drivers" << endl;
			cout << "Enter 1, if you want to complete data baze of drivers" << endl;
			cout << "Enter 2, if you want to correct data baze of drivers" << endl;
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
			else if (k ==2)
			{
				p1.correctdb();
			}
		}
		if (n == 1)
		{
			cout << "Enter 0, if you want to see data baze of passengers" << endl;
			cout << "Enter 1, if you want to complete data baze of passengers" << endl;
			cout << "Enter 2, if you want to correct data baze of passengers" << endl;
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
			else
			{
				p2.correctdb();
			}
		}
		if (n == 2)
		{
			cout << "Enter 0, if you want to see data baze of cars" << endl;
			cout << "Enter 1, if you want to complete data baze of cars" << endl;
			cout << "Enter 2, if you want to correct data baze of cars" << endl;
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
			else
			{
				p3.correctdb();
			}
		}
		if (n == 3)
		{
			cout << "Enter 0, if you want to see data baze of drivers" << endl;
			cout << "Enter 1, if you want to complete data baze of drivers" << endl;
			cout << "Enter 2, if you want to correct data baze of drivers" << endl;
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
			else
			{
				p4.correctdb();
			}
		}
		if (n == 4)
		{
			cout << "Enter 0, if you want to see data baze of drivers" << endl;
			cout << "Enter 1, if you want to complete data baze of drivers" << endl;
			cout << "Enter 2, if you want to correct data baze of drivers" << endl;
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
			else
			{
				p5.correctdb();
			}
		}
		//exit(0);
	} 
	//p1.savedb();
	//p1.loaddb();
	//p1.correctdb();
	//p4.savedb();
	//p4.loaddb();
	//p4.correctdb();
	
	system("pause");
	return 0;
}
