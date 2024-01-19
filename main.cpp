#include "All.hpp"
// namespace head
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
Node<int> *getTail(Node<int> *head)
{
    Node<int> *p = head;
    while (p->next != nullptr)
    {
        p = p->next;
    }
    return p;
}
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Node<int> *head = nullptr;
    list::CreateListInDirect(head, { 3,-7, 3, 4, 5, 6, 7});

    Node<int> *tail = getTail(head);

    Node<int> *p = head;
    if (head->data < 0)
    {
        if (head->data % 2 == 0)
        {
            Node<int> *pNode = head; //сохраняем голову
            head = head->next; // переставляем голову
            pNode->next = nullptr; // зануляем next 
            tail->next = pNode; // вставляем в конец 
        }
        else
        {
            // оно итак в начале
        }
    }
    else
    {
        while (p->next != nullptr)
        {
            if (p->next->data < 0)
            {
                if (p->next->data % 2 == 0)
                {
                    Node<int> *pNode = p->next; //сохраняем следующий элемент
                    p->next = pNode->next; // убираем pNode из списка
                    pNode->next = nullptr; // зануляем его next
                    tail->next = pNode; // вставляем в конец
                    break;
                }
                else
                {
                    Node<int>* pNode = p->next; //сохраняем следующий элемент
                    p->next = pNode->next; // убираем pNode из списка
                    pNode->next = head; // ставим его перед головой 
                    head = pNode; // переставляем голову
                    break;
                }
            }
            p = p->next;
        }
    }

    list::PrintList(head);

    cout << "\n\n\nВсё\n\n\n";
    system("pause");
    return 0;
}