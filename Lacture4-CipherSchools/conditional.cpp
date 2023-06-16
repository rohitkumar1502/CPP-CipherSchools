#include<iostream>
using namespace std;
int main(){
    /* int a,b;
    int c, d;

    
    cout<<"Input 2 integers a b c and d "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    //Statement :a>b
    cout<<(a>b);
    //C++ interprets  true as 1
    //C++ interprets  false as 0

    cout<<(a>b && c>d);
    // cout<<(a>b || c>d); */

    //if else
/*
    float a,b;
    cout << "Give the floating point numbers as input"<<endl;
    cin>>a>>b;
    if(a>0.01 && b>a){
        cout<< "the condition in if statement is correct";
    }
    else {
        cout<< "The condtion is false";
    }
    */
    
   /* int marks;
    cout<<"Student, Please enter the marks to calculate the grade:";
    cin>> marks; 
    
     */
    // if(marks>90){
    //     cout<<"A";
    // }
    // if(marks<90 && marks>80){
    //     cout<<"B";
    // }
    // if(marks<80 && marks>70){
    //     cout<<"C";
    // }

  /*
  
  if(marks>90){
        cout<<"A";
    }
    else if(marks>80){
        cout<<"B";
    }
    else if(marks>70){
        cout<<"C";
    }
    else if(marks>60){
        cout<<"D";
    }
    else{
        cout<<"PASS";

    }*/  
    
    /*
    int a,b,c,d;

    cout<<"Give threee integers as input : a, b, c, d"<<endl;
    cin>>a>>b>>c>>d;
    if(a>b && c>d)
    {
        cout<<"haha";
    }
    else if(a>b && c>d)
     {
        cout<<"huuuu";
    }
    else if(a<b && c>d)
     {
        cout<<"maja aa gaya";
    }
    else{
        cout<<"Nothing";
    }
    
    */

   // Swich Case
   int a;
   cout<<"Enter a integer number:";
   cin>>a;
   switch (a) //  It will first evalute the value inside the switch  paranthesis
   {
   case 1:
        cout<<"The value of a is 1";
        break;
   
   case 2:
        cout<<"The value of a is 2"<<endl;
        break;
   
   case 3:
        cout<<"The value of a is 3"<<endl;
        break;
   case 4:
        cout<<"The value of a is 4"<<endl;
        break;
   case 5:
        cout<<"The value of a is 5"<<endl;
        break;
    default:
       cout<<"default will be always printed";
   }
   return 0;


} 