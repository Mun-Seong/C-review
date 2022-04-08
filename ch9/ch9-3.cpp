#include <iostream>
using namespace std;

class AbstractGate
{
protected:
	bool x, y;
public:
	virtual ~AbstractGate() {};
	void set(bool x, bool y)
	{
		this->x = x;
		this->y = y;
	}
	virtual bool operation() = 0;
};

class ORGate : public AbstractGate
{
public:
	~ORGate() {};
	virtual bool operation() { return (x | y); }
};

class ANDGate : public AbstractGate
{
public:
	~ANDGate() {};
	virtual bool operation() { return (x & y); }
};

class XORGate : public AbstractGate
{
public:
	~XORGate() {};
	virtual bool operation() { return (x ^ y); }
};

int main() {
	// ANDGate a;
	// ORGate o;
	// XORGate x;

	// a.set(true, false);
	// o.set(true, false);
	// x.set(true, false);
	// AbstractGate *ap = &a;
	// cout.setf(ios::boolalpha); // �Ҹ� ���� "true��,"false" �� ����� ���� ����
	// cout << ap->operation() << endl; // AND ����� false
	// ap = &o;
	// cout << ap->operation() << endl; // OR ����� true
	// ap = &x;
	// cout << ap->operation() << endl; // XOR ����� true
	// ���� ��ü�� ������ �迭�̿� �ڵ� ����
	AbstractGate *abs[] = {new ANDGate, new ORGate, new XORGate};
	for (AbstractGate *ap : abs)
		ap->set(true, false);
	cout.setf(ios::boolalpha);
	for (AbstractGate *ap : abs)
		cout << ap->operation() << endl;
	for (AbstractGate *ap : abs)
		delete ap;
}
