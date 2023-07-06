// int compare(int a, int b){ //compare 2 integer and return the value
//      int c;
//      if(a>b){
//         c=a;
//      }
//      else{
//         c=b;
//      }
//      //Now c will store the maximum of a,b
// }


// int compare(int a, int b){
//   if(a>b){
//    return a;
//   }
//   else{
//    return b;
//   }
// }


// #include<iostream>
// using namespace std;

// int compare(int a, int b){
// 	if(a == 5){
// 		return 1;
// 	}
// 	return 0;
// }

// int main(){
// 	int a,b;
// 	a=1,b=5;
// 	cout<<compare(a,b);
// 	return 0;
// }

#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

int main(){
	int a,b;
	a=1,b=5;
	int c;
	c = sum(a,b);
	cout<<c;
	return 0;
}