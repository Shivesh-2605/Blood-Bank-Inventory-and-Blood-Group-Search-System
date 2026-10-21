
#include <stdio.h>
#include <string.h>

int main() {
    int id[50], units[50], n, i, j, found;
    char group[50][5], search[5], tempGroup[5];
    int tempID, tempUnits, total;

    printf("Enter number of donor records (max 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Invalid number of records.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter donor ID: ");
        scanf("%d", &id[i]);

        printf("Enter blood group (A+, A-, B+, B-, O+, O-, AB+, AB-): ");
        scanf("%4s", group[i]);

        printf("Enter available units: ");
        scanf("%d", &units[i]);

        if (units[i] < 0) {
            printf("Units cannot be negative.\n");
            return 1;
        }
    }

    printf("\n--- Blood Bank Inventory ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d | Group: %s | Units: %d\n",
               id[i], group[i], units[i]);
    }

    printf("\nEnter blood group to search: ");
    scanf("%4s", search);

    found = 0;
    total = 0;

    printf("\nMatching records:\n");
    for (i = 0; i < n; i++) {
        if (strcmp(group[i], search) == 0) {
            printf("Donor ID: %d | Units: %d\n",
                   id[i], units[i]);
            total += units[i];
            found = 1;
        }
    }

    if (found) {
        printf("Total available units of %s: %d\n", search, total);
    } else {
        printf("No matching records found.\n");
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(group[j], group[j + 1]) > 0) {
                strcpy(tempGroup, group[j]);
                strcpy(group[j], group[j + 1]);
                strcpy(group[j + 1], tempGroup);

                tempID = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tempID;

                tempUnits = units[j];
                units[j] = units[j + 1];
                units[j + 1] = tempUnits;
            }
        }
    }

    printf("\n--- Records Sorted by Blood Group ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d | Group: %s | Units: %d\n",
               id[i], group[i], units[i]);
    }

    return 0;
}
