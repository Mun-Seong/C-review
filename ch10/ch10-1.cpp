#include <iostream>
using namespace std;
//10-1
template <typename T>
bool	equalArrays(T *p, T *q, int n)
{
	for (int i=0;i<n;i++)
		if (p[i] != q[i]) return (false);
	return (true);
}
//10-2
template <typename T>
bool	search(T target, T *arr, int size)
{
	for (int i=0;i<size;i++)
		if (arr[i] == target) return (true);
	return (false);
}

int main()
{
	int  x[] = {1, 10, 100, 5, 4};
	int  y[] = {1, 10, 100, 5, 4};
	if (equalArrays(x, y, 5)) cout << "����";
	else cout << "�ٸ���";
	cout << endl;

	char c[] = {'h', 'e', 'l', 'l', 'o'};
	if(search('e', c, 5))  // 'e'�� �迭 c�� ���ԵǾ� �ִ°�?
		cout << "e�� �迭 c�� ���ԵǾ� �ִ�";
	else cout << "e�� �迭 c�� ���ԵǾ� ���� �ʴ�";
	cout << endl;
}