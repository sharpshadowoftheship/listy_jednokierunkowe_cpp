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
    Element *v, *first=NULL, *firstp=NULL, *firstn=NULL, *p,*n;
    cin>>ile;
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
        int f=1;
        Element *q;

        while(v->next!=NULL)
        {
            if((v->next)->value%2==0 && (v->next)->value>0 && (v->next)->next!=NULL)
            {
                p=new Element;
                p->value=(v->next)->value;
                p->next=firstp;
                firstp=p;
            }
           else if((v->next)->value%2!=0 && (v->next)->value<0 && (v->next)->next!=NULL)
            {
                 n=new Element;
                n->value=(v->next)->value;
                n->next=firstn;
                firstn=n;
            }
            else if((v->next)->next!=NULL)
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
        cout<<"\n";
          while(p!=NULL)
        {
            cout<<p->value<<" ";
            p=p->next;
        }
        cout<<"\n";
          while(n!=NULL)
        {
            cout<<n->value<<" ";
            n=n->next;
        }
        cout<<"\n";
//usunac -1 z ty³u i z przodu ;




}
