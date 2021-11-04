#include <iostream>
#include <ctime> 
#include <cstdlib> 

using namespace std;

int main(){

cout << "enter a phrase" << endl;
char phrase[100];
cin.get(phrase, 100);
cin.get();
cout << phrase << endl;
int len = strlen(phrase);
int count = 0;


char temp = phrase[0];
phrase[0] = phrase[1];
phrase[1] = temp;
  
cout << count << endl;
  
}
