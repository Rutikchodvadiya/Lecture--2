#include<stdio.h>
main()
{
	char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf");
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf");
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf");
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf");
      break;
       default:
      printf("Error! operator is not correct");
  }

}
