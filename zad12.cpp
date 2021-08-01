#include <iostream>

using namespace std;

struct Element
{
    string value;
    Element *next;
}*first=NULL;
bool napis_wiekszy_lub_rowny(string napis1, string napis2)
{
    int f=1,frow=1;
    int krotszy=min(napis1.size(),napis2.size());
    int dluzszy=max(napis1.size(),napis2.size());
    for(int i=0; i<krotszy; i++)
    {
        if((int)napis1[i]<(int)napis2[i])
        {
            f=0;
        }
        if((int)napis1[i]!=(int)napis2[i])
        {
            frow=0;
        }

    }
    if(frow==1 && dluzszy-krotszy!=0)
    {
        if(napis2.size()==dluzszy)f=0;
    }

    return f;
}
void dodanie(Element *v,string dodany)
{
    Element *q,*pop;
    int f=0;
        if(napis_wiekszy_lub_rowny(dodany,v->value))
       {
           q=v;
           v=new Element;
           v->value=dodany;
           v->next=q;
       }
       else
        {
            while(f==0 && v->next!=NULL)
            {
                if(napis_wiekszy_lub_rowny(dodany,(v->next)->value) && napis_wiekszy_lub_rowny(v->value,dodany))
                {
                    f=1;
                    q=new Element;
                    q->value=dodany;
                    q->next=v->next;
                    v->next=q;
                }
               // cout<<v->value<<" "<<v<<" "<<v->next<<"\n";
                v=v->next;

            }//cout<<v->value<<" "<<v<<" "<<v->next<<"\n";
            if(f==0)
            {
                q=new Element;
                v->next=q;
                q->value=dodany;
               // cout<<q->value<<" "<<q<<" "<<q->next<<"\n";
            }


        }

}


int main()
{
    string napis,dodany;
    int ile;
    Element *p;
    cin>>ile;
    for(int i=0; i<ile; i++)
    {
        cin>>napis;
        p=new Element;
        p->value=napis;
        p->next=first;
        first=p;
    }
   cin>>dodany;
  dodanie(p,dodany);
  while(p!=NULL)
  {
     cout<<p->value<<" ";
    p=p->next;
   }

}
