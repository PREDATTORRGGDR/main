#include <iostream>

using namespace std;


void foo(){
    cout << "ты вызвал меня" << endl;
}


void print(string a){
    
   cout << a;

}



int Sum(int a, int b){
    return a + b;
}

int main(){


    foo();
    cout << Sum(60, 7) << endl;
    print("comit");


    return 0;
}