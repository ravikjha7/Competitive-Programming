#include <bits/stdc++.h>
using namespace std;

class Employee {
private :
	// Making The Variables Private So That It Should Not Be Accessible Directly
	string Name;
	string Company;
	int Age;

public : 
	
	void setName(string name) { Name = name; }
	void setCompany(string company) { Company = company; }
	void setAge(int age) { Age = age; }

	string getName() { return Name; }
	string getCompany() { return Company; }
	int getAge() { return Age; }

	void introduceYourself() {
		cout << "Name : " << Name << endl;
		cout << "Company : " << Company << endl;
		cout << "Age : " << Age << endl;}
	Employee(string name,string company,int age) {
		Name = name;
		Company = company;
		Age = age;}
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