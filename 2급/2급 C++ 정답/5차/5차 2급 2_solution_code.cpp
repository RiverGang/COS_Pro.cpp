#include <string>
#include <vector>

using namespace std;

int solution(vector<int> time_table) {
    int answer = 0;

    int first_class = 0;
    int last_class = 0;

    for(int i = 0; i < time_table.size(); i++) {
    	if(time_table[i] == 1) {
    		first_class = i;
    		break;
    	}
    }

    for(int i = time_table.size()-1; i >= 0; i--) {
    	if(time_table[i] == 1) {
    		last_class = i;
    		break;
    	}
    }

    for(int i = first_class; i < last_class; i++)
    	if(time_table[i] == 0)
    		answer++;

    return answer;
}