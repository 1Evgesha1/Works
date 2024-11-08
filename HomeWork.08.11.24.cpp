#include <iostream> 
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

int intConvcTo() { // task1

	setlocale(LC_ALL, "RU");
	int chislo, ss1, ss2;
	cin >> chislo >> ss1 >> ss2;
	int result = 0;
	int cnt = 0; //счетчик
	while (chislo > 0)
	{
		result += chislo % ss2 * pow(ss1, cnt++);
		chislo /= ss2;//уменшает на 1 ед
	}
	cout << result;
	return 0;
}

int weightPhoto() {
	int weight;
	int weidht;
	int lenhgt
}

int maskIP() { //task3
	setlocale(LC_ALL, "RU");
	string IP[4];
	string ProviderIP[4];
	string* partIP = new string;
	string* partPIP = new string;
	string result[4];
	for (int i = 0; i < 4; i++) {
		cout << "Введит IP провайдера: "; cin >> *partPIP;
		ProviderIP[i] = *partPIP;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << "Введите ваш IP: "; cin >> *partIP;
		IP[i] = *partIP;
	}
	result[0] = ProviderIP[0];
	result[1] = ProviderIP[1];
	result[2] = IP[2];
	result[3] = IP[3];
	for (int i = 0; i < 4; i++)
	{
		cout << result[i];
	}
	delete partIP;
	delete partPIP;
	return 0;
}

int main()
{
	cout << "Что вы хотите выбрать: Конвертация, Маска, вес, таблицаИст";
	string command; cin >> command;
	//intConvcTo();
	//maskIP();
}