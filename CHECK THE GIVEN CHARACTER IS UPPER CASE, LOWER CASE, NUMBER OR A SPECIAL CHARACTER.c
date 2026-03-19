//WAP TO CHECK THE GIVEN CHARACTER IS UPPER CASE, LOWER CASE, NUMBER OR A SPECIAL CHARACTER//

 #include <stdio.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit (Number)");
    }
    else {
        printf("Special character");
    }

    return 0;
}