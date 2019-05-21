#include <conio.h>
#include <stdio.h>


int main() 
{

  int n,i,j;
  scanf("%d",&n);

  int r[n];
  int c[n];

  for (i = 0; i <n; i++) 
  {
    scanf("%d",&r[i]);
  }

int k=1;
c[0] = 1;
c[n-1] = 1;
for (i = 1; i < n; i++) {

  if (r[i] > r[i - 1]){
    k++;}
  if (r[i] <= r[i - 1])
 {   k = 1;}
  c[i] = k;
  
}

 k = 1;
  long total = c[n-1];
  for (i = n - 2; i >= 0; i--) 
  {
    if (r[i] > r[i + 1]){
     k++;}
  if (r[i] <= r[i + 1]){
      k = 1;}
    if(k>c[i])
    
      c[i]=k;

    total += c[i];
  }

  printf("\n Candies : %ld",total);

  return 0;
}
