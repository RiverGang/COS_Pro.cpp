#include <string>
#include <vector>

using namespace std;

int solution(vector<int> floors) {
    int dist = 0;
    int length = floors.size();
    for(int i = 1; i < length; ++i){
        if(floors[i] > floors[i-1])
            dist += floors[i] - floors[i-1];
        else
            dist += floors[i-1] - floors[i];
    }
    return dist;
}