#include <iostream>
using namespace std;
int main() {
	int n;
    char name[100];
    while (true) {
		cout << "���� ID �Է� >> ";
		cin >> n;
		cin.get();
		cout << "�̸� ���ڿ� �Է� >> ";
		//cin.getline(name, 100);
		cin.getline(name, 100, '\n');
		cout << "ID: " << n << ' ' << name << endl;
    }
    return 0;
}
