#include <iostream>

using namespace std;
struct Element
{
    int value;
    Element *next;
};

int main()
{
    int ile1,ile2,wartosc;
    Element *posorto, *nie, *firstp=NULL, *firstn=NULL, *now, *firstnow=NULL,*posorto2,*first2p=NULL;
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
    nie=new Element;
        nie->value=-1;
        nie->next=firstn;
        firstn=nie;
    for(int i=0; i<ile2; i++)
    {
        cin>>wartosc;
        nie=new Element;
        nie->value=wartosc;
        nie->next=firstn;
        firstn=nie;
    }
        nie=new Element;
        nie->value=-1;
        nie->next=firstn;
        firstn=nie;
   // while(posorto!=NULL)
  //  {
     //   cout<<posorto->value<<" ";
    //    posorto=posorto->next;
   // }
  //  cout<<"\n";
  //  while(nie!=NULL)
   // {
    //    cout<<nie->value<<" ";
    //    nie=nie->next;
   // }
int maxi=-1;
Element *zap,*q;
   for(int i=0; i<ile2; i++)
   {
       nie=firstn;
       while(nie->next!=NULL)
       {
           maxi=max(maxi,(nie->next)->value);
           if(maxi==(nie->next)->value)zap=nie;
           nie=nie->next;
       }
       posorto2=new Element;
       posorto2->value=maxi;
       posorto2->next=first2p;
       first2p=posorto2;

        nie=zap;
       q=nie->next;
       nie->next=q->next;
       delete q;
       maxi=-1;
   }


       posorto2=new Element;
       posorto2->value=maxi;
       posorto2->next=first2p;
       first2p=posorto2;

        nie=zap;
       q=nie->next;
       nie->next=q->next;
       delete q;
       first2p=posorto2->next;
       delete posorto2;
       posorto2=first2p;

   //nie=firstn;
   //   while(posorto2!=NULL)
    //{
     //   cout<<posorto2->value<<" ";
     //  posorto2=posorto2->next;
   // }
    now=new Element;
        now->value=-1;
        now->next=firstnow;
        firstnow=now;
   int mini,pom;
   while(posorto2!=NULL && posorto!=NULL)
   {
       if(posorto->value<=posorto2->value)
       {
            now=new Element;
            now->value=posorto->value;
            now->next=firstnow;
            firstnow=now;
            posorto=posorto->next;

       }
       else
       {
            now=new Element;
           now->value=posorto2->value;
           now->next=firstnow;
           firstnow=now;
           posorto2=posorto2->next;
       }
   }
   if(posorto==NULL)
   {
       while(posorto2!=NULL)
       {
             now=new Element;
           now->value=posorto2->value;
           now->next=firstnow;
           firstnow=now;
           posorto2=posorto2->next;
       }
   }
   if(posorto2==NULL)
   {
       while(posorto!=NULL)
       {
             now=new Element;
           now->value=posorto->value;
           now->next=firstnow;
           firstnow=now;
           posorto=posorto->next;
       }
   }
     now=new Element;
        now->value=-1;
        now->next=firstnow;
        firstnow=now;
        now=firstnow;
 //  while(now!=NULL)
  // {
   //    cout<<now->value<<" ";
   //    now=now->next;
  // }
int f=1;
   while(now->next!=NULL)
   {
      if(now->value==(now->next)->value && (now->next)->value!=-1)
      {
          q=now->next;
          now->next=q->next;
          delete q;
          f=0;
      }
      if(f==1)now=now->next;
      f=1;
   }
   now=firstnow;
   while(now!=NULL)
   {
       cout<<now->value<<" ";
       now=now->next;
   }





}
