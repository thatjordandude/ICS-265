#include <stdio.h>
#include <string.h>

struct student {

    char fname[50];
    char lname[50];
    char major[50];
    char city[50];
    char state[50];
    int zip;
    // int age;
    char email[50];
};
// function prototype
void display(struct student s);

int main() {
    struct student students[100];
    int students_count = 0;
    char input[100];

    puts("Enter first and last name, major, city, state, zip, email");
    puts("Enter Q to Quit");
    while (1)
    {
        printf("Student %d:\n", students_count + 1);

        //fname
        if (fgets(input, 100, stdin) == NULL || (strcmp(input, "Q\n") == 0 || strcmp(input, "q\n") == 0)) {
            break;
        }
        input[strcspn(input, "\n")] = '\0';
        strcpy(students[students_count].fname, input);


        //lname
        if (fgets(input, 100, stdin) == NULL || (strcmp(input, "Q\n") == 0 || strcmp(input, "q\n") == 0)){
            break;
        }
        input[strcspn(input, "\n")] = '\0';
        strcpy(students[students_count].lname, input);

        //major
        if (fgets(input, 100, stdin) == NULL || (strcmp(input, "Q\n") == 0 || strcmp(input, "q\n") == 0)){
            break;
        }
        input[strcspn(input, "\n")] = '\0';
        strcpy(students[students_count].major, input);

        //city
        if (fgets(input, 100, stdin) == NULL || (strcmp(input, "Q\n") == 0 || strcmp(input, "q\n") == 0)){
            break;
        }
        input[strcspn(input, "\n")] = '\0';
        strcpy(students[students_count].city, input);

        //state
        if (fgets(input, 100, stdin) == NULL || (strcmp(input, "Q\n") == 0 || strcmp(input, "q\n") == 0)){
            break;
        }
        input[strcspn(input, "\n")] = '\0';
        strcpy(students[students_count].state, input);

        //zip
        if (fgets(input, 100, stdin) == NULL || (strcmp(input, "Q\n") == 0 || strcmp(input, "q\n") == 0)){
            break;
        }
        input[strcspn(input, "\n")] = '\0';
        scanf(input, "%d", &students[students_count].zip);
        
        if (fgets(input, 100, stdin) == NULL || (strcmp(input, "Q\n") == 0 || strcmp(input, "q\n") == 0)){
            break;
        }
        input[strcspn(input, "\n")] = '\0';
        strcpy(students[students_count].email, input);
        
        students_count++;

    // read string input from the user until \n is entered
    // \n is discarded
        // scanf("%[^\n]%*c", s1.fname);
        // scanf("%[^\n]%*c", s1.lname);
        // scanf("%[^\n]%*c", s1.major);
        // scanf("%[^\n]%*c", s1.city);
        // scanf("%[^\n]%*c", s1.state);
        // scanf("%[^\n]%*d", &s1.zip);
    // printf("Enter age: ");
    // scanf("%d", &s1.age);
    }

    for (int i = 0; i < students_count; ++i)
    {
        display(students[i]); 
    }
    
    
    
    return 0;
}

void display(struct student s) {
    printf("\nDisplaying information\n");
    printf("\nName: %s %s\n", s.fname, s.lname);
    printf("Major: %s\n", s.major);
    printf("City: %s\n", s.city);
    printf("State: %s\n", s.state);
    printf("Zip: %d\n", s.zip);
    printf("Email: %s\n", s.email);


    // printf("\nAge: %d", s.age);
}