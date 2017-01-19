#include<bits/stdc++.h>
using namespace std;
// count the no. of anagram of a word in a given string;
int main()
{
  char a[]="forxxorfxdofr";
  char b[]="for";
  int bSum = 0,i,j,count=0;
  int sum = 0;
  for(i=0; i<strlen(b); i++)
  {
    bSum=bSum + b[i];
  }
 //printf("%d bsum \n", bSum);
  for(i=0; i<strlen(a)-2; i++)
  {
    sum=0;
    for(j=i ; j<i+3; j++)
    {
      sum = sum + a[j];
    }
  //printf("%d\n", sum);
    if(sum==bSum){
      count++;
    }
  }
  printf("No.of Anagram is : %d\n", count);
  return 0;
}
