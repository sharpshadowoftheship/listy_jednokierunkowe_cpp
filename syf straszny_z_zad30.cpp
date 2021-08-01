#include <iostream>

using namespace std;

struct Element
{
    int value;
    int lic=0;
    int lic2=0;
    Element *next;
};
int main()
{
    Element *posorto, *nie,*firstp=NULL, *firstn=NULL;
    int ile1,ile2,wartosc;
    cin>>ile1;
    for(int i=0; i<ile1; i++)
    {
        cin>>wartosc;
        posorto=new Element;
        posorto->value=wartosc;
        posorto->next=firstp;
        firstp=posorto;

    }
    cin>>ile2;
    for(int i=0; i<ile2; i++)
    {
        cin>>wartosc;
        nie=new Element;
        nie->value=wartosc;
        nie->next=firstn;
        firstn=nie;

    }
   // while(posorto!=NULL)
  //  {
     //   cout<<posorto->value<<" ";
     //   posorto=posorto->next;
   // }
   // cout<<"\n";
   // while(nie!=NULL)
   // {
   //     cout<<nie->value<<" ";
   //     nie=nie->next;
   // }
   Element *now;

   int mini=1000000;
   Element *zap, *firstnow=NULL, *zap2;

   int f=0,f2=1;
   while(posorto!=NULL)
   {
       nie=firstn;
       while(nie!=NULL)
       {

            if(nie->lic==0)mini=min(mini,nie->value);
            if(mini==nie->value && nie->lic==0)zap=nie;
            nie=nie->next;
       }
       now=new Element;
       if(zap!=NULL && zap->lic==0 && posorto->lic==0)now->value=min(posorto->value,zap->value);
       else if(zap==NULL && posorto->lic==0)now->value=posorto->value;
       now->next=firstnow;
       firstnow=now;
       if(now->value==posorto->value)posorto->lic++;
       if(now->value==zap->value)
       {
           zap->lic++;
           mini=1000000;
       }

       if(posorto->lic>0 || (posorto->next==NULL && f==1))posorto=posorto->next;
        if(posorto->next==NULL && posorto->lic==0)f++;
   }
   mini=1000000;
   for(int i=0; i<ile2; i++)
   {
          nie=firstn;
        while(nie!=NULL)
        {
            if(nie->lic==0 && nie->lic2==0)
            {
                mini=min(mini,nie->value);
                if(mini==nie->value)zap=nie;
            }


            nie=nie->next;
        }
        if(zap!=NULL)
        {
            if(mini==zap->value)zap->lic2++;
        }
        if(mini!=1000000)
        {
             now=new Element;
        now->value=mini;
        now->next=firstnow;
        firstnow=now;
        }

        mini=1000000;
   }

   while(now!=NULL)
   {
       cout<<now->value<<" ";
       now=now->next;
   }
}
