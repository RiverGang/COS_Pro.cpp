#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int tile_length){
    string answer = "";
    string com = "RRRGGB";
    if(tile_length%6 == 1 || tile_length%6 == 2 || @@@) 
        answer = "-1";
    else
        for(int i = 0; i < tile_length; i++)
            answer += com[i%6];
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int tile_length1 = 11;
    string ret1 = solution(tile_length1);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret1 << " 입니다." << endl;

    int tile_length2 = 16;
    string ret2 = solution(tile_length2);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "solution 함수의 반환 값은 " << ret2 << " 입니다." << endl;
    
    return 0;
}