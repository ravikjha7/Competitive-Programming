#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee {
	public :
	virtual void AskForPromotion() = 0;
};

// Super Class, Base Class, Parent Class
class Employee : AbstractEmployee {
protected :
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
	virtual void Work() {
		cout << "Checking Mails" << endl;
	}
};

// Derived Class, Child Class, Sub Class
// Writing public makes The Methods Of Employee Class Accessible
// To Developer Class
class Developer : public Employee{
public :
	string FavProgrammingLanguage;
	Developer(string name,string company,int age,string favProgrammingLanguage) : Employee(name,company,age)
	{
		FavProgrammingLanguage = favProgrammingLanguage;
	}

	void FixBug() {
		cout << getName() << " fixed Bug using " << FavProgrammingLanguage << endl;
	}
	void Work() {
		cout << "Writing Code" << endl;
	}
};

class Teacher : public Employee {
public :
	string Subject;
	void PrepareLesson() {
		cout << Name << " is preparing " << Subject << " lesson" << endl;
	}
	Teacher(string name,string company,int age,string subject) : Employee(name,company,age) {
		Subject = subject;
	}
	// Same Function Name in Another Class
	void Work() {
		cout << "Teaching" << endl;
	}
};

int main()
{
	Developer d1("Ravi","PokeIndia",19,"Java");
	Developer d2("Abhi","CodeChef",20,"Kotlin");
	Teacher t1 = Teacher("Omkar","Walchand",21,"History");

	Employee *e = &d1;
	e->Work();
	Employee *e1 = &t1;
	e1->Work();

	return 0;
}