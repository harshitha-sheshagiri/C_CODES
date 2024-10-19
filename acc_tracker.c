#include<stdio.h>
#include<strings.h>
struct bank_account{
   int acc_no;
   char user_name[50];
   struct date_of_creation
   {
    int date,month,year;
   }d1;
   char account_type[50];
   float initial_balance;

}s1;
void read_details(struct bank_account s[],int n)
{
    for (int i=0; i<n; i++) {
        printf("Enter the account number\n");
        scanf("%d", &s[i].acc_no);
        printf("Enter the user name\n");
        scanf("%s", s[i].user_name);
        printf("Enter the date of creation\n");
        scanf("%d%d%d",&(s[i].d1.date),&(s[i].d1.month),&(s[i].d1.year));
        printf("Enter the account type\n");
        scanf("%s", s[i].account_type);
        printf("Enter the initial balance\n");
        scanf("%f", &s[i].initial_balance);
        

    }
}

void display_details(struct bank_account s[],int n)
{
    for (int i=0; i<n; i++) {
        printf("%d\n", s[i].acc_no);
        printf("%s\n", s[i].user_name);
        printf("%d %d %d\n",s[i].d1.date,s[i].d1.month,s[i].d1.year);
        printf("%s\n", s[i].account_type);
        printf("%f\n", s[i].initial_balance);
}
}

void deposit(struct bank_account s1[],int n)
{
   int amt;
   printf("Enter the amount to be deposited: \n");
   scanf("%d", &amt);
   int accno,found=0;
   printf("Enter the account number: \n");
   scanf("%d",&accno);
   for(int i=0; i<n; i++) {
    if(s1[i].acc_no==accno) {
        s1[i].initial_balance+=amt;
        printf("Deposit successful\n");
        found=1;
        break;
    }
    if (!found)
    {
    printf("Account not found\n");
   }
   
}
}
int main()
{   
    int n;
    printf("enter the number of customers: \n");
    scanf("%d",&n);
    struct bank_account s[100];
    read_details( s, n);
    deposit(s,n);
    display_details(s,n);
    return 0;


}