#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;
   
struct Student {
    string prizv;    
    string name;     
    int kurs;        
    string grupa;   
    int yearBirth;  
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Ââåä³òü ê³ëüê³ñòü ñòóäåíò³â: ";
    cin >> n;
    cin.ignore(); 
    vector<Student> students(n);

    
    for (int i = 0; i < n; i++) {
        cout << "\nÑòóäåíò #" << i + 1 << endl;
        cout << "Ïð³çâèùå: ";
        getline(cin, students[i].prizv);
        cout << "²ì'ÿ: ";
        getline(cin, students[i].name);
        cout << "Êóðñ: ";
        cin >> students[i].kurs;
        cin.ignore();
        cout << "Ãðóïà: ";
        getline(cin, students[i].grupa);
        cout << "Ð³ê íàðîäæåííÿ: ";
        cin >> students[i].yearBirth;
        cin.ignore();
    }

   
    int youngestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].yearBirth > students[youngestIndex].yearBirth) {
            youngestIndex = i;
        }
    }

    
    cout << "\nÍàéìîëîäøèé ñòóäåíò:" << endl;
    cout << "Ïð³çâèùå: " << students[youngestIndex].prizv << endl;
    cout << "²ì'ÿ: " << students[youngestIndex].name << endl;
    cout << "Êóðñ: " << students[youngestIndex].kurs << endl;
    cout << "Ãðóïà: " << students[youngestIndex].grupa << endl;
    cout << "Ð³ê íàðîäæåííÿ: " << students[youngestIndex].yearBirth << endl;

    cout << "\nÍàòèñí³òü Enter, ùîá çàâåðøèòè...";
    cin.ignore();
    cin.get();   
    return 0;
}
