#include <iostream>
// Вариант 27
// В массиве первый отрицательный поменять местами с последним отрицательным,
// второй отрицательный с предпоследним отрицательным и т.д.

int array[] = {1,-2,-3,-4,12,-6};
// {1,-6,-4,-3,12,-2}


int main ()
{
	// Вывод элементов массива на экран
    for (auto e:array)
        std::cout << e << ' ';
    std::cout << std::endl; 
	
	/*
	for (int i = 0; i < sizeof(array)/sizeof(int); i++)
        std::cout << array[i] << ' ';
    std::cout << std::endl; 
	*/ 
	
    size_t idx = sizeof(array)/sizeof(int);
    for (size_t i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        if (i > idx)
            break;

        if (array[i] >= 0)
            continue;
		// поиск пары к отрицательному числу
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