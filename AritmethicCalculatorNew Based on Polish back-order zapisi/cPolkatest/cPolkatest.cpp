// cPolkatest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include<string>
#include<cstring>
#include<cmath>
#include<vector>
#include<cstdlib>
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
/*int get_lenght(int S) {
	int i = 0;
	while (S != 0) {
		S /= 10; i++;
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
}*/
////////////////////////////////////СВЕРХУ ФУНКЦИИ С ПРОШЛОГО МОЕГО АЛГОРИТМА, ТУТ УЖЕ НЕ НУЖНЫ, НО ОНИ МНЕ НРАВЯТСЯ И Я ИХ ОСТАВЛЮ
void Calculator(char *in) {
	vector<string> out;
	vector<char> stack;
	char buffer[180]="\0";
	vector<char> key_buf;
	if (*in == '-') { out.push_back("0"); }//Для поддержки выражений вида -3+2
	while (*in) {
		if (!IsZnakWP(*in)) {
			key_buf.push_back(*in);
			in++;
			continue;
		}
		else 
		{
			if (key_buf.size() != 0) {
				for (int i = 0; i < key_buf.size(); i++) {
					buffer[i] = key_buf[i];
					cout << "Скинул цифру из буфера в аут\n"<<"Буффер = "<<buffer<<endl;
				}
				for (int i = key_buf.size(); i >0 ; i--) {
					key_buf.pop_back();
				}
				out.push_back(buffer);
			    //buffer[0] = '\0'; надо обнулить весь массив, пока что решил юзать memset 
				memset(buffer, '\0', 180);
				cout << "Обнуленный буффер: " << buffer << endl;
			}
			if (stack.size() == 0) { stack.push_back(*in); in++; continue; }
			if (*in == '(') { //ТУТ НАДО ПРИДУМАТЬ ЧТО ТО ДЛЯ ВЫРАЖЕНИЙ ТИПА 2+3-(-2+1)
				in++;
				if(*in=='-'){ out.push_back("0"); }//Для поддержки выражений вида 2+3-(-2+1)
				in--;
				stack.push_back(*in); 
				in++; 
				continue;
			}
			if (*in == ')') {
				do {
					buffer[0]=stack[stack.size() - 1];
					stack.pop_back();
					out.push_back(buffer);
					//buffer[0] = '\0';
					memset(buffer, '\0', 180);
				} while (stack[stack.size() - 1] != '(');
				stack.pop_back();//удаляем ( из стека
				in++;
				continue;
			}
			while (IsZnakWP(*in) <= IsZnakWP(stack[stack.size() - 1])) {
				buffer[0] = stack[stack.size() - 1];
				stack.pop_back();
				out.push_back(buffer);
				//buffer[0] = '\0';
				memset(buffer, '\0', 180);
			}
			stack.push_back(*in);
			in++;
		}
	}
	/////////////////////////////////// БЕЗ ЭТОЙ ЧАСТИ У МЕНЯ ПРОБЛЕМА С ПОСЛЕДНИМ СИМВОЛОМ (если он цифра)
	//ОН ОСТАЕТСЯ В key_back 
	//и не выходит в out(т.к. после его помещения в буффер key_buf идет continue) пока решил так
	if (key_buf.size() != 0) {
		buffer[0] = key_buf[0];
		out.push_back(buffer);
		//buffer[0] = '\0';
		memset(buffer, '\0', 180);
		key_buf.pop_back();
	}
	///////////////////////////////////
	while (stack.size() != 0) {
		buffer[0] = stack[stack.size() - 1];
		stack.pop_back();
		out.push_back(buffer);
		//buffer[0] = '\0';
		memset(buffer, '\0', 180);
	}
	//ПРОВЕРКА ОБРАТНОЙ ПОЛЬСКОЙ ЗАПИСИ
	for (auto i = 0u; i < out.size(); i++) {
		cout <<"out["<<i<<"]="<< out[i]<<endl;
	}
	cout << "\nВвиде строки: ";
	for (auto i = 0u; i < out.size(); i++) {
		cout <<out[i];
	}
	cout << endl;
	//////////////////////////////////////ПОШЛИ САМИ ВЫЧИСЛЕНИЯ, ну-с С БОГОМ(ЕГО НЕТ)
	cout << "ПОШЛИ САМИ ВЫЧИСЛЕНИЯ, ну-с С БГ-оМ(ЕГО НЕТ)\n\n\n";
	///////////////////НАДО  ПРЕОБРАЗОВАТЬ String В ДАБЛ
	vector<double> result;
	double a = 0, b = 0, c = 0;
	string temp;
	for (register int i = 0; i < out.size(); i++) {
		if (out[i] == "-") {
			a = result[result.size() - 2];
			b = result[result.size()-1];
			c = a - b;
			result.pop_back();
			result.pop_back();
			result.push_back(c);
			continue;
		}
		if (out[i] == "+") {
			a = result[result.size() - 2];
			b = result[result.size()-1];
			c = a + b;
			result.pop_back();
			result.pop_back();
			result.push_back(c);
			continue;
		}
		if (out[i] == "/") {
			a = result[result.size() - 2];
			b = result[result.size()-1];
			c = a / b;
			result.pop_back();
			result.pop_back();
			result.push_back(c);
			continue;
		}
		if (out[i] == "*") {
			a = result[result.size() - 2];
			b = result[result.size()-1];
			c = a * b;
			result.pop_back();
			result.pop_back();
			result.push_back(c);
			continue;
		}
		if (out[i] == "^") {
			a = result[result.size() - 2];
			b = result[result.size()-1];
			c = pow(a, b);
			result.pop_back();
			result.pop_back();
			result.push_back(c);
			continue;
		}
	temp = out[i];
	c = atof(temp.c_str());
	result.push_back(c);
	}
	cout << "РЕЗУЛЬТАТ ВЫЧИСЛЕНИЙ(НУ Я ЗА СЕБЯ НЕ ОТВЕЧАЮ) : " << result[0] << endl;
}
int main()
{
	setlocale(LC_ALL, "russian");
	cout << "WELCOME TO MUDUCK CALCULATOR( IF YOU THINK THAT CALCULATOR WRITTEN BY MUDUCK WOULD BE FULL OF SURPRISEC YOU NE OSHIBAETES\n\n\n\n";
	cout << "Правила ввода!\nНе писать 3+(-2), пиши 3-2 сразу\n\n\n";
	cout << "Введи строку, я стараюсь учитывать все варианты и просчитывать все опасности, но я плох в математике.\n";
	char in[333];
	cin >> in;
	cout << "Ты ввел : " << in;
	//char in[] = "3+2-(-2+3)";
	Calculator(in);
	system("pause");
}