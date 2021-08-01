#include <iostream>

using namespace std;

struct Element
{
    int value;
    Element *next;
};

Element *tab[11];
Element *first[11];
int main()
{
    for(int i=0; i<10; i++)
    {
        first[i]=NULL;
    }
    int ile,wartosc;
    cin>>ile;
    for(int i=0; i<ile; i++)
    {
        cin>>wartosc;
        tab[wartosc%10]=new Element;
        tab[wartosc%10]->value=wartosc;
        tab[wartosc%10]->next=first[wartosc%10];
        first[wartosc%10]=tab[wartosc%10];
    }
   // for(int i=0; i<10; i++)
  //  {
     //   while(tab[i]!=NULL)
      //  {
        //    cout<<tab[i]->value<<" ";
          //  tab[i]=tab[i]->next;
       // }
       // cout<<"\n";
    //}



}
