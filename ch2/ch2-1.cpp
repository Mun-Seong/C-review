// #include <stdio.h>
// int sum(); // �Լ� ���� ����

// int main() {
//   int n=0;
//   printf("�� ���� �Է��ϼ���>");
//   scanf("%d", &n);
//   printf("1���� %d������ ���� %d �Դϴ�.\n", n, sum(1, n));
//   return 0;
// }

// int sum(int a, int b) {
//   int k, res=0;
//   for(k=a; k<=b; k++) {
//     res += k;
//     }
//   return res;
// }
//���� �ڵ带 c->c++


#include <iostream>

using namespace std;

int sum(int a, int b);

int main()
{
	int n(0);
	cout << "�� ���� �Է��ϼ��� > ";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�." << endl;
}

int sum(int a, int b)
{
	int k, res(0);
	for(k=0;k<=b;k++)
		res += k;
	return (res);
}