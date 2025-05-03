#include<stdio.h>
int main(){
    int userID;
    int pass;
    printf("Enter the id and password");
    scanf("%d %d",&userID,&pass);
    switch(userID == 1001 && pass == 1010){
        case 1: printf("User: John Doe");break;
        default:
            switch(userID != 1001){
                case 1: printf("Incorrect ID");break;
                default: printf("Incorrect Password");
      }
  }
  return 0;
}