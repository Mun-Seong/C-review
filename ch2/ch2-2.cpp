#include <iostream>
//#include <cstring>
#include <string>
using namespace std;

int main() {
	//char password[11];
	string password;
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while(true) {
		cout << "��ȣ>>";
		cin >> password;
		//if(strcmp(password, "C++") == 0)
		if (password == "C++")
		{
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else 
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
	}
}
//���� �ڵ��� c-stirng -> string class


