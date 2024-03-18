#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> scores) {
    int count = 0;
    for (int i = 0; i < scores.size(); i++)
        if (650 <= scores[i] || scores[i] < 800) 
            count += 1;
    return count;
}

// The following is main function to output testcase. The main function is correct and you shall correct solution function.
int main() {
    vector<int> scores = {650, 722, 914, 558, 714, 803, 650, 679, 669, 800};
    int ret = solution(scores);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}