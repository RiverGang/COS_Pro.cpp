#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int value, string unit) {
    int converted = 0;
    if (unit == "C")
        converted = (value * 1.8) + 32;
    if (unit == "F")
        converted = (value - 32) / 1.8;
    return converted;
}