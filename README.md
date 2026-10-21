Blood Bank Inventory and Blood Group Search System

## 1. Overview
The Blood Bank Inventory and Blood Group Search System is a simple C programming project designed to manage basic blood bank records. It stores donor IDs, blood groups, and available blood units. The system searches for a specific blood group, calculates the total available units, and sorts records alphabetically by blood group.

## 2. Objective
- To maintain basic blood bank inventory records.
- To search for donors based on blood group.
- To calculate the total available units for a selected blood group.
- To organize records using sorting techniques.
- To apply arrays and string operations to a biomedical engineering problem.

## 3. Features
- Stores up to 50 donor records.
- Accepts donor ID, blood group, and available units.
- Searches for matching blood groups.
- Displays matching donor records.
- Calculates the total units available for the selected blood group.
- Sorts records alphabetically by blood group.
- Displays the inventory in a readable format.

## 4. Programming Concepts Used
- One-dimensional arrays
- Character arrays and strings
- Loops and conditional statements
- String comparison using `strcmp()`
- String copying using `strcpy()`
- Linear searching
- Bubble sorting
- Basic input validation

## 5. How to Run
1. Install a C compiler such as GCC or use an online C compiler.
2. Open `main.c` in the compiler.
3. Compile the program using:

   ```bash
   gcc main.c -o blood_bank
   ```

4. Run the program:

   **Linux/macOS:**
   ```bash
   ./blood_bank
   ```

   **Windows:**
   ```bash
   blood_bank.exe
   ```

5. Enter the donor details and the blood group you want to search for.

## 6. Sample Output
Refer to `sample_output.txt` for sample input and output demonstrating the program's execution.

## 7. Limitations
- Stores a maximum of 50 donor records.
- Records are not permanently saved after the program terminates.
- Blood group formats are not fully validated.
- Does not check blood compatibility, expiry dates, blood components, or screening status.
- Designed for educational purposes and not for actual clinical use.

## 8. Discussion
This project demonstrates how arrays and strings can be used to organize blood bank inventory records. Linear searching identifies records matching the requested blood group, while bubble sorting arranges records alphabetically. The program also calculates the total units available for a selected blood group.

The associated donor IDs and unit counts must remain aligned when records are sorted. In a real blood bank, validated compatibility checks, expiry tracking, and safety procedures are essential before blood is issued.

## 9. Conclusion
The project demonstrates the practical application of C programming concepts, particularly arrays, strings, searching, and sorting, in a basic biomedical inventory management system.

## 10. Language
**C Programming Language**
