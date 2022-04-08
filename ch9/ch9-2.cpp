#include <iostream>
#include <string>
using namespace std;

class Converter
{
protected:
	double ratio;
	virtual double convert(double src)=0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString()=0; // �ҽ� ���� ��Ī
	virtual string getDestString()=0; // dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter
{
	string source;
	string dest;
public:
	WonToDollar(double ratio) : Converter(ratio) { source = "��"; dest = "�޷�"; }
	virtual double convert(double src) { return (src / ratio); }
	virtual string getSourceString() { return (source);}
	virtual string getDestString() { return (dest); }
};

class KmToMile : public Converter
{
	string source;
	string dest;
public:
	KmToMile(double ratio) : Converter(ratio) { source = "Km"; dest = "Mile"; }
	virtual double convert(double src) { return (src / ratio); }
	virtual string getSourceString() { return (source);}
	virtual string getDestString() { return (dest); }
};

int main()
{
	KmToMile km(1.609344);   // 1 �޷��� 1010��
	km.run();


}
