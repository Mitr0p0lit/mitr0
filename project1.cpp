#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int deap, secret, end, start, a = 1;
	while (a)
	{
		cout << "Введите деапозон чисел:" << endl;
		cout << "От: ";
		cin >> start;
		cout << "До: ";
		cin >> end;
		system("cls");
		secret = rand() % (end - start + 1) + start;
		int i = 1, pop = 1;
		while (i)
		{
			cout << "Угадайте число от " << start << " до " << end << endl;
			cout << "Попытка " << pop << ": ";
			cin >> deap;
			system("cls");
			if (deap == secret)
			{
				i = 0;
			}
			if (deap > secret)
			{
				cout << "Загаданное число, меньше\n";
				pop++;
			}
			if (deap < secret)
			{
				cout << "Загадонное число, больше\n";
				pop++;
			}
		}
		cout << "Вы победили!\n1.Да 0.Нет\nХотите сыграть ещё раз:";
		cin >> a;
		system("cls");
	}
	return 1;
}