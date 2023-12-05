#include <stdio.h>

void printdeer(){
  printf("    \n");
  printf("    \\   \\_\\_    _/_/\n");
  printf("     \\      \\__/\n");
  printf("      \\     (oo)\\_______\n");
  printf("            (__)\\       )\\/\\\n");
  printf("                ||-----||\n");
  printf("                ||     ||\n\n");
}

int main(int argc,char *argv[]){
  printf("\n%s\n",argv[1]);
  printdeer();
  return 0;
}
