#include<iostream>
using namespace std;
int main(){
int i;

cout<<"PROGRAM MEMERIKSA APAKAH BILANGAN HABIS DI BAGI 5 DAN 3 ATAU TIDAK"<<endl;
cout<<"Masukan Bilangan : ";
cin>>i;
if(i%3==0 & i%5==0)
cout<<i<<" Merupakan Bilangan yang habis di bagi 5 dan 3"<<endl;
else{
cout<<i<<" Merupakan bilangan yang tidak habis di bagi 5 dan 3"<<endl;
}
return 0;




}
