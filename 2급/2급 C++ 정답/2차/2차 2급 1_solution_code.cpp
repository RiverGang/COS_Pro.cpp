#include <string>
#include <vector>

using namespace std;

const int max_product_number = 10;

vector<int> func_a(vector<int> arr){
    int arr_len = arr.size();
    vector<int> counter(max_product_number + 1, 0);
    
    for(int i = 0; i < arr_len; ++i)
        counter[arr[i]]++;
    
    return counter;
}

int min(int a, int b){
    return a < b ? a : b;
}

int solution(vector<int> left_gloves, vector<int> right_gloves) {
    vector<int> left_counter = func_a(left_gloves);
    vector<int> right_counter = func_a(right_gloves);
    int total = 0;
    for(int i = 1; i <= max_product_number; ++i)
        total += min(left_counter[i], right_counter[i]);
    return total;
}