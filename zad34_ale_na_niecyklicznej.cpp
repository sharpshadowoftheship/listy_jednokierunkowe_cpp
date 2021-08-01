#include <iostream>

using namespace std;

int tab[1000001];
struct Element
{
    int value;
    Element *next;
};
int main()
{
    int ile,wartosc;
    Element *v, *first=NULL, *kon;
    cin>>ile;
    v=new  Element;
    v->value=-1;
    v->next=first;
    first=v;
    kon=v;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        v=new Element;
        v->value=wartosc;
        v->next=first;
        first=v;
    }
       v=new  Element;
    v->value=-1;
    v->next=first;
    first=v;

    while(v!=NULL)
    {
       if(v->value!=-1)
       {
           tab[v->value]++;
       }
       v=v->next;
    }
    v=first;
    int f=1;
    Element *q;
    while((v->next)->next!=NULL)
    {
        if(tab[(v->next)->value]>1)
        {
            q=v->next;
            v->next=q->next;
            delete q;
            f=0;

        }
        if(f==1)v=v->next;
        f=1;
    }
    v=first;
    while(v!=NULL)
    {
        cout<<v->value<<" ";
        v=v->next;
    }



}
