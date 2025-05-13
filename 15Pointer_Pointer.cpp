#include <iostream>
using namespace std;
// ⁡⁢⁣⁣​‌‌‌‍Pointers to Pointers​⁡
int main()
{
    /*⁡⁢⁢⁢Pointer to pointers (or double pointers) are variables that store the address of another pointer variable. In other words, they are pointers that point to another pointer.⁡

    / ⁡⁢⁢⁢To declare a pointer to a pointer, we use the syntax type **ptr; where type is the data type of the variable that the pointer will be pointing to. For example, if we want to declare a pointer to a pointer that points to an integer variable, we can use:⁡⁡*/
    int **ptr;

    /*⁡⁢⁢⁢To initialize a pointer to a pointer, we can use the & operator to get the address of a pointer variable. For example, if we have a pointer variable p that points to an integer variable, we can initialize a pointer to a pointer that points to p as follows:⁡*/
    int *p1;
    int **ptr1;

    p1 = new int;
    ptr1 = &p1;
    //⁡⁢⁣⁢EXAMPLE⁡
    *p1 = 42;          // ⁡⁢⁣⁢Assign a value to the memory location⁡
    cout << **ptr1;    // ⁡⁢⁣⁢Output the value: 42⁡
    delete p1;

    /* ⁡⁢⁢⁢Here, *ptr is used to dereference the pointer to a pointer and get the address of p.⁡

       ⁡⁢⁢⁢To use a pointer to a pointer to access multi-dimensional arrays, we can create an array of pointers, where each pointer points to another array. For example, to create a 2D array of integers using a pointer to a pointer, we can use:⁡*/
    int rows = 3, cols = 4;
    int **arr;

    arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    /* ⁡⁢⁣⁣⁡⁢⁢⁢Here, we first create an array of pointers arr with rows elements. Then, we use a loop to create another array of integers for each element of arr. To access an element of the 2D  array, we can use pointer arithmetic with the pointer to a pointer arr. For example, to access the element in row 2 and column 3, we can use:⁡⁡*/
    int val = arr[2][3];
    /*⁡⁢⁣⁡⁢⁢⁢This retrieves the value stored in the memory location pointed to by the pointer in the second element of arr, at the fourth offset from that memory location.⁡⁡*/

    return 0;
}