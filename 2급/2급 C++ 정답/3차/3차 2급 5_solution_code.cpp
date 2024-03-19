#include <string>
#include <vector>

using namespace std;

int solution(vector<int> member_age, string transportation) {
	int adult_expense = 0;
	int child_expense = 0;

	if(transportation == "Bus")
	{
		adult_expense = 40000;
		child_expense = 15000;
	}
	else if(transportation == "Ship")
	{
		adult_expense = 30000;
		child_expense = 13000;
	}
	else if(transportation == "Airplane")
	{
		adult_expense = 70000;
		child_expense = 45000;
	}

	if(member_age.size() >= 10)
	{
		adult_expense = adult_expense / 10 * 9;
		child_expense = child_expense / 10 * 8;
	}

	int total_expenses = 0;
	for(int i = 0; i < member_age.size(); ++i) 
	{
		if(member_age[i] > 19)
			total_expenses += adult_expense;
		else
			total_expenses += child_expense;
	}
	return total_expenses;
}