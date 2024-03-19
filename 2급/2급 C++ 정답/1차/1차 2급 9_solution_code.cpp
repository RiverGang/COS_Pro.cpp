#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string characters) {
	string result = "";
	result += characters[0];
	for (int i = 1; i < characters.length(); i++) {
		if (characters[i - 1] != characters[i]) {
			result += characters[i];
		}
	}
	return result;
}