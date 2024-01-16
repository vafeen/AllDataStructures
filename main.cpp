#include "All.hpp"

int main()
{
    Node<int> *list = nullptr;
    list::CreateNormalList(list, {3, 2, 5, 4, 1, 7, 4});
    list::PrintListRecurse(list);

    system("pause");
    return 0;
}