#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
}*first=NULL;

int main()
{
    int ile,wartosc;
    cin>>ile;
    Element *v;
    v=new Element;
    v->value=-1;
    v->next=first;
    first=v;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        v=new Element;
        v->value=wartosc;
        v->next=first;
        first=v;
    }
    v=new Element;
    v->value=-1;
    v->next=first;
    first=v;

    Element *zap;
    Element *zap2;
    Element *q, *p, *k;
    int licznik=1;
    int dotychczasowy=-1;
    zap2=v;
    v=v->next;
    while(v->next!=NULL)
    {
        zap=v;
        while((v->next)->value>v->value && v->next!=NULL)
        {
            licznik++;
            v=v->next;
        }
        if(licznik>dotychczasowy)
        {
            p=zap;
            k=v;
            dotychczasowy=licznik;
        }
        licznik=1;
        v=zap;
        v=v->next;
    }
    //p k pocz¹tek i koniec przedzialu;
    v=zap2;
    while(v->next!=NULL)
    {
        if(v->next==p)
        {
            while(v->next!=k)
            {
               q=v->next;
                v->next=q->next;
                delete q;
            }
            q=v->next;
                v->next=q->next;
                delete q;
        }
        v=v->next;
    }
    v=zap2;

    while(v!=NULL)
    {
        cout<<v->value<<" ";
        v=v->next;
    }

}
