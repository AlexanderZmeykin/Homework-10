#include <iostream>
#include <Windows.h>

void print(const int* arr, size_t size)
{
    std::cout << "Введённый массив: ";
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i];
        if (i != size - 1)
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    size_t size = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    int* arr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }
    print(arr, size);
    delete[] arr;
    return 0;
}