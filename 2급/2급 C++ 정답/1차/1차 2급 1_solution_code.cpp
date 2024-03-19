#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> shirt_size) {
    vector<int> size_counter(6, 0);
    for(int i = 0; i < shirt_size.size(); ++i)
    {
        if(shirt_size[i].compare("XS") == 0)
            size_counter[0]++;
        else if(shirt_size[i].compare("S") == 0)
            size_counter[1]++;
        else if(shirt_size[i].compare("M") == 0)
            size_counter[2]++;
        else if(shirt_size[i].compare("L") == 0)
            size_counter[3]++;
        else if(shirt_size[i].compare("XL") == 0)
            size_counter[4]++;
        else if(shirt_size[i].compare("XXL") == 0)
            size_counter[5]++;
    }
    return size_counter;
}