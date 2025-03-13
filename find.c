#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define MAX_NUMBERS 6

int main() {
    FILE *fp;
    char line[MAX_LINE_LENGTH];
    char *token;
    int saved_values[] = {2, 8, 28, 30, 37, 41};
    
    // Open the CSV file
    fp = fopen("lotto_numbers.csv", "r"); // Ensure the filename is correct
    if (fp == NULL) {
        perror("Error opening file"); // Better error message
        return 1;
    }

    // Read each line from the file
    while (fgets(line, MAX_LINE_LENGTH, fp)) {
        token = strtok(line, ",");
        int numbers[MAX_NUMBERS];
        int match_count = 0; // Reset match count for each line
        int i = 0; // Index for numbers array

        // Extract numbers using while loop
        while (token != NULL && i < MAX_NUMBERS) {
            numbers[i] = atoi(token);
            token = strtok(NULL, ",");
            i++;
        }

        // Compare numbers with saved_values using while loop
        i = 0; // Reset index for numbers
        while (i < MAX_NUMBERS) {
            int j = 0; // Index for saved_values
            while (j < sizeof(saved_values) / sizeof(saved_values[0])) {
                if (numbers[i] == saved_values[j]) {
                    match_count++;
                    break; // If a match is found, no need to check further for this number
                }
                j++;
            }
            i++;
        }
if (match_count>5)
        printf("Matches: %d\n", match_count); // Print the number of matches for the line
    }

    fclose(fp);
    return 0;
}