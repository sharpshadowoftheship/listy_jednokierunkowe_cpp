#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
};
int main()
{
    Element *posorto, *nie, *firstp=NULL, *firstn=NULL;
    int ile,ile2,wartosc;
    cin>>ile;
     posorto=new Element;
        posorto->value=-1;
        posorto->next=firstp;
        firstp=posorto;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        posorto=new Element;
        posorto->value=wartosc;
        posorto->next=firstp;
        firstp=posorto;
    }
       posorto=new Element;
        posorto->value=-1;
        posorto->next=firstp;
        firstp=posorto;
    cin>>ile2;
     nie=new Element;
        nie->value=-1;
        nie->next=firstn;
        firstn=nie;
    for(int i=0; i<ile2; i++)
    {
        cin>>wartosc;
        nie=new Element;
        nie->value=wartosc;
        nie->next=firstn;
        firstn=nie;
    }
       nie=new Element;
        nie->value=-1;
        nie->next=firstn;
        firstn=nie;
//    while(posorto!=NULL)
   //{
      //  cout<<posorto->value<<" ";
     //   posorto=posorto->next;
  //  }
  //  cout<<"\n";
  //  while(nie!=NULL)
    //{
   //     cout<<nie->value<<" ";
   //     nie=nie->next;
   // }
   Element *q,*zap;
   int f=1,f2=1;
   while(nie->next!=NULL)
   {
       posorto=firstp;
       zap=nie;
       while(posorto->next!=NULL && f==1)
       {
           if((zap->next)->value==(posorto->next)->value && (posorto->next)->value!=-1)
           {
               q=nie->next;
               nie->next=q->next;
               delete q;
               q=posorto->next;
               posorto->next=q->next;
               delete q;
               f=0;
               f2=0;

           }
           else if((posorto->next)->value>(zap->next)->value || (posorto->next)->value==-1 || (zap->next)->value==-1)
           {
               f=0;
           }
           if(f==1 && f2==1) posorto=posorto->next;

       }
       if(f2==1)nie=nie->next;
       f2=1;
       f=1;
   }
   nie=firstn;
   while(nie!=NULL)
   {
       cout<<nie->value<<" ";
       nie=nie->next;
   }
   posorto=firstp;
   cout<<"\n";
   while(posorto!=NULL)
   {
       cout<<posorto->value<<" ";
       posorto=posorto->next;
   }





}
