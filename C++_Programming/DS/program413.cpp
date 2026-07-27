#include <iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyLL
{
private:
    PNODE first;
    int iCount;

public:
    DoublyLL();

    void Display();

    int Count();

    void InsertFirst(int iNo);

    void InsertLast(int iNo);

    void InsertAtPos(int iNo, int iPos);

    void DeleteFirst();

    void DeleteLast();

    void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void DoublyLL::Display()
{
    PNODE temp = NULL;
    temp = first;

    cout << "NULL <=>";
    while (temp != NULL)
    {
        cout << " | " << temp->data << " | <=> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int DoublyLL::Count()
{
    return this->iCount;
}

void DoublyLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    iCount++;
}

void DoublyLL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;
    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

void DoublyLL::InsertAtPos(int iNo, int iPos)
{
    if (iPos < 1 || iPos > iCount + 1)
    {
        cout << "Invalid Position\n";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        int i = 0;
        PNODE newn = NULL;
        PNODE temp = NULL;
        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;
        temp = first;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->prev = temp;
        newn->next->prev = newn;
        temp->next = newn;

        iCount++;
    }
}

void DoublyLL::DeleteFirst()
{
    if (first == NULL)
    {
        cout << "There is no node\n";
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = first;

        first = first->next;
        first->prev = NULL;
        free(temp);
    }
    iCount--;
}

void DoublyLL::DeleteLast()
{
    if (first == NULL)
    {
        cout << "There is no node\n";
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void DoublyLL::DeleteAtPos(int iPos)
{
    if (iPos < 1 || iPos > iCount)
    {
        cout << "Invalid Position\n";
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        int i = 0;
        PNODE temp = NULL;
        PNODE target = NULL;

        temp = first;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        target->next->prev = temp;
        delete target;

        iCount--;
    }
}

int main()
{
    int iRet = 0;
    DoublyLL dobj;
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of nodes are : " << iRet << endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertAtPos(155, 3);
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of nodes are : " << iRet << endl;

    dobj.DeleteFirst();
    dobj.DeleteLast();
    dobj.DeleteAtPos(2);
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of nodes are : " << iRet << endl;

    return 0;
}