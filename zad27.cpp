#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
};


int main()
{
    int ile,wartosc,ile2;
    cin>>ile;
    Element *v, *q, *first, *first2;
    first=NULL;
    first2=NULL;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        v=new Element;
        v->value=wartosc;
        v->next=first;
        first=v;
    }
    cin>>ile2;
    for(int i=0; i<ile2; i++)
    {
        cin>>wartosc;
        q=new Element;
        q->value=wartosc;
        q->next=first2;
        first2=q;
    }
  //  while(v!=NULL)
   // {
    //    cout<<v->value<<" ";
     //   v=v->next;

    //}
    //cout<<"\n";
   // while(q!=NULL)
   // {
      //  cout<<q->value<<" ";
      //  q=q->next;
    //}
    Element *pom, *n,*firstpom, *firstn;
    firstpom=NULL;
    firstn=NULL;

    while(v!=NULL && q!=NULL)
    {
        pom=new Element;
        if(v->value<q->value)
        {
            pom->value=v->value;
            pom->next=firstpom;
            firstpom=pom;
            v=v->next;
        }
        else
        {
            pom->value=q->value;
            pom->next=firstpom;
            firstpom=pom;
            q=q->next;
        }

    }
    if(v==NULL)
    {
        while(q!=NULL)
        {
             pom=new Element;
            pom->value=q->value;
            pom->next=firstpom;
            firstpom=pom;
            q=q->next;
        }
    }
    if(q==NULL)
    {
        while(v!=NULL)
        {
            pom=new Element;
             pom->value=v->value;
            pom->next=firstpom;
            firstpom=pom;
            v=v->next;
        }
    }
    while(pom!=NULL)
    {
        cout<<pom->value<<" ";
        pom=pom->next;
    }



}
