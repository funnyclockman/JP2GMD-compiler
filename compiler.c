#include <stdio.h>

int main(){
 //storage
 char filePath[64];
 char codeBuffer[1000];
 char fileBuffer[1000];
 FILE *f;

 //source file reader
 printf("Specify file\n");
 scanf("%s",filePath); 
 f = fopen(filePath,"r");
 fgets(fileBuffer,1000,f);

 //debug
 printf("%s",fileBuffer);

 return 0;
}

//ma podzielic kod wedlug ";"
char[][] getLine(char buffer[]){
 char temp[100][100]; 
 for(int i = 0;i<100;i++){
  char tempIn[100];
  int e = 0; 
  while(buffer[e]!=';'){
   e++;
   tempIn[e];
  }
 }
}

//sprawdza wartosc przypisana do procedury
char[] getStringValue(){

}

//tez ale int
int getIntValue(){
 return 0;
}

//ma skompilowac do hex a potem wykonac
int execute(){
 return 0;
} 

int getArrayLength(char[] input){
 return sizeof(input)/sizeof(input[0]);
}

//TUTAJ KONKRETNE PROCEDURY
char[] mem(char[][] variables){
 char[1000] temp = "section .data"
 for(int i = 0;getArrayLength(variables);i++){
  strcat(temp,"\n gmd");
  strcat(temp,i);
  strcat(temp," db")
 }
}
char[] start(){

}

char[] stdout(char[] varible){
 char []temp = "mov eax,4\nmov ebx,1\nmov ecx,";
 strcat(temp,variable);
 strcat(temp,"\nmov edx,");
 strcat(temp,getArrayLength(variable));
 return temp;
}

char[] end(){

}
