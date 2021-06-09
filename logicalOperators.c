#include<stdio.h>
int main()
{
    /*
        Logical Operators:
            -> Used to check two or more expressions at a time
            -> List of operators:
                && -> Logical AND
                || -> Logical OR
                !  -> Logical NOT 
            -> Logical AND
                10<20 [True/False]   20>30 [True/False]
                    True    True    =>  True
                    True    False   =>  False
                    False   True    =>  False
                    False   False   =>  False  
    */
    printf("%d %d %d %d",10<20&&10<30,10<20&&10>30,10>30&&10<20,10>30&&10>40);
    return 0;
}