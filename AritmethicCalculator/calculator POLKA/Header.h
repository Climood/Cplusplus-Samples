/*#include "iostream"
#include<vector>
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
	else if (S == '('||S==')') {
	return 1;
	}
	else return 0;
}
//int PriorityZnak(char *S) {
	//return
//}
void SortStation(char *in,char *out){
	vector<char> stack;
	//int index=0;  заменил на stack.size()-1
	char buffer;
	while (*in) {
		if (!IsZnakWP(*in)) { *out = *in; in++; out++; }
		else {
			if (stack.size() == 0) { stack.push_back(*in); in++; continue; }
			if(*in=='(') { stack.push_back(*in); in++; continue; }
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
			while (IsZnakWP(*in) <= IsZnakWP(stack[stack.size()-1])) { buffer = stack[stack.size() - 1];
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
int Calculation() {

}
*/