#include <string>
#include <vector>

using namespace std;

int func_a(vector<int> arr){
    int count = 0;
    int length = arr.size();
    for(int i = 0; i < length; ++i)
        if (arr[i] % 5 == 0)
            count += 1;
    return count;
}

string func_b(int three, int five){
    if (three > five)
        return "three";
    else if (three < five)
        return "five";
    else
        return "same";
}

int func_c(vector<int> arr){
    int count = 0;
    int length = arr.size();
    for(int i = 0; i < length; ++i)
        if (arr[i] % 3 == 0)
            count += 1;
    return count;
}

string solution(vector<int> arr) {
    int count_three = func_c(arr);
    int count_five = func_a(arr);
    string answer = func_b(count_three, count_five);
    return answer;
}