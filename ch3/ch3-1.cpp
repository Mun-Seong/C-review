#include <iostream>
#include <string>
using namespace std;

class Person
{
	string	name;
	int		age;
public:
Person(){name= "default"; age = 0;}
Person(string n) {name = n; age = 0;}
Person(string n, int a) {name = n; age = a;}
void	setName(string n) {name = n;}
void	setAge(int a) {age = a;}
void	showPerson() {cout << getName() << ' ' << getAge() << endl;}
string	getName() {return (name);}
int		getAge() {return (age);}
};

int main()
{
	Person p1;
	Person p2("elise");
	Person p3("Even", 50);

	p1.showPerson();
	p2.showPerson();
	p3.showPerson();

	p1.setName("oliver");
	p1.setAge(30);

	p1.showPerson();
	return (0);
}