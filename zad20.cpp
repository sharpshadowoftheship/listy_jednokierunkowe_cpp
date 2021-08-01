#include <iostream>

using namespace std;


struct przedzial
{
    int p;
    int k;
};

struct Element
{
    przedzial value;
    Element *next;
}*first=NULL;


przedzial tworzenie_przedzialu(przedzial a, przedzial b)
{
    przedzial ret;
    if(b.p<a.p)
    {
        swap(a,b);
    }
    if(b.p<=a.k && b.k>=a.k)
    {
        ret.p=a.p;
        ret.k=b.k;
        return ret;
    }
    else if(b.p<=a.k && b.k<=a.k)
    {
        return a;
    }
    else
    {
        ret.p=1000000;
        ret.k=1000000;
        return ret;
    }

}
int main()
{
    przedzial dousu,wartosc;
    dousu.p=-1;
    dousu.k=-1;
    int ile;
    cin>>ile;
    Element *v;
    v=new Element;
    v->value=dousu;
    v->next=first;
    first=v;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc.p>>wartosc.k;
        v=new Element;
        v->value=wartosc;
        v->next=first;
        first=v;

    }
    v=new Element;
    v->value=dousu;
    v->next=first;
    //while(v!=NULL)
    //{
       // cout<<v->value.p<<" "<<v->value.k<<"\n";
       // v=v->next;
   // }
   Element *zap;
   Element *zap2;
   Element *q;
   przedzial pom;
   Element *zap3;
   Element *pocz=v;
 //  cout<<pocz;
   int f=1;
    v=v->next;
   while(v->next!=NULL)
   {
       zap2=v;
       zap=v;
       while((v->next)->next!=NULL)
       {
           pom=tworzenie_przedzialu(zap->value,(v->next)->value);
           if(pom.p!=1000000 || pom.k!=1000000)
           {
               zap3=v;
               v=zap;
               v->value=pom;
               v=zap3;
               q=v->next;
               v->next=q->next;
               delete q;
               f=0;
           }
           if(f==1)v=v->next;
           f=1;
       }
       v=zap2;
       v=v->next;
   }
   v=pocz;
   while(v!=NULL)
   {
       cout<<v->value.p<<" "<<v->value.k<<"\n";
       v=v->next;
   }


}
