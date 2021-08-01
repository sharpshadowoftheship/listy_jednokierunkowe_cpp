#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element*next;
};
int main()
{
    int ile1,ile2,wartosc;
    Element *v, *q,*first1=NULL, *first2=NULL;
    cin>>ile1;
    v=new Element;
    v->value=-1;
    v->next=first1;
    first1=v;
    for(int i=0; i<ile1; i++)
    {
        cin>>wartosc;
        v=new Element;
        v->value=wartosc;
        v->next=first1;
        first1=v;
    }
    v=new Element;
    v->value=-1;
    v->next=first1;
    first1=v;
    cin>>ile2;
    q=new Element;
    q->value=-1;
    q->next=first2;
    first2=q;
    for(int i=0; i<ile2; i++)
    {
        cin>>wartosc;
        q=new Element;
        q->value=wartosc;
        q->next=first2;
        first2=q;
    }
      q=new Element;
    q->value=-1;
    q->next=first2;
    first2=q;
  //  while(v!=NULL)
  // {
    //    cout<<v->value<<" ";
   //     v=v->next;
   // }
  //  cout<<"\n";
  //  while(q!=NULL)
   // {
    //    cout<<q->value<<" ";
    //    q=q->next;
    //}
    int f=1,f2=1;
    Element *zap,*pom;
    zap=q;
    while(v->next!=NULL)
    {
        q=zap;
        while(q->next!=NULL && f==1)
        {
            if((q->next)->value==(v->next)->value && (v->next)->value!=-1)
            {
                pom=q->next;
                q->next=pom->next;
                delete pom;
                pom=v->next;
                v->next=pom->next;
                delete pom;
                f2=0;
                f=0;
            }
            else if((q->next)->value>(v->next)->value)
            {
                f=0;
                zap=q;
            }
            q=q->next;
        }
        if(f2==1)v=v->next;
        f2=1;
        f=1;

    }
    v=first1;
    q=first2;
       while(v!=NULL)
   {
        cout<<v->value<<" ";
        v=v->next;
    }
    cout<<"\n";
    while(q!=NULL)
    {
        cout<<q->value<<" ";
        q=q->next;
    }




}
