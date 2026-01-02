#include <stdio.h>

int main() {
    FILE *file;
    char title[100];
    char features[500];
    char usage[500];

    printf("Enter Project Title: ");
    fgets(title, sizeof(title), stdin);

    printf("\nEnter Project Features: ");
    fgets(features, sizeof(features), stdin);

    printf("\nEnter Project Usage Instructions: ");
    fgets(usage, sizeof(usage), stdin);

    file = fopen("README.md", "w");

    if (file == NULL) {
        printf("Error creating README.md file!\n");
        return 1;
    }

    fprintf(file, "# %s\n", title);
    fprintf(file, "## Features\n%s\n", features);
    fprintf(file, "## Usage\n%s\n", usage);
    fprintf(file, "\n---\n");
    fprintf(file, "Generated using C Project Portfolio Generator\n");

    fclose(file);

    printf("\nREADME.md generated successfully!\n");
    printf("Ready to be pushed to GitHub 🚀\n");

    return 0;
}
