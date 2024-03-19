#include <string>
#include <vector>

using namespace std;

int solution(int day, vector<int> numbers) {
    int count = 0;
    for(int i = 0; i < numbers.size(); ++i)
    	if(numbers[i]%2 == day%2)
    		count++;
    return count;
}