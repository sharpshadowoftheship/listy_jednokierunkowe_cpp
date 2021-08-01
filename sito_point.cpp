#include <iostream>

using namespace std;

struct Element
{
    int liczba;
    bool czyjest;
    Element *next;
}*first=NULL;


int main()
{
    Element *p;
    int szukana;
    cin>>szukana;
    p=new Element;
    p->liczba=0;
    p->czyjest=true;
    p->next=first;
    first=p;

    p=new Element;
    p->liczba=1;
    p->czyjest=true;
    p->next=first;
    first=p;

    p=new Element;
    p->liczba=2;
    p->czyjest=false;
    p->next=first;
    first=p;

    for(int i=2; i<=30; i++)
    {
        if(!p->czyjest)
        {
            for(int j=2*i; j<=1000; j+=i)
            {
                p=new Element;
                p->liczba=j;
                p->czyjest=true;
                p->next=first;
                first=p;
                 cout<<p->liczba<<" "<<p->czyjest<<"\n";
            }
                p=new Element;
                p->liczba=i;
               p->czyjest=false;
                p->next=first;
                first=p;
                 cout<<p->liczba<<" "<<p->czyjest<<"\n";
        }
        else
        {
            // p=new Element;
             //   p->liczba=i;
              // p->czyjest=true;
              //  p->next=first;
               // first=p;
                 cout<<p->liczba<<" "<<p->czyjest<<"\n";
        }



    }

while(p->liczba!=szukana)
{
  p=p->next;

}
//cout<<p->czyjest;


}

