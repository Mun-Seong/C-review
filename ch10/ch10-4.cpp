#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> iv;
	int input = -1;
	while (1)
	{
		float sum = 0;
		cout << "정수를 입력하세요<0을 입력하면 종료>>>>>";
		cin >> input;
		if (input == 0) break;
		iv.push_back(input);
		for (int i : iv)
		{
			sum += i;
			cout << i << ' ';
		}
		cout << "\n평균 : " << (sum / iv.size()) << endl;
	}
	return (0);
}