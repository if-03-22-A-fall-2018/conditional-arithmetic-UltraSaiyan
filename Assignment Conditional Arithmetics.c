#include <stdio.h>

int Select(int choice)
{
 do{
    printf("Select Add(1) or Multiply(2): ");
    scanf("%d", &choice);
}while(choice<1 || choice >2);
}

int SelectNumber(int number)
{

  do{
  printf("Select a number in the range (1-100):" );
  scanf("%d", &number );
}while(number>100);
}

int Add(long res, int number)
{
  int b1=0;
  int b2=0;

  for(int i=0; i<= number; i++)
  {
    b1=i%3;
    b2=i%5;

    if(b1==0 && b2==0)
    {
      res=res + i;
    }
  }
  printf("%d",res );
}

int Multiply(long res, int number)
{
  int b1=0;
  int b2=0;

  for(int i=0; i<= number; i++)
  {
    b1=i%3;
    b2=i%5;

    if(b1==0 && b2==0)
    {
      res=res + i;
    }
  }
  printf("%d",res );
}



int main(int argc, char const *argv[]) {

  int choice=0;
  int number=0;
  long res=0;

   Select(choice);

   SelectNumber(number);


  if(choice==1)
  {
    Add(res, number);
  }

  else if(choice==2)
  {
    Multiply(res, number);
  }


  return 0;


}
