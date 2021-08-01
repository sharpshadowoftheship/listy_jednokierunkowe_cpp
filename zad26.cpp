#include <iostream>

using namespace std;
struct Element
{
    int value;
    Element* next;
};


int main()
{
    int ile,ile2,wartosc;
    cin>>ile;
    Element *v, *q, *first2;
    first2=NULL;
    Element *first;
    first=NULL;
    for(int i=0; i<ile; i++)
    {
        v=new Element;
        cin>>wartosc;
        v->value=wartosc;
        v->next=first;
        first=v;

    }

   cin>>ile2;
   for(int i=0; i<ile2; i++)
   {
       q=new Element;
       cin>>wartosc;
       q->value=wartosc;
       q->next=first2;
       first2=q;
   }

int f=0;
   if(ile2<ile)
   {
       cout<<0;
       f=1;
   }
   int licznik=0,f2=1;
   Element *zap;
   while(q!=NULL && f==0)
   {
       zap=q;
       while(q->value==v->value && v->next!=NULL && q->next!=NULL)
       {
           licznik++;
           q=q->next;
           v=v->next;
       }
       if(q->value==v->value)
       {
          licznik++;
       }
    //   cout<<"\n";
       if(licznik==ile)
       {
           cout<<1;
           f=1;
       }
       q=zap;
       v=first;
       q=q->next;
       licznik=0;
       f2=1;
   }
   if(f==0)cout<<0;

}
