/*
	Дана матрица размерностью 8 × 8, имитирующая поле для игры в шахматы.
	На поле отмечено положение трех фигур: ладьи, коня и ферзя (например, символами R, Q, N).
	С клавиатуры вводятся координаты поля в шахматной нотации (например, "e4”).
	Определить, могут ли, атаковать это поле вышеуказанные фигуры.
	Для проверки возможности атаки для каждой фигуры написать отдельные функции
	и предложить пользователю выбрать фигуру.
	rook - ладья, knight - конь, queen - ферзь
*/

#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

void queen(char **array, int x) {

}

void knight(char **array, int x) {

}

void rook(char **array, int x) {

}

typedef void(*MENU) (char **array, int x);

MENU menuGroup[3] = {rook, knight, queen};

void menu() {

}

void userInput(char **array, int x) {
	
}

void outputOnDisplay(char **array, int x) {
	system("color F0");
	cout << "    Игровое поле: \n\n";
	int temp = x;
	char let[16] = "a b c d e f g h";
	cout << "   " << let << "\n\n";
	for (int i = 0; i < x; i++) {
		cout << temp << "  ";
		for (int j = 0; j < x; j++) {
			cout << array[i][j] << ' ';
		}
		cout << "  " << temp;
		temp--;
		cout << endl;
	}
	cout << "\n" << "   " << let << "\n\n";
	userInput(array, x);
}

int main() {
	setlocale(LC_ALL, "russian");
	int const x = 8; // Размерность игрового поля
	char **playingField = new char*[x];
	for (int i = 0; i < x; i++) {
		playingField[i] = new char[x];
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			playingField[i][j] = 'o';
		}
	}
	outputOnDisplay(playingField, x);
	system("pause");
	return 0;
}