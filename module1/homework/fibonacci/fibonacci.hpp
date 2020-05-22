#pragma once

int fibonacci_iterative(int sequence) {
    int tabela[sequence];

    if (sequence==0)
    return 0;
    
    if (sequence==1) 
    return 1;

    else 
    {
        for (int i=2;i<=sequence;i++){
        tabela[0]=0;
        tabela[1]=1;
        tabela[i]=tabela[i-2]+tabela[i-1];
        }
    }
    return tabela[sequence];
    
}

int fibonacci_recursive(int sequence) {
    
    if (sequence==0)
    return 0;

    if (sequence==1)
    return 1;

    if (sequence==2)
    return 1;

    else
    return fibonacci_recursive(sequence-1)+ fibonacci_recursive(sequence-2);
    
}
