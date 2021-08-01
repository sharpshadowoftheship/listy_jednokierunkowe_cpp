#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
}*first=NULL;

void usuwanie(Element *p)
{
    Element *q;
    Element *pom;
    Element*zap;
    zap=p;
    p=p->next;
    while(p!=NULL)
    {
        pom=zap;
        while(pom!=p)
        {
            if(pom->value<p->value)
            {
                pom->value=-1;
            }
            pom=pom->next;
        }
        p=p->next;
    }
    p=zap;
    while(p->next!=NULL)
    {
        while((p->next)->value==-1 && p->next!=NULL)
        {
           // q=new Element;
            q=p->next;
            p->next=q->next;
            delete q;
        }

        p=p->next;

    }
    if(p->value==-1)
    {
        p=NULL;
        zap=p->next;
        delete p;
        p=zap;

    }



}


int main()
{
    int ile;
    cin>>ile;
    Element *v;
    int wartosc;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        v=new Element;
        v->value=wartosc;
        v->next=first;
        first=v;
    }
    usuwanie(v);
    while(v!=NULL)
    {
        cout<<v->value<<" ";
        v=v->next;
    }
}
