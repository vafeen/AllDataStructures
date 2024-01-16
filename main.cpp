#include "All.hpp"


// namespace list
// namespace listWithMain
// namespace doublyList
// namespace doublyListWithMain
// namespace masStack
// namespace listStack
// namespace masQueue
// namespace listQueue
// namespace binTree
// namespace binSrchTree
// namespace avlTree


int main()
{
    Node<int> *list = nullptr;
    list::CreateNormalList(list, {3, 2, 5, 4, 1, 7, 4});
    list::PrintListRecurse(list);

    system("pause");
    return 0;
}