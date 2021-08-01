#include <iostream>

using namespace std;

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
    v=kon;
    v->next=first;
    while(v!=NULL)
    {
        cout<<v->value<<" ";
        v=v->next;
    }

}
