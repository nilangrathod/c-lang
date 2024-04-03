#include <stdio.h>


struct Employee {
    char name[50];
    char role[50];
};

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

  
    struct Employee *employees = (struct Employee *)malloc(numEmployees * sizeof(struct Employee));

int i;
    for ( i = 0; i < numEmployees; ++i) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter role of employee %d: ", i + 1);
        scanf("%s", employees[i].role);
    }


    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
int j;
    for ( j = 0; j < numEmployees; ++j) {
        fprintf(file, "Employee %d\n", j + 1);
        fprintf(file, "Name: %s\n", employees[j].name);
        fprintf(file, "Role: %s\n\n", employees[j].role);
    }

    fclose(file);
    free(employees); 

    printf("Data has been written to data.txt\n");

    return 0;
}

