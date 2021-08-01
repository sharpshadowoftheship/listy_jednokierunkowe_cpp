#include <iostream>

using namespace std;

struct Element
{
    int value;
    int lic=0;
    Element *next;
}*first=NULL;


int main()
{
    //implementacja listy testowej;
    int ile,wartosc;
    Element *v, *zap, *zap2;
    cin>>ile;
    cin>>wartosc;
    v=new Element;
    zap=v;
    v->value=wartosc;
    v->next=first;
    first=v;
    for(int i=0; i<ile-1; i++)
    {
         cin>>wartosc;
    v=new Element;
    v->value=wartosc;
    v->next=first;
    first=v;
    }
    zap2=v;
    v=zap;
    v->next=first;

    v=zap2;
      v=new Element;
    v->value=241;
    v->next=first;
    first=v;
    v=v->next;

      v=new Element;
    v->value=324132;
    v->next=first;
    first=v;
     v=new Element;
    v->value=96732;
    v->next=first;
    first=v;
  //  while(v!=NULL)
   // {
     //   cout<<v->value<<" ";
     //   v=v->next;
   // }


   //program sprawdzajacy kiedy zaczyna sie cykl (podaje elemeent tuz przed cyklem);
   //z zalozeniem ze cykl istnieje;
   Element *pom;
   while(true)
   {
       v->lic++;
       if(v->lic==2)
       {
           break;
       }
       v=v->next;
   }
   pom=v;
   v=first;
   while(v!=pom)
   {
        zap=v;
       v=v->next;
   }
   cout<<zap->value;





}
