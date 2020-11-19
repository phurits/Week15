#include <iostream>
#include <time.h>

using namespace std;

int Addition(int* ptr1, int* ptr2);
int Subtraction(int* ptr1, int* ptr2);
int Multiply(int* ptr1, int* ptr2);
void CheckAns(int* ptr1, int* ptr2);

int main()
{
	srand(time(NULL));
	char choice[10];
	int num[4] = { rand() % 100,rand() % 100, 0 , 0};
	cout << "\tQuiz Math\n";
	cout << "Choose Types of Quiz '+' '-' '*'\n";
	cin >> choice;
	do
	{
		if (choice[0] != '+' && choice[0] != '-' && choice[0] != '*')
		{
			cout << "Pls choose '+' '-' '*' ONLY!!\n";
			cin >> choice;
		}
	} while (choice[0] != '+' && choice[0] != '-' && choice[0] != '*');
	cout << "Quiz: " << num[0] << choice[0] << num[1] << "\nAnswer: ";

	if (choice[0] == '+')
		num[2] = Addition(&num[0], &num[1]);
	else if (choice[0] == '-')
		num[2] = Subtraction(&num[0], &num[1]);
	else if (choice[0] == '*')
		num[2] = Multiply(&num[0], &num[1]);

	cin >> num[3];

	CheckAns(&num[3], &num[2]);

	return 0;
}

int Addition(int* ptr1, int* ptr2)
{
	int ans;
	ans = *ptr1 + *ptr2;
	return ans;
}

int Subtraction(int* ptr1, int* ptr2)
{
	int ans;
	ans = *ptr1 - *ptr2;
	return ans;
}

int Multiply(int* ptr1, int* ptr2)
{
	int ans;
	ans = *ptr1 * *ptr2;
	return ans;
}

void CheckAns(int* ptr1, int* ptr2)
{
	if (*ptr1 == *ptr2)
	{
		cout << "\t-----------\n";
		cout << "\t| Correct |\n";
		cout << "\t-----------\n";
	}
	else
	{
		cout << "\t-----------\n";
		cout << "\t|Incorrect|\n";
		cout << "\t-----------\n";
	}
}