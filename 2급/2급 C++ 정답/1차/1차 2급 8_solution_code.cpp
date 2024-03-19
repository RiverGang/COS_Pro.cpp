#include <string>
using namespace std;
bool solution(string sentence) {
	string alphas = "";
	for (char ch : sentence) {
		if (ch != '.' && ch != ' ') alphas += ch;
	}
	int len = alphas.size();
	for (int i = 0; i < len / 2; i++) {
		if (alphas[i] != alphas[len - 1 - i]) return false;
	}
	return true;
}