#include <stdio.h>

void calc_employee_compensation() {
  float min_base_salary = 1500.00;
  float bonus_per_sale = 200.00;
  float commession_on_total_monthly_sales_per = 2;

  int total_unit_sold = 0;
  float sale_price = 0.00;

  float total_bonus = 0.00;
  float total_commession = 0.00;
  float total_salary = 0.00;

  printf("Enter Total unit sold: ");
  scanf("%d", &total_unit_sold);

  printf("Enter Sale price per unit: ");
  scanf("%f", &sale_price);

  // calculate compensations
  total_bonus = (float)total_unit_sold * bonus_per_sale;
  total_commession = (total_bonus * commession_on_total_monthly_sales_per) / 100;
  //
  total_salary = min_base_salary + total_bonus + total_commession;

  printf("\n");
  printf("Salary Breakup:\n");
  printf("------------------------------------------\n");
  printf("Base salary: Rs. %.2f\n", min_base_salary);
  printf("Total bonus: Rs. %.2f\n", total_bonus);
  printf("Total commession: Rs. %.2f\n", total_commession);
  printf("-----\n");
  printf("Gross salary: Rs. %.2f\n", total_salary);
  printf("-----\n");
}

void main() {
  printf("XYZ Inc. Employee Compensation Policy\n");
  printf("Calculate your total monthly compenstation\n");
  printf("=====\n");
  calc_employee_compensation();
}
