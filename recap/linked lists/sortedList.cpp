#include <iostream>
#include "mylist.h"
using namespace std;

template<typename T>class SprtedLinkedList: public
LinkedList<T>
{
    public:
        void addElement(T x)
        {
            struct list_elem<T> *p, *paux;
            p=pfirst;
            while(p!=NULL && p->info<x)
                p=p->next;
            if(p==NULL)
                addLast(x);
            else
            {
                paux=new struct list_elem<T>;
                paux->info=x;
                paux->next=p;
                paux->prev=p->prev;
                p->prev=paux;
                if(p->prev!=NULL) p->prev->next=paux;
                else pfirst=paux;
            }
        }
};