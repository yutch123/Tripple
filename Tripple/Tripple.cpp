// Tripple
// Демонстрирует перезагрузку функций
#include <iostream>
#include <string>
using namespace std;
int tripple(int number); // объявление фунцкии tripple для работы с числами
string tripple(string text); // объявление функции tripple для работы со строками

int main()
{
	cout << "Tripple 5: " << tripple(5) << "\n\n";
	cout << "Trippling 'gamer': " << tripple(" gamer ");
	return 0;
}
int tripple(int number)
{
	return (number = 3); // вывод чсила 5 три раза
}
string tripple(string text)
{
	return (text + text + text); // вывод литерала 'gamer' 3 раза 
}
