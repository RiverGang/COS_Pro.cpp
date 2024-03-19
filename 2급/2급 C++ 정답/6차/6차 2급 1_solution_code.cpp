#include <string>
#include <vector>

using namespace std;

int solution(vector<int> temperature, int A, int B) {
    int answer = 0;
    for(int i = A + 1; i < B; i++){
        if(temperature[i] > temperature[A] && temperature[i] > temperature[B])
            answer += 1;
    }
    return answer;
}