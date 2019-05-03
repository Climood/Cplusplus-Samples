// samoproverka4-5.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	/* //ћќ… √ќ¬Ќќ—ѕќ—ќЅ 
	char s1[80], s2[80];
	cout << "¬ведите две строки, они будут сравнены без учета регистра : ";
	cin >> s1;
	cout << endl;
	cin >> s2;
	char q1[80], q2[80];
	strcpy_s(q1,s1);
	strcpy_s(q2,s2);

	for (int i = 0; i < strlen(s1); i++) {
		if (isupper(s1[i])) {
			s1[i]=tolower(s1[i]);
		}
	}
	for (int i = 0; i < strlen(s2); i++) {
		if (isupper(s2[i])) {
			s2[i]=tolower(s2[i]);
		}
	}
	if (!strcmp(s1, s2)) {
		cout << q1 << " равна " << q2;
	}
	*/
	//”чебник
	char s1[80], s2[80];
	cout << "¬ведите две строки, они будут сравнены без учета регистра : ";
	cin >> s1;
	cout << endl;
	cin >> s2;
	char *p1, *p2;
	p1 = s1;
	p2 = s2;
	while (*p1 && *p2) {
		if (toupper(*p1) != toupper(*p2)) {
			break;
		}
		p1++;
		p2++;
	}
	if (!*p1 && !*p2) {
		cout << s1 << " равна " << s2;
	}
	system("PAUSE");
    return 0;
}

