#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int length){
    string answer ="";
    string com ="RRRGGB";
    if(length%6==1 || length%6==2 || length%6 ==4) answer ="-1";
    else{
        for(int i = 0; i < length ; i++) answer+=com[i%6];
    }
    return answer;
}