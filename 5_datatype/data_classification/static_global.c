
# include<stdio.h>

extern int function2();
 static int global_variable;

    void function1()
{
    global_variable = 4 ;
}
void main()
{
    function1();
    function2();
}
