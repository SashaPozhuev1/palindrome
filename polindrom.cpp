#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	string s,s1;
	getline(cin, s);
	int a = s.size(), b = 0;

	for (int i = 0; i < a; i++) {
		if (((s[i] >= 65) && (s[i] <= 90)) || ((s[i] >= 97) && (s[i] <= 122))) s1 += s[i];
	}
	
	a = s1.size();

	for (int i = 0; i < (a / 2); i++) {
			 if (((s1[i] >= 65) && (s1[i] <= 90 )) && (s1[i] == s1[a - 1 - i]     )) b += 1;
		else if (((s1[i] >= 65) && (s1[i] <= 90 )) && (s1[i] == s1[a - 1 - i] - 32)) b += 1;
		else if (((s1[i] >= 97) && (s1[i] <= 122)) && (s1[i] == s1[a - 1 - i]     )) b += 1;
		else if (((s1[i] >= 97) && (s1[i] <= 122)) && (s1[i] == s1[a - 1 - i] + 32)) b += 1;
	}
				 if (b == (a / 2)) cout << "1" << endl;
				 else cout << "0" << endl;
	system("pause");
	return 0;
}
