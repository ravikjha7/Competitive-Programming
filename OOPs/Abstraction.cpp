#include <bits/stdc++.h>
using namespace std;

// A Class in cpp is called Abstract when it contains at least one pure virtua; function
// Instance Of Such Class Cannot Be Created
class AbstractEmployee {
	public :
	virtual void AskForPromotion() = 0;
};

// The Class which Inherits an Abstract Class Must Override the
// Definition Of Pure Virtual Function
// Otherwise The Derived Class Also Becomes an Abstract Class
class Employee : AbstractEmployee {
private :
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
		cout << "Age : " << Age << endl;
	}
	Employee(string name,string company,int age) {
		Name = name;
		Company = company;
		Age = age;
	}
	void AskForPromotion() {
		if(Age >= 20) cout << "Congratulations !!!" << endl;
		else cout << "Better Luck Next Time !!!" << endl;
	}
};

int main()
{
	Employee e1("Ravi","PokeIndia",19);
	// e1.Name = "Ravi";
	// e1.Company = "PokeIndia";
	// e1.Age = 19;
	e1.introduceYourself();
	e1.AskForPromotion();

	Employee e2 = Employee("Abhi","CodeChef",20);
	// e2.Name = "Abhi";
	// e2.Company = "CodeChef";
	// e2.Age = 20;
	e2.introduceYourself();
	e2.AskForPromotion();

	return 0;
}