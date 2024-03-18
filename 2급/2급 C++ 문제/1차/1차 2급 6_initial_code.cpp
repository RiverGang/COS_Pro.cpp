#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int number) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        int current = i;
        int temp = count;
        while (current != 0) {
            if (@@@){
                count++;
                cout << "pair";
            }
            current /= 10;
        }
        if(temp == count)
            cout << i;
        cout << " ";
    }
    cout << endl;
    return count;
}

// The following is main function to output testcase.
int main() {
    int number = 40;
    int ret = solution(number);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}