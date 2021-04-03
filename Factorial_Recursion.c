
//  Author Name :  vikas kotwal
// Creation date: 18-03-21
// Purpose:To Check whether the number is Armstrong or not  
#nclude<stdio.h> // Pre-Processive to include standard input and output funtions header file
long int multiplyNumbers(int n); // Recursion
int main() { // Start of Body 
    int n; // Variable  Declaration
    printf("Enter a positive integer: "); // taking Input
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n)); // Printing Output 
    return 0;
}

long int multiplyNumbers(int n) { 
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
// End of Body 
=======
//  Author Name : Aryan Sharma
// Creation date: 18-03-21
// Purpose:To Check whether the number is Armstrong or not  
#nclude<stdio.h> // Pre-Processive to include standard input and output funtions header file
long int multiplyNumbers(int n); // Recursion
int main() { // Start of Body 
    int n; // Variable  Declaration
    printf("Enter a positive integer: "); // taking Input
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n)); // Printing Output 
    return 0;
}

long int multiplyNumbers(int n) { 
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
// End of Body 
>>>>>>> 42832881d0b31557b9b36a16c76d2c36eb5877e3
