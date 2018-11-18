#include <iostream>
#include "machine.h"

using namespace std;

int main()
{
    double x;
    cout<<"input the money"<<endl;
    cin>>x;
    if(x==.5 || x==1  || x==2 || x==5 || x==10 || x==20 ){
    double o=x;
    int i;
    cout<<"1-item1=0.5\n2-item2=1\n3-item3=2\n4-item4=5\n5-item5=10\n6-item6=15\n7-item7=8\n8-item8=9\n9-item9=20\n10-item10=18\n";
    while(true){
          cin>>i;
        if(i==0){
                machine p;
            p.printRemainingmoney(o);
            return false;
        }
if(i==1){
    machine b1;
    b1.check1(.5,o,x);
    x=b1.ptrx();
    o=b1.prto();
        }

if(i==2){
    machine b2;
    b2.check1(1,o,x);
    x=b2.ptrx();
    o=b2.prto();
        }
if(i==3){
    machine b3;
    b3.check1(2,o,x);
    x=b3.ptrx();
    o=b3.prto();
        }
if(i==4){
    machine b4;
    b4.check1(5,o,x);
   x=b4.ptrx();
    o=b4.prto();
        }
if(i==5){
    machine b5;
    b5.check1(10,o,x);
    x=b5.ptrx();
    o=b5.prto();
        }
if(i==6){
    machine b6;
    b6.check1(15,o,x);
   x=b6.ptrx();
    o=b6.prto();
        }
if(i==7){
    machine b7;
    b7.check1(8,o,x);
   x=b7.ptrx();
    o=b7.prto();
        }
if(i==8){
    machine b8;
    b8.check1(9,o,x);
    x=b8.ptrx();
    o=b8.prto();
        }
if(i==9){
    machine b9;
    b9.check1(20,o,x);
    x=b9.ptrx();
    o=b9.prto();
        }
if(i==10){
    machine b10;
    b10.check1(18,o,x);
    x=b10.ptrx();
    o=b10.prto();
        }
    }}
    else{
        return 0;
    }


    /*if(b1.check1(24,12)==true){
        cout<<"ok"<<endl;
    }
    else{
        cout<<"not ok"<<endl;
    }
    if(b1.check2(2)==true){
        cout<<"start"<<endl;
    }
    else{
        cout<<"stop"<<endl;
    }
    double o=b1.check3();
    cout<<o;*/

    return 0;
}
