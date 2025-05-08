#include <iostream>
using namespace std;

// ñäâèã âïðàâî
void function(int* arr, int size) {
	int temp = arr[size - 1];
	for (int i = size - 1; i > 0; i--)
		arr[i] = arr[i - 1];
	arr[0] = temp;
}

 //ñäâèã âëåâî
void function_2(int* arr, int size) {
	int temp = arr[0];
	for (int i = 1; i < size; i++)
		arr[i - 1] = arr[i];
	arr[size - 1] = temp;
}



void matrica(int** arr, int size, int size2) {

	for (int i = 0; i < size; i++) {
		function(arr[i], size2);
	}

	cout << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}


void print_menu() {
	system("cls");
	cout << "Menu";
}

void print_menu2() {
	system("cls");
	cout << "Menu";
}

void clear() {
	system("cls");
}


int main() {
	
	setlocale(LC_ALL, "RU");

	/*srand(time(NULL));*/

	/*int left = 3;*/
	/*int right;*/

	/*int tab;*/
	int size1, size2;
	cout << "Ââåäèòå ðàçìåð äëÿ äâóõìåðíîãî ìàññèâà(ñòðîêè): ";
	cin >> size1;
	cout << "Ââåäèòå ðàçìåð äëÿ äâóõìåðíîãî ìàññèâà(ñòîëáöû): ";
	cin >> size2;
	/*cout << "Ââåäèòå ÷èñëî ñäâèãîâ: ";
	cin >> tab;*/


	int** array = new int* [size1];

	for (int i = 0; i < size1; i++)
		array[i] = new int[size2];

	cout << endl;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			array[i][j] = 1 + rand() % 9;
		}
	}

	//cout << "Èñõîäíûé çàïîëíåííûé äâóõìåðíûé ìàññèâ ñ ðàçìåðàìè " << size1 << " è " << size2 << endl << endl;

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	matrica(array, size1, size2);

	/*print_menu();*/





}









