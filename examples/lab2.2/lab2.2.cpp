#include <iostream>
#include <limits>

// Вариант 27
// Найти номер строки или столбца матрицы, сумма которых наибольшая.

int array[3][4] = {
    {1,2,3,4},
    {5,6,8,4},
    {1,2,3,4},
    };

int main ()
{
    size_t dim1 = sizeof(array)/sizeof(array[0]);
    size_t dim2 = sizeof(array[0])/sizeof(int);

    int max_row = std::numeric_limits<int>::min();
    size_t max_row_idx = 0;

    for (size_t i = 0; i < dim1; i++)
    {
        int sum = 0;
        for (size_t j = 0; j < dim2; j++)
        {
            sum += array[i][j];
        }
        if (sum > max_row)
        {
            max_row = sum;
            max_row_idx = i;
        }
    }

    int max_col = std::numeric_limits<int>::min();
    size_t max_col_idx = 0;
    for (size_t i = 0; i < dim2; i++)
    {
        int sum = 0;
        for (size_t j = 0; j < dim1; j++)
        {
            sum += array[j][i];
        }
        if (sum > max_col)
        {
            max_col = sum;
            max_col_idx = i;
        }
    }

    std::cout << "Counting begins with 0" << std::endl;
    if (max_col> max_row)
        std::cout << "max sum col index:" << max_col_idx << std::endl;
    else 
        std::cout << "max sum row index:" << max_row_idx << std::endl;

    return 0;
}