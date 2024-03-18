#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string sentence) {
    string alphas = "";
    for (char ch : sentence) {
        if (ch != '.' || ch != ' ') alphas += ch;
    }
    int len = alphas.size();
    for (int i = 0; i < len / 2; i++) {
        if (alphas[i] != alphas[len - 1 - i]) return false;
    }
    return true;
}

// The following is main function to output testcase. The main function is correct and you shall correct solution function.
int main() {
    string sentence1 = "never odd or even.";
    bool ret1 = solution(sentence1);
    
    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << (ret1 == true ? "true" : "false") << " ." << endl;
    

    string sentence2 = "palindrome";
    bool ret2 = solution(sentence2);
    
    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << (ret2 == true ? "true" : "false") << " ." << endl;
}