#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
};
int main()
{
    int dl,wartosc;
    cin>>dl;
    Element *l1;
    Element *l2;
    Element *fir1;
    fir1=NULL;
    Element *fir2;
    fir2=NULL;
    for(int i=0; i<dl; i++)
    {
        cin>>wartosc;
        l1=new Element;
        l1->value=wartosc;
        l1->next=fir1;
        fir1=l1;
    }
    for(int i=0; i<dl; i++)
    {
        cin>>wartosc;
        l2=new Element;
        l2->value=wartosc;
        l2->next=fir2;
        fir2=l2;
    }
    Element *nl;
    Element *fir3;
    fir3=NULL;
    while(l1!=NULL  && l2!=NULL)
    {
        nl=new Element;
        if(l1->value>=l2->value)
        {
            nl->value=l1->value;
            nl->next=fir3;
            fir3=nl;
            l1=l1->next;
        }
        else if(l2->value>=l1->value)
        {
            nl->value=l2->value;
            nl->next=fir3;
            fir3=nl;
            l2=l2->next;
        }
     //   cout<<nl->value<<" ";
    }
    if(l1==NULL)
    {
        while(l2!=NULL)
        {
            nl=new Element;
            nl->value=l2->value;
            nl->next=fir3;
            fir3=nl;
            l2=l2->next;
        }
    }
    else if(l2==NULL)
    {
            while(l1!=NULL)
        {
            nl=new Element;
                nl->value=l1->value;
                nl->next=fir3;
                fir3=nl;
                l1=l1->next;
            }
    }
    while(nl!=NULL)
    {
        cout<<nl->value<<" ";
        nl=nl->next;
    }

}

