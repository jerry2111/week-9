

#include <iostream>
#include <string>

using namespace std;



int main()
{
	string str;
	cin >> str;
	for (int a = str.length() - 1; a >= 0; a--)
	{
		for (int b = 0; b <= a; b++)
		{
			cout << str[b];
		}
		cout << endl;
	}
	
}

