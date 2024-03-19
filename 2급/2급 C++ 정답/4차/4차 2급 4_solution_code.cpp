#include <string>
#include <vector>

using namespace std;

int solution(vector<int> classes, int m) {
	int count = 0;
	for(int i = 0; i < classes.size(); ++i) {
		while(classes[i] > 0) {
			classes[i] -= m;
			count++;
		}
	}
	return count;
}