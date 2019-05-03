// calculator POLKA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include<cmath>
#include<vector>
#include<cstdlib>
#include<string>
using namespace std;
int IsZnakWP(char S) {
	if (S == '^') {
		return 4;
	}
	else if (S == '*' || S == '/') {
		return 3;
	}
	else if (S == '-' || S == '+') {
		return 2;
	}
	else if (S == '(' || S == ')') {
		return 1;
	}
	else return 0;
}
//int PriorityZnak(char *S) {
//return
//}
int get_lenght(int S) {
	int i = 0;
	while (S!=0) {
		S/=10; i++;
	}
	return i;
}
int Keycreate(char *Smas) {
	char temp[180];
	int p = 0;
	while (!IsZnakWP(*Smas)) {
		temp[p] = *Smas;
		p++;
		Smas++;
	}
	p = atoi(temp);
	return p;
}
/*void SortStation(char *in, char *out) {
	vector<string> stack;
	//int index=0;  заменил на stack.size()-1
	char buffer;
	while (*in) {
		if (!IsZnakWP(*in)) { *out = *in; in++; out++; }
		else {
			if (stack.size() == 0) { stack.push_back(*in); in++; continue; }
			if (*in == '(') { stack.push_back(*in); in++; continue; }
			if (*in == ')') {
				do {
					buffer = stack[stack.size() - 1];
					stack.pop_back();
					*out = buffer;
					out++;
				} while (stack[stack.size() - 1] != '(');
				stack.pop_back();//удаляем ( из стека
				in++;
				continue;
			}
			while (IsZnakWP(*in) <= IsZnakWP(stack[stack.size() - 1])) {
				buffer = stack[stack.size() - 1];
				stack.pop_back();
				*out = buffer;
				out++;
			}
			stack.push_back(*in);
			in++;
		}
	}
	while (stack.size() != 0) {
		buffer = stack[stack.size() - 1];
		stack.pop_back();
		*out = buffer;
		out++;
	}
}
*/
int Calculator(char*in) {
	vector<string> out;
	vector<char> stack;
	string buffer="\0";
	while (*in) {
		if (!IsZnakWP(*in)) {
			int i = 0u;
			while (!IsZnakWP(*in)) {
				buffer[i] = *in;
				in++;
				i++;
			}
			for (register int x = 0; x < i - 1; x++) { in++;}//не сохраняло перемещение указателя на входящий символ в верхнем массиве, пока решил так
			out.push_back(buffer);
			buffer = "\0";
			i = 0u;
			continue;
		}
		else {
			 if(stack.size() == 0) { stack.push_back(*in); in++; continue; }
			 if (*in == '(') { stack.push_back(*in); in++; continue; }
			 if (*in == ')') {
				 do {
					 buffer.push_back(stack[stack.size() - 1]);
					 stack.pop_back();
					 out.push_back(buffer);
					 buffer = "\0";
				 } while (stack[stack.size() - 1] != '(');
				 stack.pop_back();//удаляем ( из стека
				 in++;
				 continue;
			 }
			 while (IsZnakWP(*in) <= IsZnakWP(stack[stack.size() - 1])) {
				 buffer = stack[stack.size() - 1];
				 stack.pop_back();
				 out.push_back(buffer);
				 buffer = "\0";
			 }
			 stack.push_back(*in);
			 in++;
		}
	}
	while (stack.size() != 0) {
		buffer = stack[stack.size() - 1];
		stack.pop_back();
		out.push_back(buffer);
		buffer = "\0";
	}
	//ПРОВЕРКА ОБРАТНОЙ ПОЛЬКИ
	for (auto i = 0u; i < out.size(); i++) {
		cout << out[i];
	}
	cout << "\n\n\n";
}
int Calculation(char *in) {
//далее встал вопрос, как представить строку char в int виде, чтобы над числами были операции, 
	//нашел функцию Atoi, но решил кустарно попробовать без нее. (вычитал 48)
	vector<int> result;
	int a=0, b=0,c=0;
	while (*in) {
		if (!IsZnakWP(*in)) { result.push_back((int)*in-48); in++; continue; }
		if (*in == '-') {
			a = result[result.size()-2];
			b = result[result.size()-1];
			result.pop_back();
			result.pop_back();
			c = a - b;
			result.push_back(c);
			in++;
			continue;
		}
		if (*in == '+') {
			a = result[result.size() - 2];
			b = result[result.size() - 1];
			result.pop_back();
			result.pop_back();
			c = a + b;
			result.push_back(c);
			in++;
			continue;
		}
		if (*in == '*') {
			a = result[result.size() - 2];
			b = result[result.size() - 1];
			result.pop_back();
			result.pop_back();
			c = a * b;
			result.push_back(c);
			in++;
			continue;
		}
		if (*in == '/') {
			a = result[result.size() - 2];
			b = result[result.size() - 1];
			result.pop_back();
			result.pop_back();
			c = a / b;
			result.push_back(c);
			in++;
			continue;
		}
		if (*in == '^') {
			a = result[result.size() - 2];
			b = result[result.size() - 1];
			result.pop_back();
			result.pop_back();
			c = pow(a,b);
			result.push_back(c);
			in++;
			continue;
		}
	}
	return result[result.size() - 1];
}
int main()
{
	setlocale(LC_ALL, "russian");
	//char in[] = "3+4*2/(1-5)^2";
	char in[] = "6-4-1";
	//char in[180];
	char out[1025]="\0";
	SortStation(in, out);
	//Calculation(ptr_out);
	system("PAUSE");
}

