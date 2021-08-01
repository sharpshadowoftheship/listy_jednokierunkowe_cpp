#include <iostream>

using namespace std;
struct Element
{
    int value;
    Element *next;
}*first=NULL;


int dodanie(Element *v, int number,int where,int your_new)
{
    Element *q;
    for(int i=0; i<where+1; i++)
    {
        if(i==where)
        {
            q=new Element;
            q->value=your_new;
            q->next=v->next;
            v->next=q;


        }

        v=v->next;


    }
}
int main()
{
    int how_many,your_value,where,your_new,f=0;
    Element *p;
    cin>>how_many>>where>>your_new;
    for(int i=0; i<how_many; i++)
    {
        cin>>your_value;
        p=new Element;
        p->next=first;
        p->value=your_value;
        first=p;


    }
    dodanie(p,3,where,your_new);
   for(int j=0; j<how_many+1; j++)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}
