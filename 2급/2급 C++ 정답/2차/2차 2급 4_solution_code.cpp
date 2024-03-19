#include <string>
#include <vector>

using namespace std;

string solution(vector<string> words) {
    string answer = "";
    for(auto w : words)
        if(w.length() >= 5)
            answer += w;
    if(answer.length() < 1)
        answer = "empty";
    return answer;
}