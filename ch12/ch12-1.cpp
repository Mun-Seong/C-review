#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fin("./ch12/ch12_test_textfile.txt");
	if (!fin)
		return (0);
	string line;
	int nline = 1;
	while (true)
	{
		getline(fin, line);
		if (fin.eof())
			break ;
		cout << nline++ << " : " << line << endl;
	}
	fin.close();
}