#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int price, string grade) {
	int answer = 0;
	if (grade == "S")
		answer = price * 0.95;
	if (grade == "G")
		answer = price * 0.9;
	if (grade == "V")
		answer = price * 0.85;
	return answer;
}