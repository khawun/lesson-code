#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x1,x2;float delta;int a,b,c;float real,imagenary;
    cout<<"solve equation\n\t ax^2+bx+c=0"<<"\n";
    cout<<"\t a=";cin>>a;cout<<"\n\t b=";cin>>b;cout<<"\n\t c=";cin>>c;
    cout<<" output a="<<a<<"\n output b="<<b<<"\n output c="<<c<<"\n";
    delta=b*b-(4*a*c);
    cout<<" output delta="<<delta<<"\n";
    if(delta>0){
        x1=-b+sqrt(delta)/(2*a);
        x2=-b-sqrt(delta)/(2*a);
        cout<<"\t output x1="<<x1<<"\n\t output x2="<<x2<<"\n";
    }
    else if(delta==0){cout<<"that equation has two root"<<"\n";
        x1=x2=(-b/(2*a));
        cout<<"\t output x1=x2="<<x1<<"\n";
    }
    else if(delta<0){cout<<"\n\t*the complex two root equation";
    real=-b/(2*a);
    imagenary=abs(sqrt(delta))/(2*a);
    cout<<"\n\t output x1="<<real<<"+i"<<imagenary<<"\n\t output x2="<<real<<"-i"<<imagenary<<"\n";}
  return 0;
}
