#include <iostream>
#include <Windows.h>

void print(const double* arr, size_t size)
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

double* create_array(size_t size)
{
    return new double[size]();
}

int main(int argc, char** argv)
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "Введите размер массива: ";
    size_t size = 0;
    std::cin >> size;
    double* arr = create_array(size);
    print(arr, size);

    delete[] arr;
    return 0;
}