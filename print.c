#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
void usage(char *programName,char *fileName){
 printf("usage: %s <note to write to file %s>\n",programName,fileName);
 exit(0);
}
void fatal(char *errMes){
 char message[100];
 strcpy(message,"[!!]fatal ");
 strncat(message,errMes,80);
 strncat(message,"\n",1);
 perror(message);
 exit(1);
}
int main(int argc,char *argv[]){
 int fd;
 char *buffer,*filename;
 buffer = (char *)malloc(100);
 filename = (char *)malloc(20);
 strcpy(filename,"/var/notes");
 if(argc != 2)
  usage(argv[0],filename);
 strcpy(buffer,argv[1]);
 strncat(buffer,"\n",1);
 printf("[DEBUG] buffer @ %p # %s\n",buffer,buffer);
 printf("[DEBUG] filename @ %p # %s\n",filename,filename);
 fd = open(filename,O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);
 if(fd == -1)
  fatal("opening file");
 if(write(fd,buffer,strlen(buffer)) == -1)
  fatal("writing to file");
 if(close(fd) == -1)
  fatal("closing file");
 printf("[DEBUG] Successfully wrote data to %s\n",filename);
 return 0;
}

