#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	string stroka,stroka1;
	getline(cin, stroka);
	int dlina = stroka.size(), b = 0;

	for (int i = 0; i < dlina; i++) {
	 if (((stroka[i] >= 65) && (stroka[i] <= 90)) || ((stroka[i] >= 97) && (stroka[i] <= 122)) || ((stroka[i] >= 48) && (stroka[i] <= 57))) 
	 stroka1 += stroka[i];
	}
	
	dlina = stroka1.size();

	for (int i = 0; i < (dlina / 2); i++) {
	      if (stroka1[i] == stroka1[dlina - 1 - i]     ) b += 1;
	 else if (stroka1[i] == stroka1[dlina - 1 - i] - 32) b += 1;
	 else if (stroka1[i] == stroka1[dlina - 1 - i] + 32) b += 1;
	}
	
	if (b == (dlina / 2)) cout << "1" << endl;
	else cout << "0" << endl;
	
	system("pause");
	return 0;
}
