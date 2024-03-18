// You may use include as below.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> shirt_size) {
    // Write code here.
    vector<int> answer;
    return answer;
}

// The following is main function to output testcase.
int main() {
    vector<string> shirt_size = {"XS", "S", "L", "L", "XL", "S"};
    vector<int> ret = solution(shirt_size);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is {";
    for(int i = 0; i < ret.size(); i++){
        if (i != 0) cout << ", ";
        cout << ret[i];
    }
    cout << "} ." << endl;
    
    return 0;
}