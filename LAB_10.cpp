//Сформировать одномерный массив. Удалить из него К элементов, начиная с заданного номера, добавить элемент с заданным ключом;

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int length, num, K, i, el;
    do
    {
        cout << "Введите кол-во элементов в строке: ";
        cin >> length;
    } while (length < 0);

    int* array = new int[length];

    cout << "\nСтрока, состоящая из чисел: ";
    for (i = 0; i < length; i++)
        cin >> array[i];

    do
    {
        cout << "\nНомер, с которого начнётся удаление элементов:"; cin >> num;
    } while (num <= 0 || num >= length);
        
    do
    {
        cout << "\nКолличество элементов, которые неужно удалить:"; cin >> K;
    } while (K < 0 || K > (length - num));
        
   
        cout << "\nЭлемент который нужно добавить в конец строки:"; cin >> el;
   
    cout << "\nНовая строка будет выглядеть так: ";
    for (i = 0; i < num - 1; i++)
        cout << array[i] << " ";
    for (i = (num + K) - 1; i < length; i++)
        cout << array[i] << " ";
    cout << el;

        delete[] array;
}