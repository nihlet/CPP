#include <iostream>
struct triangle
{
    double ax; 
    double ay; 
    double az; 
    double bx; 
    double by; 
    double bz; 
    double cx;
    double cy;
    double cz;
};

double perimeter (
    double ax, 
    double ay, 
    double az, 
    double bx, 
    double by, 
    double bz, 
    double cx,
    double cy,
    double cz
    )
{
    return 0;
}

double perimeter(triangle t);

double perimeter(triangle t)
{
    return 0;
}


struct Employee 
{
    short id; // 2 byte
    int age; // 4 byte
    double salary; // 8 byte
    // 14 byte
};

// iiaa aass ssss ssii aaaa ssss ssss
// ii00 aaaa ssss ssss ii00 aaaa ssss ssss

struct shape 
{
    double length = 0.0; // C++11 и выше
    double width = 0.0; // C++11 и выше
};

void printInformation(Employee employee)
{
    std::cout << "ID " << employee.id << std::endl;
    std::cout << "Age " << employee.age << std::endl;
    std::cout << "Salary " << employee.salary << std::endl;
}

struct Point
{
    double x;
    double y;
    double z;
};

struct triangle2
{
    Point p1;
    Point p2;
    Point p3;
};

Point getZeroPoint()
{
    Point temp = {0.0,0.0,0.0};
    return temp;
}

int main ()
{
    double p = perimeter(0,0,0,1,1,1,1,0,-1);
    triangle t;

    Employee vova = {1,20,10.0};
    Employee artem;

    vova.id = 1;
    vova.age = 20;
    vova.salary = 10.0;

    artem.id = 10;
    artem.age = 18;
    artem.salary = 10.5;

    int total_age = vova.age + artem.age;
    
    if (vova.salary > artem.salary)
        std::cout << "Vova makes more than Artem \n";
    else if (vova.salary < artem.salary)
        std::cout << "Artem makes more than Vova \n";
    else 
        std::cout << "Artem makes equal as Vova \n";

    int wrong = vova.age + artem.salary;

    artem.age++;

    shape a{1.0, 2.0};
    shape b = {1.0, 2.0};

    a = {12.0,44.0};
    
    printInformation(vova);
    printInformation(artem);

    Point p1 = getZeroPoint();
    if (p1.x == 0.0 && p1.y == 0.0 && p1.z == 0)
        std::cout << "This is zero point\n";
    else 
        std::cout << "This is not zero point\n";

    triangle2 tr;
    Point p3 = {0.0, 1.0, 0.0};
    tr.p1 = getZeroPoint();
    tr.p2 = {1.0, 1.0, 1.0};
    tr.p3 = p3;

    tr.p2.x;

    std::cout << sizeof(Employee) << std::endl;

    // 1200/11 * 1/2 = 1200/22
    // Создать структуру для хранения дробных чисел.
    // Объявить 2 переменных хранящих структуру.
    // Реализовать функцию умножения дробных чисел
    // реализовать функцию вывода дробных чисел.

}
