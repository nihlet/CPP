#include <iostream>
// Вариант 27
// В массиве первый отрицательный поменять местами с последним отрицательным,
// второй отрицательный с предпоследним отрицательным и т.д.

int array[] = {1,-2,-3,-4, 12,-6};


int main ()
{
    for (auto e:array)
        std::cout << e << ' ';
    std::cout << std::endl; 
    
    size_t idx = sizeof(array)/sizeof(int);
    for (size_t i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        if (i >= idx)
            break;

        if (array[i] >= 0)
            continue;
        for (size_t j = idx - 1; j > 0 ; j--)
            if (array[j] >= 0)
                continue;
            else 
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                idx = j;
                break;
            }
    }

    for (auto e:array)
        std::cout << e << ' ';
    std::cout << std::endl;

    return 0;
}