#include <iostream>
#include <iomanip>
#include <Windows.h>

int** create_two_dim_array(size_t rows, size_t cols)
{
    int** arr = new int* [rows];

    for (size_t i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    return arr;
}

void fill_two_dim_array(int** arr, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
}

void print_two_dim_array(int** arr, size_t rows, size_t cols)
{
    std::cout << "\nТаблица умножения:\n";

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            std::cout << std::setw(3) << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void delete_two_dim_array(int** arr, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    size_t rows, cols;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;

    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    if (rows == 0 || cols == 0)
    {
        std::cout << "Ошибка: размеры должны быть больше 0!\n";
        return 1;
    }

    int** multiplication_table = create_two_dim_array(rows, cols);
    fill_two_dim_array(multiplication_table, rows, cols);
    print_two_dim_array(multiplication_table, rows, cols);
    delete_two_dim_array(multiplication_table, rows, cols);

    return 0;
}