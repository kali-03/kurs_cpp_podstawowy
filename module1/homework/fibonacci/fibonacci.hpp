#pragma once

int fibonacci_iterative(int sequence) 
{
    int array[sequence];
    array[0]=0;
    array[1]=1;
    
    if (sequence==0)
       return 0;

    if (sequence==1) 
       return 1;

    else 
    {
        for (int i=2;i<=sequence;i++)
        {
           array[i]=array[i-2]+array[i-1];
        }
    }
    return array[sequence];

}

int fibonacci_recursive(int sequence) {

    if (sequence==0)
       return 0;

    if (sequence==1)
       return 1;

    else
       return fibonacci_recursive(sequence-1)+ fibonacci_recursive(sequence-2);

}