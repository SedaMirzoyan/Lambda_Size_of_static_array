
#include <iostream>
#include <list>
#include <algorithm>


template <typename T>
void printSize(T& ob)
{
    std::cout << "\nsize = " << sizeof(ob) << " ";
}


int main()
{
    //lambda 
    std::list<int> l{ 209, 11,-5, 2, 3, 136, 23,34,45,56,121, 67,78, 23, 89, 3,-8, 159, 189, 94, 101, 23, 3, 123, 204 };

    std::for_each(l.begin(), l.end(), [](int num) {(num > 100 && num < 200) ? std::cout << num << " " : std::cout << " "; });

    //size of static array
    int arr[7] = { 98, 110, -3, 4, 0, 21, 123 };

    printSize(arr);

    return 0;
}
