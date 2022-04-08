#include <iostream>
using namespace std;

class Animal
{
public:
	virtual ~Animal() { cout << "Aminal del" << endl; }
	virtual void speak() { cout << "Animal speak()" << endl; }
};

class Dog : public Animal
{
public:
	~Dog() { cout << "Dog del" << endl; }
	virtual void speak() { cout << "dog dog" << endl; }
};

class Cat : public Animal
{
public:
	~Cat() { cout << "Cat del" << endl; }
	virtual void speak() { cout << "cat cat" << endl; }
};
int main()
{
	Animal *a1 = new Dog();
	a1->speak();
	delete a1;
	a1 = new Cat();
	a1->speak();
	delete a1;
	
	return (0);
}