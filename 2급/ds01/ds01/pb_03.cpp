#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func_a(int month, int day) {
    int month_list[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int total = 0;
    for (int i = 0; i < month - 1; i++) // 입력한 월 수의 앞달까지 반복되도록
        total += month_list[i]; // 1월부터 입력(month)한 월의 앞달까지의 일수가 더해짐
    total += day; // 입력한 일수(day) 더하기
    return total - 1;
}

int solution(int start_month, int start_day, int end_month, int end_day) {
    int start_total = func_a(start_month, start_day);
    int end_total = func_a(end_month, end_day);
    return end_total - start_total;
}

// The following is main function to output testcase.
int main() {
    int start_month = 1;
    int start_day = 2;
    int end_month = 2;
    int end_day = 2;
    int ret = solution(start_month, start_day, end_month, end_day);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}