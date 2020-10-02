#include"number.h"
#include<iostream>
using namespace std;
int main()
{
    number a;
    /*cout<<"please cin numberofground:";
     *
    cin>>a.numberofground;
    cout<<"numberofground is"<<a.numberofground<<endl;
    for(int i=1;i<=a.numberofground;i++)
    {
        cout<<"ground"<<"["<<i<<"]:"<<endl;
        cin>>a.ground[i];
         cout<<"ground"<<"["<<i<<"]:"<<a.ground[i]<<endl;
    }
    */
    cout<<"please cin numberofground:";
    cin>>a.number::numberofground;
    a.number::getnumberground();
    a.number::howtomaxandmin();
    cout<<endl;
    cout<<endl;
    cout<<"结果如下："<<endl;
    cout<<"最大值："<<a.max_.bestnumber<<"位置："<<a.max_.wherebestnumber<<endl;
    cout<<"最小值："<<a.min_.bestnumber<<"位置："<<a.min_.wherebestnumber<<endl;
    cout<<"平均数："<<a.pingjunshu<<endl;
    cout<<endl;
    cout<<endl;

    return 0;

}
