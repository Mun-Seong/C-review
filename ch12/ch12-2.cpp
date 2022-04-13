#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("./ch12/ch12_test_textfile.txt");
	if (!fin)
		return (0);
	ofstream fout("./ch12/ch12_test_textcap.txt");
	if (!fout)
		return (0);
	char buf[1024];
	while (true)
	{
		if (fin.eof())
			break ;
		fin.read(buf, 1024);
		int c = fin.gcount();
		for (int i=0;i<c;i++)
			buf[i] = toupper(buf[i]);
		fout.write(buf, c);
	}
	fin.close();
	fout.close();
}