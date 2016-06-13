#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class Driver
{
public:
	void savedb()
	{
		ofstream file_driver;
		file_driver.open("Driver.txt", ios::app);
		if (!file_driver)
		{
			cerr << "File not found"; exit(1);
		}
		int a;
		cout << "How many drivers you want to add: ";
		cin >> a;
		for(int i=0;i<a;i++)
		{
			cin >> fio_of_driver;
			file_driver << fio_of_driver << endl;
		}
		cout << "===========================" << endl;
	}
	void loaddb()
	{
		ifstream file_driver;
		file_driver.open("Driver.txt");
		if (!file_driver)
		{
			cerr << "File not found"; exit(1);
		}
		cout << "Data base of drivers: " << endl;
		while (!file_driver.eof())
		{
			file_driver.getline(buffer, 100);
			cout << buffer << endl;
		}
		cout << "===========================" << endl;
	}

	void correctdb()
	{
			string search, repl, path, file;
			cin.get();
			cout << "Name to search= ";
			getline(cin, search);
			cout << endl;
			cout << "Name to replace= ";
			getline(cin, repl);
			path = "Driver.txt";
			fstream file_driver(path.c_str());
			if (!file_driver) 
			{ 
				cerr << "file not found"; exit(1); 
			}
			getline(file_driver, file, (char)26);
			file_driver.clear();
			file_driver.close();
			cout << "___________________________" << endl;
			cout << "Before " << endl;
			cout << "___________________________" << endl;
			cout << file << endl;
			string::size_type ind = 0;
			while ((ind = file.find(search, ind)) != string::npos) //специальное значение, равное максимальному значению, которое может предоставить тип 
			{
				file.replace(ind, search.size(), repl); //заменяем подстроку 
				ind += repl.size();
			}
			cout << "___________________________" << endl;
			cout << "After " << endl;
			cout << "___________________________" << endl;
			cout << file << endl;
			file_driver.open(path.c_str(), ios::out | ios::trunc);
			file_driver << file;
			file_driver.close();
			cout << "===========================" << endl;
	}
protected:
	char fio_of_driver[50];
	char buffer[100];
};

class Passenger
{
public:
	void savedb()
	{
		ofstream file_passenger;
		file_passenger.open("Passenger.txt", ios::app);
		if (!file_passenger)
		{
			cerr << "File not found"; exit(1);
		}
		int a;
		cout << "How many passengers you want to add: ";
		cin >> a;
		for (int i = 0; i<a; i++)
		{
			cin >> fio_of_pass;
			file_passenger << fio_of_pass << endl;
		}
		cout << "===========================" << endl;
	}
	void loaddb()
	{
		ifstream file_passenger;
		file_passenger.open("Passenger.txt");
		if (!file_passenger)
		{
			cerr << "File not found"; exit(1);
		}
		cout << "Data base of passengers: " << endl;
		while (!file_passenger.eof())
		{
			file_passenger.getline(buffer, 100);
			cout << buffer << endl;
		}
		cout << "===========================" << endl;
	}
	void correctdb()
	{
		string search, repl, path, file;
		cin.get();
		cout << "Name to search= ";
		getline(cin, search);
		cout << "Name to replace= ";
		getline(cin, repl);
		path = "Passenger.txt";
		fstream file_passenger(path.c_str());
		if (!file_passenger)
		{
			cerr << "File not found"; exit(1);
		}
		getline(file_passenger, file, (char)26);
		file_passenger.clear();
		file_passenger.close();
		cout << "___________________________" << endl;
		cout << "Before " << endl;
		cout << "___________________________" << endl;
		cout << file << endl;
		string::size_type ind = 0;
		while ((ind = file.find(search, ind)) != string::npos)
		{
			file.replace(ind, search.size(), repl);
			ind += repl.size();
		}
		cout << "___________________________" << endl;
		cout << "After " << endl;
		cout << "___________________________" << endl;
		cout << file << endl;
		file_passenger.open(path.c_str(), ios::out | ios::trunc);
		file_passenger << file;
		file_passenger.close();
		cout << "===========================" << endl;
	}

protected:
	char fio_of_pass[50];
	char buffer[100];
};

class Car // Легковые автомобили
{ 
public:
	void savedb()
	{
		ofstream file_auto;
		file_auto.open("Car1.txt", ios::app);
		if (!file_auto)
		{
			cerr << "File not found"; exit(1);
		}
		int a;
		
		cout << "How many cars you want to add: ";
		cin >> a;
		for (int i = 0; i<a; i++)
		{
			cin.get();
			cout << "Enter car: ";
			getline(cin, auto1);
			cout << "Enter price: ";
			cin >> price[100];
			file_auto << "Car model: " << auto1 << "Car price: " << price << endl;
		}
		cout << "===========================" << endl;
	}
	void loaddb()
	{
		ifstream file_auto;
		file_auto.open("Car1.txt");
		if (!file_auto)
		{
			cerr << "File not found"; exit(1);
		}
		cout << "Data base of cars: " << endl;
		while (!file_auto.eof())
		{
			file_auto.getline(buffer, 100);
			cout << buffer << endl;
		}
		cout << "===========================" << endl;
	}
	void correctdb()
	{
		string search, repl, path, file;
		cin.get();
		cout << "Car to search= ";
		getline(cin, search);
		cout << "Car to replace= ";
		getline(cin, repl);
		path = "Car1.txt";
		fstream file_auto(path.c_str());
		if (!file_auto)
		{
			cerr << "File not found"; exit(1);
		}
		getline(file_auto, file, (char)26);
		file_auto.clear();
		file_auto.close();
		cout << "___________________________" << endl;
		cout << "Before " << endl;
		cout << "___________________________" << endl;
		cout << file << endl;
		string::size_type ind = 0;
		while ((ind = file.find(search, ind)) != string::npos)
		{
			file.replace(ind, search.size(), repl);
			ind += repl.size();
		}
		cout << "___________________________" << endl;
		cout << "After " << endl;
		cout << "___________________________" << endl;
		cout << file << endl;
		file_auto.open(path.c_str(), ios::out | ios::trunc);
		file_auto << file;
		file_auto.close();
		cout << "===========================" << endl;
	}
protected:
	string auto1;
	int price[100];
	char buffer[100];
};
class Freight_Car // Грузовые автомобили
{
public:
	void savedb()
	{
		ofstream file_auto;
		file_auto.open("Car2.txt", ios::app);
		if (!file_auto)
		{
			cerr << "File not found"; exit(1);
		}
		int a;
		cout << "How many cars you want to add: ";
		cin >> a;
		for (int i = 0; i<a; i++)
		{
			cin >> auto2;
			file_auto << auto2 << endl;
		}
		cout << "===========================" << endl;
	}
	void loaddb()
	{
		ifstream file_auto;
		file_auto.open("Car2.txt");
		if (!file_auto)
		{
			cerr << "File not found"; exit(1);
		}
		cout << "Data base of freight cars: " << endl;
		while (!file_auto.eof())
		{
			file_auto.getline(buffer, 100);
			cout << buffer << endl;
		}
		cout << "===========================" << endl;
	}
	void correctdb()
	{
		string search, repl, path, file;
		cin.get();
		cout << "Car to search= ";
		getline(cin, search);
		cout << "Car to replace= ";
		getline(cin, repl);
		path = "Car2.txt";
		fstream file_auto(path.c_str());
		if (!file_auto)
		{
			cerr << "File not found"; exit(1);
		}
		getline(file_auto, file, (char)26);
		file_auto.clear();
		file_auto.close();
		cout << "___________________________" << endl;
		cout << "Before " << endl;
		cout << "___________________________" << endl;
		cout << file << endl;
		string::size_type ind = 0;
		while ((ind = file.find(search, ind)) != string::npos)
		{
			file.replace(ind, search.size(), repl);
			ind += repl.size();
		}
		cout << "___________________________" << endl;
		cout << "After " << endl;
		cout << "___________________________" << endl;
		cout << file << endl;
		file_auto.open(path.c_str(), ios::out | ios::trunc);
		file_auto << file;
		file_auto.close();
		cout << "===========================" << endl;
	}
protected:
	char auto2[100];
	char buffer[100];
};
class Bus // Грузовые автомобили
{
public:
	void savedb()
	{
		ofstream file_auto;
		file_auto.open("Car3.txt", ios::app);
		if (!file_auto)
		{
			cerr << "File not found"; exit(1);
		}
		int a;
		cout << "How many buses you want to add: ";
		cin >> a;
		for (int i = 0; i<a; i++)
		{
			cin >> auto3;
			file_auto << auto3 << endl;
		}
		cout << "===========================" << endl;
	}
	void loaddb()
	{
		ifstream file_auto;
		file_auto.open("Car3.txt");
		if (!file_auto)
		{
			cerr << "File not found"; exit(1);
		}
		cout << "Data base of buses: " << endl;
		while (!file_auto.eof())
		{
			file_auto.getline(buffer, 100);
			cout << buffer << endl;
		}
		cout << "===========================" << endl;
	}
	void correctdb()
	{
		string search, repl, path, file;
		cin.get();
		cout << "Car to search= ";
		getline(cin, search);
		cout << "Car to replace= ";
		getline(cin, repl);
		path = "Car3.txt";
		fstream file_auto(path.c_str());
		if (!file_auto)
		{
			cerr << "File not found"; exit(1);
		}
		getline(file_auto, file, (char)26);
		file_auto.clear();
		file_auto.close();
		cout << "___________________________" << endl;
		cout << "Before " << endl;
		cout << "___________________________" << endl;
		cout << file << endl;
		string::size_type ind = 0;
		while ((ind = file.find(search, ind)) != string::npos)
		{
			file.replace(ind, search.size(), repl);
			ind += repl.size();
		}
		cout << "___________________________" << endl;
		cout << "After " << endl;
		cout << "___________________________" << endl;
		cout << file << endl;
		file_auto.open(path.c_str(), ios::out | ios::trunc);
		file_auto << file;
		file_auto.close();
		cout << "===========================" << endl;
	}
protected:
	char auto3[100];
	char buffer[100];
};
