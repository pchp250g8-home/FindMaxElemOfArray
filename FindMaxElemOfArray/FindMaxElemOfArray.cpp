// FindMaxElemOfArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <valarray>
#include <stdlib.h>
#include <math.h>


int main(int argc, char* argv[])
{
    int nElems;
    std::cout << "Input a count of elements in array\r\n";
    std::cin >> nElems;
    if (nElems == 0)
    {
        std::cout << "Empty arrays not allowed\r\n";
        std::cin.ignore();
        std::cin.get();
        return 1;
    }
    std::valarray<int> iNumbers(nElems);
    srand(time(nullptr));
    std::cout << "Generating array by filling " << nElems << " elements\r\n";
    for (int i = 0; i < nElems; i++)
    {
        iNumbers[i] = 1 + rand() % 100;
        std::cout << iNumbers[i] << " ";
    }
    int iMax = iNumbers[0];
    int nIndex = 0;
    for (int i = 1; i < nElems; i++)
    {
        if (iNumbers[i] > iMax)
        {
            iMax = iNumbers[i];
            nIndex = i;
        }
    }
    std::cout << "\r\nFound maximum element: " << iMax << " with index " << nIndex << "\r\n";
    std::cin.ignore();
    std::cin.get();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
