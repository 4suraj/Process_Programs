#include<stdio.h>
#include<unistd.h>

int main()
{
 int flag=0;
 printf("Process_1\n");

  if(fork()==0)
  {
	printf("Process_2\n");
	exit(0);	
  }
	printf("Return process 2\n");

  if(fork()==0)
  {
	printf("Process_3\n");
	exit(0);	
  }
	
	printf("Return process 3\n");
	


  if(fork()==0)
  {
	printf("Process_4\n");
	
  }
	printf("End Of Processes\n");



return 0;
}


