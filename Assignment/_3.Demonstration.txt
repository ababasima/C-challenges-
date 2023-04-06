Control flow statement

1. Control flow in C++ refers to the order in which statements are executed in a program. There are three basic control flow structures in C++:

   1.  Conditional Statements (if-else)
    The if-else statement allows a program to make a decision and choose between two different paths of execution based on a condition. The syntax of an if-else statement is as follows:
  a.  IF way condition 
    let condition = 1;
    if (condition) {
    // statements to execute if condition is true
}
if (x > 5) {
    cout << "x is greater than 5";
}

b. two way condition

    let condition = 1;
    if (condition) {
    // statements to execute if condition is true
} else {
    // statements to execute if condition is false
}

examples
int x = 10;
if (x > 5) {
    cout << "x is greater than 5";
} else {
    cout << "x is less than or equal to 5";
}

c. multi way if else statemrnt
    let condition = 1;
    if (condition> condition3) {
    // statements to execute if condition is true
} if else (condition > condition2) {
// statements to execute if condition is true
}else {
    // statements to execute if condition is false
}

examples
int x = 10;
if (x > 5) {
    cout << "x is greater than 5";
} else if(x> 10){
  cout << "x is greater than 10";
 else {
    cout << "x is less than or equal to 5";
}

d. Nested If statement
A nested if statement is an if statement that is nested inside another if statement. The nested if statement is executed only when the outer if statement's condition is true.
if(condition1){
    // Code block 1

    if(condition2){
        // Code block 2
    }
}

examples  int x = 5, y = 10;

    if(x == 5) {
        if(y == 10) {
            cout << "Both conditions are true!" << endl;
        }
    }



2. Loops (for, while, do-while)
Loops allow a program to execute a block of code repeatedly as long as a certain condition is met. The syntax for each loop is as follows:
for (initialization; condition; update) {
    // statements to execute while condition is true
}

while (condition) {
    // statements to execute while condition is true
}

do {
    // statements to execute at least once
} while (condition);

examples 
// for loop to print the numbers 1 to 10
for (int i = 1; i <= 10; i++) {
    cout << i << " ";
}

// while loop to find the sum of numbers from 1 to 100
int i = 1, sum = 0;
while (i <= 100) {
    sum += i;
    i++;
}
cout << "The sum of numbers from 1 to 100 is " << sum;

// do-while loop to prompt the user to enter a number between 1 and 10
int num;
do {
    cout << "Enter a number between 1 and 10: ";
    cin >> num;
} while (num < 1 || num > 10);
cout << "You entered " << num;

3.     Switch Statements
    The switch statement allows a program to choose between multiple paths of execution based on the value of a single variable or expression. The syntax of a switch statement is as follows:
    
    switch (expression) {
    case value1:
        // statements to execute if expression equals value1
        break;
    case value2:
        // statements to execute if expression equals value2
        break;
    // additional cases as needed
    default:
        // statements to execute if expression does not equal any of the cases
}

example char grade = 'B';
switch (grade) {
    case 'A':
        cout << "Excellent";
        break;
    case 'B':
        cout << "Good";
        break;
    case 'C':
        cout << "Fair";
        break;
    case 'D':
    case 'F':
        cout << "Poor";
        break;
    default:
        cout << "Invalid grade";
}

4. Conditional Expression
The conditional expression, also known as the ternary operator, is a shorthand way of writing an if-else statement in C++. It is often used when assigning a value to a variable based on a condition.

The syntax of the conditional expression is:

condition ? expression1 : expression2;

If the condition is true, expression1 is executed, otherwise expression2 is executed.

Example:
int x = 5, y = 10;
    int z = (x > y) ? x : y;

    cout << "The larger value is " << z << endl;
    
    In this example, the conditional expression (x > y) ? x : y is used to assign the larger value of x and y to the variable z. If the condition x > y is true, then x is assigned to z, otherwise y is assigned to z. The output of this program is "The larger value is 10".
    
    Jumping statenent in c++
    Jump statements in C++ allow you to control the flow of your program by interrupting the normal sequence of instructions. There are three types of jump statements in C++: goto, break, and continue.

  A.  goto: The goto statement is used to transfer control to a labeled statement in the same function. This allows you to jump over sections of code or break out of nested loops.
    
    example
    goto label;

// ...

label:
    cout << "Hello, world!" << endl;
    
    B.Break
    break: The break statement is used to exit from a loop or a switch statement. When the break statement is encountered, the program control jumps to the next statement following the loop or switch.
    
    for (int i = 1; i <= 10; i++) {
    if (i == 6) {
        break; // exits the loop when i is equal to 6
    }
    cout << i << endl;
}

C. Continue
continue: The continue statement is used to skip the current iteration of a loop and move on to the next iteration
for (int i = 1; i <= 10; i++) {
    if (i == 6) {
        continue; // skips the iteration when i is equal to 6
    }
    cout << i << endl;
}

Break VS Continue
Both continue and break statements are used to control the flow of a loop in C++. However, they serve different purposes.

The break statement is used to exit a loop completely. When a break statement is executed inside a loop, the loop is immediately terminated and control is passed to the statement immediately following the loop. This means that any remaining iterations of the loop are skipped.

On the other hand, the continue statement is used to skip the current iteration of a loop and move on to the next iteration. When a continue statement is executed inside a loop, the remaining statements in the current iteration are skipped and the loop proceeds with the next iteration.

In summary, break is used to exit a loop completely, while continue is used to skip the current iteration and move on to the next one.



