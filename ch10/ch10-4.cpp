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
		cout << "������ �Է��ϼ���<0�� �Է��ϸ� ����>>>>>";
		cin >> input;
		if (input == 0) break;
		iv.push_back(input);
		for (int i : iv)
		{
			sum += i;
			cout << i << ' ';
		}
		cout << "\n��� : " << (sum / iv.size()) << endl;
	}
	return (0);
}