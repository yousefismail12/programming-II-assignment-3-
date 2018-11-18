#include <iostream>

using namespace std;

int c(int n, int k);

int main()
{
cout<<c(4,2);
    return 0;
}
int c(int n, int k){
if(n>=k){
    if(n==k || k==0)
        return 1;
    else
        return c(n-1,k-1) + c(n-1,k);

}
else{
        cout<<"error"<<endl;
}
}
