#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
}*first=NULL;
void usuwanie(Element *v, int where, int number)
{
    Element *q;
    for(int i=0; i<where+1; i++)
    {
        if(i==where)
        {
            q=v->next;
            v->next=q->next;
            delete q;
        }
        v=v->next;
    }
}

int main()
{
    int where,number,ele;
    cin>>where>>number;
    Element *p;
    for(int i=0; i<number; i++)
    {
        p=new Element;
        cin>>ele;
        p->value=ele;
        p->next=first;
        first=p;
    }
    usuwanie(p,where,number);
    for(int i=0; i<number-1; i++)
    {
        cout<<p->value<<" ";
        p=p->next;
    }

}
