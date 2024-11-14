#include <iostream> 
#include <cmath>
#include <fstream>
#include <string>
#include <cstdbool>
using namespace std;

int intConvTo() { // task1

	setlocale(LC_ALL, "RU");
	int chislo, ss1, ss2;
	cin >> chislo >> ss1 >> ss2;
	int result = 0;
	int cnt = 0; //счетчик
	while (chislo > 0)
	{
		result += chislo % ss2 * pow(ss1, cnt++);
		chislo /= ss2;
	}
	cout << result;
	return 0;
}

int FileWeight() /*task3*/ {
	setlocale(LC_ALL, "RU");
	string function;
	cout << "Выберите функцию: PhotoWeight, AudioWeight, VideoWeight." << endl;
	cin >> function;
	if (function == "PhotoWeight") {
		int width; int height; int PixDepth; int I;
		cout << "Введите размер изображения и глубину цвета: "; cin >> width >> height >> PixDepth;
		I = width * height * PixDepth / 8;
		cout << "Размер фото равен: " << I << " байт" << endl;
	}
	else if (function == "VideoWeight") {
		int fps;
		int Time;
		int resolutionW, resolutionH;
		int colorDepth;
		unsigned int I;
		cout << "Введите разрешение видео: " << endl; cin >> resolutionH >> resolutionW;
		cout << "Введите глубину цвета: "; cin >> colorDepth;
		cout << "Число кадров в сек: "; cin >> fps;
		cout << "Введите длительность видео в сек: "; cin >> Time;
		I = (resolutionH * resolutionW * (colorDepth / 8) * fps * Time);
		I /= 1073741824;
		cout << "Размер видео равен " << I << "Гбайт";
	}
	else if (function == "AudioWeight") {

	}
	return 0;
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

bool Truth_Table() {
	int REsult;
		for ( int A = 0; A <= 1; A++) {
			for (int B= 0; B <= 1; B++) {
				for (int C = 0; C <= 1; C++) {
					REsult = A || B & C;
					cout << "|" << "A" << "|" << "B" << "|" << "C" << "|" << "ABC" << "|" << endl;
					cout << "|" << A << "|" << B << "|" << C << "|" << REsult << "|" << endl;
				}
			}
		}
		return 0;
}

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Что вы хотите выбрать: Convert, Mask, File_Weight, Truth_Table: ";
	string command; cin >> command;
	if (command == "Convert") {
		intConvTo();
	}
	else if (command == "Mask") {
		maskIP();
	}
	else if (command == "File_Weight") {
		FileWeight();
	}
	else if (command == "Truth_Table") {
		Truth_Table();
	}
	else {
		cout << "Команда введена не верно." << endl;
	}
	FileWeight();
}