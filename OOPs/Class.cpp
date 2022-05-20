#include <bits/stdc++.h>
using namespace std;

class Employee {
public : 
	string Name;
	string Company;
	int Age;

	void introduceYourself()
	{
		cout << "Name : " << Name << endl;
		cout << "Company : " << Company << endl;
		cout << "Age : " << Age << endl;
	}

	// Parametrised Constructor
	Employee(string name,string company,int age)
	{
		Name = name;
		Company = company;
		Age = age;
	}
};

int main()
{
	Employee e1("Ravi","PokeIndia",19);
	// e1.Name = "Ravi";
	// e1.Company = "PokeIndia";
	// e1.Age = 19;
	e1.introduceYourself();

	Employee e2 = Employee("Abhi","CodeChef",20);
	// e2.Name = "Abhi";
	// e2.Company = "CodeChef";
	// e2.Age = 20;
	e2.introduceYourself();

	return 0;
}