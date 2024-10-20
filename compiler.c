#include <stdio.h>
#include <string.h>

int main(){
 //storage
 char filePath[64];
 char codeBuffer[1000];
 char fileBuffer[1000];
 FILE *f;
 printf("memory set\n");

 //source file reader  DZIALA
 printf("Specify file\n");
 scanf("%s",filePath); 
 f = fopen(filePath,"r");
 fgets(fileBuffer,1000,f);
 printf("file readed\n");

 //splits source code by semicolon CHUJ WIE CZY DZIALA
 const char *lines[128];
 int i = 0;
 int e = 0;
 while(e > (sizeof(fileBuffer)/sizeof(fileBuffer[0]))){
  const char *line[128];
  if(fileBuffer[e]!=';'){
   char* p = fileBuffer[e];
   strcat(line,p);
   e++;
  }else{
   lines[i] = line;
   i++;
   e++;
  }
 }
 printf("%i",sizeof(lines)/sizeof(lines[0]));
 printf("file segmented\n");

 //DEBUGER
 for(int i = 0;i < 4;i++){
  printf("%s",lines[i]); //Segmentation fault (core dumped)
  printf("\n");
 }
 return 0;
}
