#include <iostream>
using namespace std;

class PtData
{
  int num;
  int *pt;       // 정수 포인터
public:
  PtData(const PtData &r)
  {
	  this->num = r.num;
	  this->pt = new int;
	  *pt = *r.pt; 
  }
  PtData(int a, int b)
  {
	  this->num = a;
	  this->pt = new int;
	  *pt = b;
  }
  ~PtData() { delete pt; }
  int getPtData() { return (*pt); }
};

int main()
{
	PtData a(10, 20);
	PtData b(a);
	cout << b.getPtData() << endl;
}
