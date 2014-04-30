/*
 _   _____  _______________ 
| | / /|  \/  || ___ \ ___ \
| |/ / | .  . || |_/ / |_/ /
|    \ | |\/| ||  __/|  __/ 
| |\  \| |  | || |   | |    
\_| \_/\_|  |_/\_|   \_| 

[+]MPP is an interpreter for mpp language using Mint(naper interpreter) and tinyCC
[+]Author : Naper & XDarker
[+]Web site : www.naper.eu
[+]Web site : mpp-project.org

*/
/*
========================
  mpp lib
========================
*/

#include "mpp.h"
#include "alwane.h"
/*
========================
  Golbale variables
========================
*/
int enablecolor = 0;
int language = 0;
/*
========================
  main function
========================
*/
int usage(){
  printf("=================================\n");
  printf("               kmpp              \n");
  printf("=================================\n\n");
  printf("usage : kmpp <filename.m++> -o <name>\n");
  return -1;

}
void change_syntaxe(char *file){
  FILE * mpp;
  mpp = NULL;
  char last[1024];
  sprintf(last,"%s.c",file);
  mpp = fopen(last,"r");
  char mot_cle[30];
  char mot_a_modifier[30] = "zid";
  char nouveau_mot[30] = "include";
  char copy_file[100];
 
  if (!mpp)
    sprintf(last,"%s.m++",file);
/*
  char const *ancien = last;
  sprintf(copy_file,"%s.copy",last);
  char const *nouveau = copy_file;
  FILE *donnees2;
 
  donnees2 = fopen(nouveau ,"w");
  if (!mpp){
      printf("[kmpp] : returned -1");
      exit(1);
  }
  else {
    while (fscanf(mpp, "%s", mot_cle) == 1)
        if (strcmp(mot_cle, mot_a_modifier) == 0)
            fprintf(donnees2, "%s\n", mot_a_modifier);
        else
            fprintf(donnees2, "%s\n", mot_cle);
 
    remove(ancien);
    rename(ancien, nouveau);

  }
  */
  return ;
}
int check_file_c(char *file){
    FILE * mpp;
    mpp = NULL;
    mpp = fopen(file,"r");
    if (!mpp){
      printf("[kmpp] : %s is not found\n",file);
      exit(1);
    }
    return 0;
  }
int check_file(char *file){
  if(strstr(file,".m++")== 0){
    printf("[kmpp]: not a valid mpp file(.m++)\n");
    exit(1);
  }
  else
  {
    FILE * mpp;
    mpp = NULL;
    mpp = fopen(file,"r");
    if (!mpp){
      printf("[kmpp] : %s is not found\n",file);
      exit(1);
    }
    return 0;
  }

}
void doo(char *file,char *name,int argc){
  char last[1024];
  if(strstr(file,".c") == 0){
    if (argc > 2){
      sprintf(last,"gcc %s.c /usr/lib/libmpp/libmpplinux_i386.x86-64.a -o %s",file,name);
      system(last);
   }
    else {
      sprintf(last,"gcc %s.c /usr/lib/libmpp/libmpplinux_i386.x86-64.a",file);
      system(last);
    }
  }
  else {
     if (argc > 2){
      sprintf(last,"gcc %s /usr/lib/libmpp/libmpplinux_i386.x86-64.a -o %s",file,name);
      system(last);
   }
    else {
      sprintf(last,"gcc %s /usr/lib/libmpp/libmpplinux_i386.x86-64.a",file);
     system(last);
    }
  }
  
  return ;
}
void  last(char *file){
  char last[1024];

  sprintf(last,"mv %s.c %s.m++",file,file);
  system(last);

  return ;
}
char *removec(char *file){
  file[strlen(file) - 1] = 0;
  file[strlen(file) - 1] = 0;
  file[strlen(file) - 1] = 0;
  file[strlen(file) - 1] = 0;
  char last[1024];

  sprintf(last,"mv %s.m++ %s",file,file);
  system(last);
  return file;
}
void change_name(char *file){
  char last[1024];

  sprintf(last,"mv %s %s.c",file,file);
  system(last);

  return ;
}
int main(int argc, char ** argv){
  char *file = argv[1];
  char *name = argv[3];
  if (argc < 2){
    printf("[kmpp]: missing arguments\n");
    usage();
    return -1;
  }
  if(strstr(file,".c") == 0){
    check_file(file);
    file = removec(file);
    change_name(file);
    change_syntaxe(file);
    doo(file,name,argc);
    last(file);
  }
  else {
    check_file_c(file);
    change_syntaxe(file);
    doo(file,name,argc);
  }
 
  return 0;
}