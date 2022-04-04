#include <iostream>
using namespace std;
int main() {
	int n;
    char name[100];
    while (true) {
		cout << "정수 ID 입력 >> ";
		cin >> n;
		cin.get();
		cout << "이름 문자열 입력 >> ";
		//cin.getline(name, 100);
		cin.getline(name, 100, '\n');
		cout << "ID: " << n << ' ' << name << endl;
    }
    return 0;
}
