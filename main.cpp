#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    //Массив с мисками и количество всего супа
    int soup[n];
    int* s = new int[n];
    int all;
    for (int i=0; i<n; i++) {
        soup[i] = i+1;
        all += i+1;
    }
    
    /*Если количество супа четное, то миски можно разделить => рассматриваем два варианта:
    1) Количество мисок четное;
    2) Количество мисок нечетное. 
    Если нечетное, то нельзя.*/
    if (all%2==0) {
        cout << "YES" << endl;

        if (n%2==0) {
            cout << "Количество мисок Пети: " << n/2 << endl;
            cout << "Граммовки порций Пети: ";
            for (int i=0; i<(n/2); i+=2) {
                cout << soup[i] << " " << soup[n-i-1] << " ";
            }
            cout << endl;
            cout << "Количество мисок Маши: " << n/2 << endl;
            cout << "Граммовки порций Маши: ";
            for (int i=1; i<(n/2); i+=2) {
                cout << soup[i] << " " << soup[n-i-1] << " ";
            }
        } else {
            cout << "Количество мисок Пети: " << n/2+1 << endl;
            cout << "Граммовки порций Пети: ";
            for (int i=0; i<(n/2); i+=2) {
                cout << soup[i] << " " << soup[n-i-2] << " ";
            }
            cout << endl;
            cout << "Количество мисок Маши: " << n/2 << endl;
            cout << "Граммовки порций Маши: ";
            for (int i=1; i<(n/2); i+=2) {
                cout << soup[i] << " " << soup[n-i-2] << " " << soup[n-1] << " ";
            }
        }
    } else {
        cout << "NO";
    }
    delete s;
}