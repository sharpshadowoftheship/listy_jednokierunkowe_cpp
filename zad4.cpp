#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
}*first=NULL;
int main()
{
    int wartosc;
    int ile;
    cin>>ile;
    Element *k;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        k=new Element;
        k->value=wartosc;
        k->next=first;
        first=k;

    }
    Element *m;
    first=NULL;
    for(int i=0; i<ile; i++)
    {
        m=new Element;
        m->value=k->value;
        m->next=first;
        first=m;

        k=k->next;


    }
     for(int i=0; i<ile; i++)
     {
         cout<<m->value<<" ";
         m=m->next;
     }


}
