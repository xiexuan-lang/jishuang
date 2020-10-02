#include "number.h"
#include<iostream>
using namespace std;
struct before
{
    int maxbeforebestnumber;
    int maxbeforewherebestnumber;
    int minbeforebestnumber;
    int minbeforewherebestnumber;
}Before{0,1,0,1};//定义先前的量
void number::getnumberground()
{
    for(int i=1;i<=number::numberofground;i++)

    {
        cout<<"number"<<"["<<i<<"]:";
    cin>>number::ground[i];

    }

}
void number::howtomaxandmin()
{
    for(int i=1;i<=2;i++)
        cout<<endl;










    cout<<"运算过程："<<endl;
    cout<<"**************************max*********************"<<endl;
    cout<<endl;
    //Before.maxbeforebestnumber=0;
    //Before.maxbeforewherebestnumber=1;
    max_.bestnumber=ground[1];
    for(int i=1;i<=number::numberofground;i++)
    if(ground[i]>max_.bestnumber)
    {
        Before.maxbeforebestnumber=max_.bestnumber;
        for(int j=1;j<number::numberofground;j++)
        {if(Before.maxbeforebestnumber==ground[j])
            Before.maxbeforewherebestnumber=j;
        };
        cout<<"遍历至"<<"第["<<i<<"]位数"<<endl;
        cout<<endl;
        cout<<"now ground is"<<i<<endl;
        number::max_.bestnumber=ground[i];
        number::max_.wherebestnumber=i;
        cout<<"now max::best="<<max_.bestnumber<<endl;
        cout<<"now max::where"<<max_.wherebestnumber<<endl;
        cout<<"change::now max::best="<<Before.maxbeforebestnumber<<"->->"<<max_.bestnumber<<endl;
        cout<<"change::now max::where="<<Before.maxbeforewherebestnumber<<"->->"<<max_.wherebestnumber<<endl;
cout<<endl;
    }
    else
    {cout<<"遍历至"<<"第["<<i<<"]位数"<<endl;
    cout<<"无运算"<<endl;}
for(int i=1;i<=3;i++)
    cout<<endl;
cout<<"**************************min*********************"<<endl;
cout<<endl;



    number::min_.bestnumber=ground[1];
    for(int i=1;i<=number::numberofground;i++)
    if(ground[i]<number::min_.bestnumber)
    {
        Before.minbeforebestnumber=min_.bestnumber;
        for(int l=1;l<number::numberofground;l++)
        {if(Before.minbeforebestnumber==ground[l])
            Before.minbeforewherebestnumber=l;
        };
        cout<<"遍历至"<<"第["<<i<<"]位数"<<endl;
        cout<<endl;
        cout<<"now groundis"<<i<<endl;
        min_.bestnumber=ground[i];
        min_.wherebestnumber=i;
        cout<<"now min::best="<<min_.bestnumber<<endl;
        cout<<"now min ::where"<<min_.wherebestnumber<<endl;
        cout<<"change::now min::best="<<Before.minbeforebestnumber<<"->->"<<min_.bestnumber<<endl;
        cout<<"change::now min::where="<<Before.minbeforewherebestnumber<<"->->"<<min_.wherebestnumber<<endl;
 cout<<endl;
}
    else
    {cout<<"遍历至"<<"第["<<i<<"]位数"<<endl;
    cout<<"无运算"<<endl;}
int kl=0;
    for(int i=1;i<=number::numberofground;i++)
       kl=kl+ground[i];
    pingjunshu=kl/number::numberofground;
}
