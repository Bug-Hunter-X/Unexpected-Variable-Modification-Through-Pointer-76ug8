int main() { int a = 10; int *ptr = &a; *ptr = 20; printf("%d\n", a); // Output: 20

   // Safer method
   int b = 10;
   int *ptr2 = &b;
   int newValue = 30;
   *ptr2 = newValue;
   printf("%d\n", b); // Output: 30
   return 0;} 