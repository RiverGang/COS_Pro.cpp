#include <string>
#include <vector>

using namespace std;

int solution(int money, int price, int n) {
	int answer = 0;
	
	int empty_bottle = answer = money / price;
	while(n <= empty_bottle) {
		empty_bottle = empty_bottle - n;
		answer++;
		empty_bottle++;
	}

	return answer;
}