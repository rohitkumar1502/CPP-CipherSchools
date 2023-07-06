#include<iostream>
using namespace std;
// void printstuff(){ // therre are no parameters
//     cout<<"Writing my first function";
// }
int sum(int a,int b){
	return a+b;
}

int main(){

//   printstuff();
int a,b;
int add_sum;
a= 3, b= 9;
add_sum=sum(a,b);
cout<<add_sum;
return 0;
}