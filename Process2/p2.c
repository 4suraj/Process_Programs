#include<stdio.h>
#include<unistd.h>

int main()
{
 int flag=0;
 printf("Process_1\n");

  if(fork()==0)
  {
	printf("Process_2\n");
	flag=1;
	
	 if(fork()==0)
	 {
	  printf("Process_3\n");
	  flag=0;
	 }
	
	if(flag==1)
	{
	  printf("Wait call by Process_2\n");
	  wait(10);
	}

	if(flag==0)
	{
	  printf("Process_3 Terminates\n");
	  exit(0);
	}
	flag=1;
  }

if(flag==0)
{
	printf("Wait call by Process_1\n");
	wait(10);
}

	if(flag==1)
	{
	  printf("Process_2 Terminates\n");
	  exit(0);
	}
printf("Process_1 Terminates\n");

return 0;
}
