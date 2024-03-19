#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> arr) {
    int answer=0;
    for (int i = 0; i < arr.size(); i++) {
				for (int j = 0; j < arr.size(); j++) {
					if (arr[i]%2==0 && arr[i]/2 == arr[j]) {
                        answer++;
                        break;
                    }
				}
			}
       return answer;
}
