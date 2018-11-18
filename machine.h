#ifndef MACHINE_H
#define MACHINE_H
#include <iostream>

using namespace std;

class machine
{
    public:
        machine();
        double check1(double y,double out,double x){
            if(out<0){
                    cout<<out<<"you dont have enough money"<<endl;}
             else{
            int a;

            cout<<"input the num of this item"<<endl;
            cin>>a;
            price=y;
            num=a;
            mah=x;
            if(num*price<=mah){
                rdi=(mah-(price*num));
            }
            else{
                cout<<" you dont have enough money"<<endl;
                check1(y,out,x);

            }
        }
        }
        double prto(){
            return rdi;
        }
        double ptrx(){
            return rdi;
        }
        void printRemainingmoney(double out){
        int a,b,m,n,q,w,p;
        a=out/20;
        p=out-20*a;
        b=p/10;
        m=((p%10))/5;
        n=((p%10)%5)/2;
        q=(((p%10)%5)%2)/1;
        w=((((p%10)%5)%2)%1)/.5;
       double e= out-(a*20+b*10+m*5+n*2+q*1);
        cout<<a<<"*20"<<endl<<b<<"*10"<<endl<<m<<"*5"<<endl<<n<<"*2"<<endl<<q<<"*1"<<endl<<e<<endl;
        }
        /*bool check2(int z){
            num=z;
            return (num*price<=mah?true:false);
        }
        double check3(){
         rdi=(price*num)-mah;
         return rdi;
        }*/

    protected:

    private:
        int num;
        double mah;
        double rdi;
        double price;


};
machine::machine(){
 cout<<"hello"<<endl;
}

#endif
