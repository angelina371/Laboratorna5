#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;
   
struct Student {
    string prizv;    // Прізвище
    string name;     // Ім'я
    int kurs;        // Курс
    string grupa;    // Група
    int yearBirth;   // Рік народження
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість студентів: ";
    cin >> n;
    cin.ignore(); // щоб уникнути проблем з getline після cin

    vector<Student> students(n);

    // Введення даних
    for (int i = 0; i < n; i++) {
        cout << "\nСтудент #" << i + 1 << endl;
        cout << "Прізвище: ";
        getline(cin, students[i].prizv);
        cout << "Ім'я: ";
        getline(cin, students[i].name);
        cout << "Курс: ";
        cin >> students[i].kurs;
        cin.ignore();
        cout << "Група: ";
        getline(cin, students[i].grupa);
        cout << "Рік народження: ";
        cin >> students[i].yearBirth;
        cin.ignore();
    }

    // Пошук наймолодшого студента
    int youngestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].yearBirth > students[youngestIndex].yearBirth) {
            youngestIndex = i;
        }
    }

    // Вивід наймолодшого студента
    cout << "\nНаймолодший студент:" << endl;
    cout << "Прізвище: " << students[youngestIndex].prizv << endl;
    cout << "Ім'я: " << students[youngestIndex].name << endl;
    cout << "Курс: " << students[youngestIndex].kurs << endl;
    cout << "Група: " << students[youngestIndex].grupa << endl;
    cout << "Рік народження: " << students[youngestIndex].yearBirth << endl;

    cout << "\nНатисніть Enter, щоб завершити...";
    cin.ignore(); // чекає Enter
    cin.get();    // або другий спосіб, щоб зупинити консоль
    return 0;
}