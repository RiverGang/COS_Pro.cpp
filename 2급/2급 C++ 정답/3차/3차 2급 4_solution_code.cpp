#include <string>
#include <vector>

using namespace std;

int solution(vector<string> words, string word) {
    int count = 0;
    
    for(int i = 0; i < words.size(); i++) {
        for(int j = 0; j < words[i].size(); j++) {
            if(words[i].at(j) != word.at(j)) {
                count++;
            }
        }
    }
    return count;
}