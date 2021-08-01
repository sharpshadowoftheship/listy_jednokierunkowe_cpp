#include <iostream>

using namespace std;
struct Element
{
    int value;
    Element *next;
}*first=NULL;

int ile_oct(int a)
{
    int licznik=0;
    while(a>0)
    {
        if(a%8==5)licznik++;
        a/=8;
    }
    return licznik;
}
//void zamienianie(Element *v)
//{

//}
int main()
{
    int ile,wartosc;
    cin>>ile;
    Element *v;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        v=new Element;
        v->value=wartosc;
        v->next=first;
        first=v;

    }
    Element *pocz;
    Element *zap;
    Element *q;
    pocz=v;
    int pom;
    while(v->next!=NULL)
    {
        while((v->next)->next!=NULL && (ile_oct((v->next)->value))%2==0)
        {

            pom=(v->next)->value; //dod na poczatek;
            zap=v;
            v=new Element;
            v->value=pom;
            v->next=first;
            first=v;
           // v=zap;



          v=zap;  //usuwanie w miejscu w pêtli;
           q=v->next;
            v->next=q->next;
            delete q;


        }
        zap=v;
        v=v->next;

    }
    if((ile_oct(v->value))%2==0)
    {
       pom=v->value;
       v=new Element;
       v->value=pom;
       v->next=first;
       first=v;
       v=zap;
       v->next=NULL;

    }
    v=first;
    while(v!=NULL)
    {
        cout<<v->value<<" ";
        v=v->next;
    }




}
