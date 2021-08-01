#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
}*first=NULL;

void usuwanie(Element*p)
{
    Element *q;
    p=p->next;
    while(p!=NULL && p->next!=NULL)
    {
        q=p->next;
        p->next=q->next;
        delete q;
        p=p->next;
    }
}
int main()
{
    int ile,wartosc;
    Element *v;
    cin>>ile;
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
