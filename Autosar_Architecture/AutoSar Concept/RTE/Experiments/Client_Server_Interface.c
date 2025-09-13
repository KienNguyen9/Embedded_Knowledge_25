include RTE.h

int Function_1(){
    int a = 5;
    int b = 10;
    int sum;
    RTE_Call_RP_ClientMath_Sum(a, b, &sum);
}