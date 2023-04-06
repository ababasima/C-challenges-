Exercise 1
// This program calculates the product of three integers

#include <iostream>
using namespace std;

int main() {
int x, y, z, result; // declare variable

cout << "Please enter three integers: "; //prompt the user
cin >> x >> y >> z; //read data from the keyboard

result = x * y * z;

cout << "The product is " << result << endl;

return 0;
}

Exercise 2
#include <iostream>
using namespace std;

int main() {
int num1, num2, sum, difference, product;
float division;

cout << "Enter two integers: ";
cin >> num1 >> num2;

sum = num1 + num2;
difference = num1 - num2;
product = num1 * num2;
division = (float) num1 / num2; // Convert num1 to float to avoid integer division

cout << "Sum: " << sum << endl;
cout << "Difference: " << difference << endl;
cout << "Product: " << product << endl;
cout << "Division: " << division << endl;

if (num1 > num2) {
cout << num1 << " is greater than " << num2 << endl;
} else if (num2 > num1) {
cout << num2 << " is greater than " << num1 << endl;
} else {
cout << "The numbers are equal" << endl;
}

return 0;
}

Exercise 3
#include <iostream>
using namespace std;

int main() {
const float PI = 3.14159; // Declare and initialize the constant PI
float radius, circumference;

cout << "Enter the radius of the circle: ";
cin >> radius;

circumference = 2 * PI * radius; // Compute the circumference

cout << "The circumference of the circle is " << circumference << endl;

return 0;
}

Exercise 4

#include <iostream>
#include <math.h>
using namespace std;

int main() {
double a, b, c, discriminant, root1, root2;

cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
cin >> a >> b >> c;

// Compute the discriminant
discriminant = b * b - 4 * a * c;

// Calculate the roots of the quadratic equation using the formula
if (discriminant > 0) {
root1 = (-b + sqrt(discriminant)) / (2 * a);
root2 = (-b - sqrt(discriminant)) / (2 * a);
cout << "The roots of the quadratic equation are " << root1 << " and " << root2 << endl;
} else if (discriminant == 0) {
root1 = -b / (2 * a);
cout << "The root of the quadratic equation is " << root1 << endl;
} else {
cout << "The quadratic equation has no real roots" << endl;
}

return 0;
}



