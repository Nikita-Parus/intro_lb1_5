#include <iostream>

using namespace std;

int main()
{
    setlocale(0, ".1251");
    int score;
    cout << "";
    cin >> score;
    if (score >= 90){
        cout << "Вiдмiнно" << endl;
    }
    else if (score < 90 && score >= 70) {
        cout << "Добре" << endl;
    }
    else if (score < 70 && score >= 60) {
        cout << "Задовiльно" << endl;
    }
    else {
        cout << "Незадовiльно" << endl;
    }
}