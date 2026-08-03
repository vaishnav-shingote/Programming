#include<iostream>
#include<cstdlib>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
private:
    PNODE first;
    PNODE last;
    int iCount;

public:
    DoublyCL();

    void Display();
    int Count();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

///////////////////////////////////////////////////////////////////////////
//
// Constructor
//
///////////////////////////////////////////////////////////////////////////

DoublyCL::DoublyCL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Display
//
///////////////////////////////////////////////////////////////////////////

void DoublyCL::Display()
{
    if(first == NULL)
    {
        cout<<"Linked List is empty\n";
        return;
    }

    PNODE temp = first;

    cout<<"<=> ";

    do
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////
//
// Count
//
///////////////////////////////////////////////////////////////////////////

int DoublyCL::Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////////
//
// Insert First
//
///////////////////////////////////////////////////////////////////////////

void DoublyCL::InsertFirst(int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    last->next = first;
    first->prev = last;

    iCount++;
}

///////////////////////////////////////////////////////////////////////////
//
// Insert Last
//
///////////////////////////////////////////////////////////////////////////

void DoublyCL::InsertLast(int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }

    last->next = first;
    first->prev = last;

    iCount++;
}

///////////////////////////////////////////////////////////////////////////
//
// Insert At Position
//
///////////////////////////////////////////////////////////////////////////

void DoublyCL::InsertAtPos(int iNo, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        PNODE temp = first;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;

        iCount++;
    }
}

///////////////////////////////////////////////////////////////////////////
//
// Delete First
//
///////////////////////////////////////////////////////////////////////////

void DoublyCL::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first == last)
    {
        free(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = first;

        first = first->next;

        free(temp);

        last->next = first;
        first->prev = last;
    }

    iCount--;
}

///////////////////////////////////////////////////////////////////////////
//
// Delete Last
//
///////////////////////////////////////////////////////////////////////////

void DoublyCL::DeleteLast()
{
    if(first == NULL)
    {
        return;
    }
    else if(first == last)
    {
        free(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = last;

        last = last->prev;

        free(temp);

        last->next = first;
        first->prev = last;
    }

    iCount--;
}

///////////////////////////////////////////////////////////////////////////
//
// Delete At Position
//
///////////////////////////////////////////////////////////////////////////

void DoublyCL::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = first;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        PNODE target = temp->next;

        temp->next = target->next;
        target->next->prev = temp;

        free(target);

        iCount--;
    }
}

///////////////////////////////////////////////////////////////////////////
//
// Main
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    DoublyCL dobj;

    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n\n";

    dobj.DeleteFirst();
    dobj.DeleteLast();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n\n";

    dobj.InsertAtPos(105,3);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n\n";

    dobj.DeleteAtPos(3);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}