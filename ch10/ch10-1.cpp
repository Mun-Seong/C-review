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
	if (equalArrays(x, y, 5)) cout << "같다";
	else cout << "다르다";
	cout << endl;

	char c[] = {'h', 'e', 'l', 'l', 'o'};
	if(search('e', c, 5))  // 'e'가 배열 c에 포함되어 있는가?
		cout << "e가 배열 c에 포함되어 있다";
	else cout << "e가 배열 c에 포함되어 있지 않다";
	cout << endl;
}