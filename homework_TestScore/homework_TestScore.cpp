#include <iostream>
using namespace std;

void arraySetter(int* parr, int size)
{
	// nullチェック
	if (parr == nullptr)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		int score;
		cout << i + 1 << " 人目の点数を入力してください > " << flush;
		cin >> score;

		*(parr + i) = score;
	}
}

int totalCalcurator(int* parr, int size)
{
	// nullチェック
	if (parr == nullptr)
	{
		return 0;
	}

	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += *(parr + i);
	}

	return total;
}

double averageCalcurator(int* parr, int size)
{
	// nullチェック
	if (parr == nullptr)
	{
		return 0;
	}

	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += *(parr + i);
	}

	return total / size;
}

int main()
{
	int num;
	int total;
	double average;
	int* score = nullptr;

	cout << "何人分入力しますか > " << flush;
	cin >> num;

	score = new int[num];

	arraySetter(score, num);
	total = totalCalcurator(score, num);
	average = averageCalcurator(score, num);

	cout << num << " 人の点数の合計は " << total << " 点です。" << endl
		<< "平均点は " << average << " 点です。" << endl;

	delete score;
	score = nullptr;
}