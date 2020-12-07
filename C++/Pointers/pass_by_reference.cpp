#include <iostream>

using namespace std;

void pass_by_reference(int *a)
{
    *a = *a + 1;
    cout << "Inside Function:" << *a << endl;
}
int main()
{
    int a = 2;
    cout << "Main function before calling function to update value " << a << endl;
    pass_by_reference(&a);
    cout << "Main function after calling function to update value " << a << endl;

    return 0;
}