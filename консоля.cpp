#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");


	cout << "Задание 8. Угадай число." << endl;
	cout << "----------------------------------" << endl << endl;


	int min = 0, max = 63, y = 0, x = 0, check;
	bool i = true;



	cout << "Данная программа принимает на вход 2 значения: 1 или 0, " << endl << " где 1 это да, а 0 это нет." << endl;

	cout << "Так же эта программа угадывает числа только от " << min << " до " << max << endl << endl;

	x = max / 2;
	cout << min << "    " << max << endl;
	cout << "Ваше число больше " << x << " ?" << endl;
	cin >> check;

	while (min != max) {
		
		y = x;
		if (check == 1) {
			min = x;
			x = min + (((max - min) / 2) + ((max - min) % 2));
		}
		else if (check == 0){
			max = x;
			x = min + (((max - min) / 2) + ((max - min) % 2));
		}
		else {
			cout << "Ошибка. Повторите попытку." << endl;
		}

		cout << min << "    " << max << endl;

		if (x == y) {
			cout << "Ваше число равно " << x << " ?" << endl;
			cin >> check;
			if (check == 1) {
				break;
			}else if (min == 0 && max == 1 && check == 0) {
				x = 0; break;
			}
			else {
				x--;
				break;
			}
		}
		
		
		cout << "Ваше число больше " << x << " ?" << endl;
		cin >> check;

		
	}

	cout << "Вы загадали число " << x << endl;
	
}