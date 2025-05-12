#include<iostream>
using namespace std;
void prntArr(int *ptr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<*(ptr+i)<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr = arr;
    prntArr(ptr, 5);
    // cout<<*ptr<<endl;
    // cout<<*ptr+2<<endl;
    return 0;
}

// Advantages of Pointers to Arrays:

// Using pointers to access and manipulate arrays has several advantages over using regular array notation:
// 1.Dynamic memory allocation: Using pointers allows us to allocate and deallocate memory dynamically at runtime. This means we can create arrays of any size based on user input or other runtime conditions.
// Pass by reference: When we pass an array to a function using a pointer, we are actually passing a reference to the array. This means any changes made to the array inside the function will be reflected outside of the function as well.
// Pointer arithmetic: Using pointers allows us to perform arithmetic operations on the pointer variable to access different elements of the array. This makes it easy to traverse and manipulate arrays of any size.
// Flexible array manipulation: Using pointers to access and manipulate arrays gives us more flexibility and control over the array data. We can easily swap or rearrange elements, perform complex operations on the data, or implement algorithms that require pointer manipulation.
// In summary, using pointers to access and manipulate arrays gives us more flexibility, control, and efficiency when working with array data in C++. It allows us to create dynamic arrays, perform advanced operations on the data, and pass arrays by reference to functions