#include <stdio.h>
#include <signal.h>

main()

{
  void	f(int);		
  int	i;

signal(SIGINT,f);	
for (i=0; i<5; i++)
  {
  printf("Hello\n");
  sleep(1);
  }
}

void f(int signum)
{
printf("Ouch!\n");
} 
