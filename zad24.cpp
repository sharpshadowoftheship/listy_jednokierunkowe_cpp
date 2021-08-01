#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
}*first=NULL;


int main()
{
    int ile,wartosc;
    Element *v, *q, *kon;
    cin>>ile;
    for(int i=0; i<ile; i++)
    {

        cin>>wartosc;
        v=new Element;
        if(i==2)
        {
            q=v;
        }

        v->value=wartosc;
        v->next=first;
        first=v;

    }
      Element *zap;
      zap=v;
    v=q;
    v->next=first;
    v=zap;
    v=new Element;
    v->value=95;
    v->next=first;
    first=v;
     v=new Element;
    v->value=231;
    v->next=first;
    first=v;
      v=new Element;
    v->value=2137;
    v->next=first;
    first=v;
    zap=v;

 //   while(v!=NULL)
    //{
    //   cout<<v->value<<" ";
    //    v=v->next;
   // }

    v=zap;

    int i=0,licznik=0;
  //  v=kon;
    //zalozenie ze lista rzeczywiscie jest zakonczona cyklem;
     // Element *zap;

    //zalozenie ze lista rzeczywiscie jest zakonczona cyklem;
        while(true)
        {
            zap=v;
            v=v->next;
            while(true)
            {
                if(v==zap)
                {
                    break;
                }
                if(i==100)
                {
                    break;
                }
                i++;
                v=v->next;
            }
            v=zap;
            if(i!=100)
            {
                cout<<licznik;
                break;
            }
            i=0;
            v=v->next;
            licznik++;

        }





}
