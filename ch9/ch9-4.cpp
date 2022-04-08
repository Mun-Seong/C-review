#include <iostream>
using namespace std;

class BankAcct
{
	double	money;
	double	rate;
public:
	BankAcct(double m) { money = m; }
	virtual ~BankAcct() {}
	void	deposit(double m) { money += m; }
	void	withdraw(double m) { money -= m; }
	//virtual double getInterset() { return (money * rate); }
	double	getInterset() { return (money * rate); }
	void	setRate(double r) { rate = r; }
	//void 	print() { cout << "���ݾ� : " << (int)money << endl; }
	virtual void print() { cout << "���ݾ� : " << (int)money << endl; }
};

class SavingAcct : public BankAcct
{
public:
	SavingAcct(int m) : BankAcct(m) { setRate(0.09); }
	~SavingAcct() {}
	//virtual double getInterest() { return (BankAcct::getInterset()); }
	virtual void	print()
	{
		cout << "===============" << endl;
		cout << "���� ���� ����" << endl;
		cout << "===============" << endl;
		BankAcct::print();
	}
};

class CheckingAcct : public BankAcct
{
public:
	CheckingAcct(int m) : BankAcct(m) { setRate(0.05); }
	~CheckingAcct() {}
	//virtual double getInterest() { return (BankAcct::getInterset()); }
	void	print()
	{
		cout << "===============" << endl;
		cout << "���� ���� ����" << endl;
		cout << "===============" << endl;
		BankAcct::print();
	}
};

int main()
{
	// ��ü ���� �Ҵ� �� upcasting
	//SavingAcct sa(5000000);
	BankAcct *sa = new SavingAcct(5000000);	
	//CheckingAcct ca(10000000);
	BankAcct *ca = new CheckingAcct(10000000);
	sa->deposit(100000);
	ca->deposit(150000);
	sa->withdraw(500000);
	ca->withdraw(500000);
	sa->print();
	cout<<"���ھ� : "<<sa->getInterset()<<endl;
	ca->print();
	cout<<"���ھ� : "<<ca->getInterset()<<endl;

	delete sa;
	delete ca;

	return 0;
}
