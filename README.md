# CS150: Person Type

## Student Name and Email
Leah Mirch (lmirch@umich.edu)

## Introduction
This project is a simple implementation of a `personType` class that stores and manipulates a person's first and last names. The application is written in C++ and demonstrates basic class usage, member functions, and input/output operations.

## Running Instructions
### Prerequisites
- C++ compiler (e.g., g++)

### Compilation and Execution
1. Open a terminal and navigate to the project directory.
2. Compile the program using:
   ```bash
   g++ -o person_type main.cpp
   ```
3. Run the compiled program:
   ```bash
   ./person_type
   ```

### Program Execution
The user will be prompted to enter a first name and a last name. The program then uses the `personType` class to store these names, retrieves them using getter functions, and prints them using the class's print method.

## UML Class Diagram
### Class personType
- **Methods:**
  - `void print()`
  - `void setName(string first, string last)`
  - `string getFirstName() const`
  - `string getLastName() const`
- **Constructor:**
  - `personType(string first = "", string last = "")`
- **Attributes:**
  - `string firstName`
  - `string lastName`

## Implementation Details
The `personType` class manages a person's first and last names. It includes methods to set and get these names, as well as a method to print them. The main function demonstrates the usage of these methods by interacting with the user and displaying the entered names.

## Additional Information
This project showcases basic object-oriented programming principles in C++, focusing on class creation, member functions, and user interaction through standard input and output.
