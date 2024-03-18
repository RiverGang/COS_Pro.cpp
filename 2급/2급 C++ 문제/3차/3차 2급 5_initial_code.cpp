#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> member_age, string transportation) {
	int adult_expense = 0;
	int child_expense = 0;

	if(transportation == "Bus"){
		adult_expense = 40000;
		child_expense = 15000;
	}
	else if(transportation == "Ship"){
		adult_expense = 30000;
		child_expense = 13000;
	}
	else if(transportation == "Airplane"){
		adult_expense = 70000;
		child_expense = 45000;
	}

	if(member_age.size() >= 10){
		adult_expense = @@@;
		child_expense = @@@;
	}
	int total_expenses = 0;
	for(int i = 0; i < member_age.size(); i++) {
		if(@@@)
			total_expenses += adult_expense;
		else
			total_expenses += child_expense;
	}
	return total_expenses;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<int> member_age1 = {13, 33, 45, 11, 20};
    string transportation1 = "Bus";
    int ret1 = solution(member_age1, transportation1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret1 << " 입니다." << endl;

    vector<int> member_age2 = {25, 11, 27, 56, 7, 19, 52, 31, 77, 8};
    string transportation2 = "Ship";
    int ret2 = solution(member_age2, transportation2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret2 << " 입니다." << endl;
}