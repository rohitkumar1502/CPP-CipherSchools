#include<iostream>
using namespace std;
int main(){
/*
int i = 5; //initailization
while (i<101) //condition
{
   cout<<i<<" "; //loop
   i++;         //updation

}
*/

int i;
int input;
//guess the number 65
//the user has 100 chances
i=100;
for(i=1;i<101;i++){
    cin>>input;
    if(input == 65){ //only takes plae if the input is exaxtly 65
        cout<<"Congrates you have guessed correct";
        break;
    }
}


}