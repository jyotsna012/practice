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

for(int i = 0; i < len; i++){
  char a = phrase[i];
  if(a == " "){
    count ++
  }

}
  
cout << count << endl;
  
}
