#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


int main(int argc, char* argv[])
{

   if( argc != 3 )
   {
      perror( "Usage : mv [file1] [file2] or mv [file1] [directory]." );
      return -1;
   }

   if( strcmp( argv[1], argv[2] ) == 0 )
   {
      char buffer[BUFSIZ];
      sprintf( buffer, "\'%s\' and \'%s\' area the same file.", argv[1], argv[2] );
      perror( buffer );
      return -1;
   }
   return 0;
}




