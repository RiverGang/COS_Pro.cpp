#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string characters) {
    string result = "";
    result += characters[0];
    for (int i = 0; i < characters.length(); i++) {
        if (characters[i - 1] != characters[i]) {
            result += characters[i];
        }
    }
    return result;
}


// The following is main function to output testcase. The main function is correct and you shall correct solution function.
int main() {
    string characters = "senteeeencccccceeee";
    string ret = solution(characters);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}