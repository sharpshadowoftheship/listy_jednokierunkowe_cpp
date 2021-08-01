#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
};
Element *pom,*firstpom=NULL;


void reku(Element *v, Element *q)
{


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


}
int main()
{
    int ile,wartosc,ile2;
    cin>>ile;
    Element *v, *firstv;
    Element *q, *firstq;
    firstv=NULL;
    firstq=NULL;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        v=new Element;
        v->value=wartosc;
        v->next=firstv;
        firstv=v;
    }
    cin>>ile2;
    for(int i=0; i<ile2; i++)
    {
        cin>>wartosc;
        q=new Element;
        q->value=wartosc;
        q->next=firstq;
        firstq=q;
    }
    reku(v,q);
    while(pom!=NULL)
    {
        cout<<pom->value<<" ";
        pom=pom->next;
    }
}
