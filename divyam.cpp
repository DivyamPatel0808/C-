/*

Name : Divyam Patel
Code : basic C++
Date : 26/04/202 

*/

#include <iostream>
using namespace std;


int main() {

int divyam;
divyam = 15;
cout << divyam << "\n";

double y = 1.25;
cout << y << "\n";

char Divyam = 'D';
cout << Divyam << "\n";

string greetings = "hello everyone";
cout << greetings << "\n";

bool myBoolean = false;
cout << myBoolean << "\n";

int myage = 19;
cout << "i am " << myage << " years old" << "\n";

int a = 10;
int b = 5;
int sum = a + b;
cout << sum << "\n";

int c = 1, d = 9;
cout << c + d;




//simple if else with integers 

int number = 5;
if (number == 15) {
  cout << "yes";
}
  
else {
  cout << "no";
}


//simple if else with string

string str = "Divyam";

if (str.size() == 6) {
   cout << "yes";
}
 else {
   cout << "no";
 }

//if else sum int

int o = 5;
int p = 6;
int q = 11;

if((o + p) == q){
  cout << "yes";
}
else{
  cout << "no";
}



//simple while loop

int j=6;
int i=1;

while(i<j){
  cout << i ;
 i=i+1;

}

  return 0;
}