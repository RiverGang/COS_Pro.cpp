#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int left = 0;
    int right = arr.size() - 1;
    while(@@@){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left += 1;
        right -= 1;
    }
    return arr;
}


// The following is main function to output testcase.
int main() {
    vector<int> arr = {1, 4, 2, 3};
    vector<int> ret = solution(arr);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is {";
    for(int i = 0; i < ret.size(); i++){
        if (i != 0) cout << ", ";
        cout << ret[i];
    }
    cout << "} ." << endl;
}