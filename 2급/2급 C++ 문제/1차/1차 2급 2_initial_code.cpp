// You may use include as below.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int price, string grade) {
    // Write code here.
    int answer = 0;
    
    if (grade == "S")
        answer = price * 0.95;
    else if (grade == "G")
        answer == price * 0.9;
    else if (grade == "V")
        answer == price * 0.85;
    return answer;
}

// The following is main function to output testcase.
int main() {
    int price1 = 2500;
    string grade1 = "V";
    int ret1 = solution(price1, grade1);
    
    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret1 << " ." << endl;
    
    int price2 = 96900;
    string grade2 = "S";
    int ret2 = solution(price2, grade2);
    
    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret2 << " ." << endl;
}