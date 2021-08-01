#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
}*first=NULL;


int main()
{
    int ile;
    cin>>ile;
    int wartosc;
    Element *v;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        v=new Element;
        v->value=wartosc;
        v->next=first;
        first=v;

    }
      Element *zap;
    zap=v;
    Element *v2;
    v2=v;
    Element *q;
    Element *zap2;
    int sprawdzany,f=0;
    while(v!=NULL)
    {
        zap2=v;
        sprawdzany=v->value;
        v=zap;
        while(v!=NULL)
        {
            if(v->value==sprawdzany && v!=zap2)
            {
                v->value=-1;
                f=1;
            }
            v=v->next;
        }
        v=zap2;
        if(f==1)
        {
          v->value=-1;
        }
        f=0;
        v=v->next;
    }
    v=zap;
    while(v->next!=NULL)
    {
        while((v->next)->value==-1 && (v->next)->next!=NULL)
        {
            q=v->next;
            v->next=q->next;
            delete q;

        }
        zap2=v;
        v=v->next;
    }
    if(v->value==-1)
    {
        v=NULL;
        delete v;
        zap2->next=NULL;
    }
    v=zap;
    if(v->value==-1)
    {
        zap=v->next;
        v=NULL;
        delete v;
    }
    v=zap;
    while(v!=NULL)
    {
        cout<<v->value<<" ";
        v=v->next;
    }


}
