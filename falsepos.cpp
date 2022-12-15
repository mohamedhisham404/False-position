#include <bits/stdc++.h>

using namespace std;

double func(double x){
    return  x*x*x + x - 1;
}

void falseposition(double a , double b){
    if(func(a) * func(b) >= 0){
            cout<<"You have not assumed right area"<<"\n";
            return;
    }

    double c=a;

    for (int i = 0; i < 12; i++){
        c = a-(a-b)*func(a)/(func(a)-func(b));

        if (func(c)==0)break;
 
        else if (func(c)*func(a) < 0)a = c;
        
        else b = c;
    }
    cout << "The value of root is : " << c <<'\n';
}

int main(){
    double a =0, b = 1;
    falseposition(a, b);
    return 0;
}