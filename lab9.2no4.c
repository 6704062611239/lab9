#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps, int mode);

int main() {
    char login[64], password[64];
    printf("Enter login : "); 
    scanf("%s", login); 
    printf("Enter password : "); 
    scanf("%s", password);

    if(checkLogin(login, password) == 1){
        printf("Welcome\n");
    }else{
        printf("Incorrect login or password\n");
    }

    if(checkValidPass(password, 1)){
        printf("Password Status: Accepted\n");
    }else{
        printf("Password Status: Reject\n");
    }
    return 0;
}

int checkValidPass(char *ps, int mode){
    int len = strlen(ps);
    int digitCount = 0;
    int upperCount = 0;
    int i,j;

    for(i = 0; i < len; i++){
        if(isdigit(ps[i])) digitCount++;
        if(isupper(ps[i])) upperCount++;
    }

    if(mode == 1){
        if (len == 5 && digitCount >= 1) return 1;
    }

    else if(mode == 2){
        if(len >= 5 && len <= 8 && !isdigit(ps[0]) && upperCount >= 2 && digitCount >= 2) 
            return 1;
    }

    else if(mode == 3){
        if(len >= 5 && len <= 8 && upperCount >= 2 && digitCount >= 2){
            for(i = 0; i < len; i++){
                if(isupper(ps[i])){
                    for(j = i + 1; j < len; j++){
                        if(ps[i] == ps[j]) return 0;
                    }
                }
            }
            return 1;
        }
    }

    return 0;
}

int checkLogin(char *login, char *passwd){
    if(strcmp(login, "student1") == 0 && strcmp(passwd, "mypass") == 0)
        return 1;
    return 0;
}
