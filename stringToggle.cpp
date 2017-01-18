#include<bits/stdc++.h>
using namespace std;
//Program to toggle all characters in a string
void toggleString(char b[])
{
  int i ;
  for(i=0; b[i]!='\0'; i++)
  {
    if(b[i]>='A' && b[i]<='Z')
        b[i]=b[i] + 'a' - 'A'; //as A stores in ASCII value so ASCII value of A is 65 which is a starting value
    else if(b[i]>='a' && b[i]<='z')// and ASCII value of small 'a' is 97
        b[i]=b[i] + 'A'-'a'; // thats why we are subtracting
    else {
      b[i]=b[i];
    }
  }
  printf("%s\n", b);
}

int main()
{
  char a[]= "URTHE@hero@geeKsJks7363@sjsjUU";
  toggleString(a);
  return 0;
}
