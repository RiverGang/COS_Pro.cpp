#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int left = 0;
    int right = arr.size() - 1;
    while(left < right){
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left += 1;
        right -= 1;
    }
    return arr;
}