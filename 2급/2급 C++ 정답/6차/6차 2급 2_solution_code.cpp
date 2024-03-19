#include <string>
#include <vector>

using namespace std;

int solution(vector<int> papers, int K) {
    for(int i = 0; i < papers.size(); i++){
        K -= papers[i];
        if(K < 0)
            return i;
    }
    return papers.size();
}