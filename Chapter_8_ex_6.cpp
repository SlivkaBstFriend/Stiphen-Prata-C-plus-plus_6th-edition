//Напишите шаблонную функцию maxn(), которая принимает
//в качестве аргумента массив элементов типа T и целое число,
//представляющее количество элементов в массиве, а возвращает
//элемент с наибольшим значением.Протестируйте ее работу в программе,
//которая использует этот шаблон с массивом из шести значений int
//и массивом из четырех значений double.Программа также должна
//включать специализацию, которая использует массив указателей на
//char в качестве первого аргумента и количество указателей — в
//качестве второго, а затем возвращает адрес самой длинной строки.
//Если имеется более одной строки наибольшей длины, функция должна
//вернуть адрес первой из них.Протестируйте специализацию на массиве
//из пяти указателей на строки.

#include<iostream>
#include<locale>
#include<vector>
#include<cstring>
#include <string> 

using namespace std;

template <class T>
T maxn(vector<T> arr, int n);

template <>
char* maxn(vector<char*> arr, int n);

int main() {
    setlocale(LC_ALL, "ru");

    vector<int> arr_int;
    vector<double> arr_double;
    vector<char*> arr_char;

    cout << "\nВведите integer элементы массива (чтобы закончитить введите q): \n";
    int kol = 0;

    while (cin) {
        int element;
        cin >> element;
        arr_int.push_back(element);
        kol++;
    }
    cin.clear();
    cin.ignore();

    cout << "\nМаксимальный элемент введенного вами массива равен: " << maxn(arr_int, kol) << endl;
    kol = 0;

    cout << "\nВведите double элементы массива (чтобы закончитить введите q): \n";
    while (cin) {
        double element;
        cin >> element;
        arr_double.push_back(element);
        kol++;
    }
    cin.clear();
    cin.ignore();

    cout << "\nМаксимальный элемент введенного вами массива равен: " << maxn(arr_double, kol) << endl;
    kol = 0;

    cout << "\nВводите строки (чтобы закончитить введите q): \n";
   
    while (true) {
        char* element = new char[50];
        cin >> element;
        if (cin.fail()) {
            delete[] element;
            break;
        }
        if (strcmp(element, "q") != 0) {
            arr_char.push_back(element);
            kol++;
        }
        else {
            delete[] element;
            break;
        }
    }
    cout << "\nМаксимальный элемент введенного вами массива равен: " << maxn(arr_char, kol) << endl;
    return 0;
}

template <class T>
T maxn(vector<T> arr, int n) {
    T max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
template <>
char* maxn(vector<char*> arr, int n) {
    char *max = arr[0];
    for (int i = 0; i < n; i++) {
        if (strlen(arr[i]) > strlen(max)) {
            max = arr[i];
        }
        cout << arr[i];
    }
    return max;
}
