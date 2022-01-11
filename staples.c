 
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    typedef struct _INFO
    {
         char s;
         struct _INFO *next;
    }INFO;
    typedef INFO *STACK;
     
    int Push( STACK *stack, char s )
    {
        INFO *temp = (INFO*)malloc( sizeof(INFO));
        temp->s = s;
        if( !temp ) return 1;
        if( !*stack )
           temp->next = NULL;
        else
            temp->next = *stack;
        *stack = temp;
        return 0;
    }
    int Pop( STACK *stack, char *s )
    {
        if( !*stack ) return 1;
        INFO *temp = *stack;
        *s = temp->s;
        *stack = temp->next;
        free( temp );
        return 0;
     
    }
    int main( int argc, char *argv[] )
    {
        STACK head = NULL;
        bool flag = true;
        printf( "Введите строку из скобок (){}[]\n" );
        char s, s_1;
        while( (s = getchar()) != '\n')
        {
            if( s == '('  || s == '{' || s == '[' )
            {
               Push( &head, s );
            }
            if(  s == ')' || s == '}' || s == ']'  )
            {
                if( !head ) { flag = false; break; }
     
                     if ( head->s == '(' && s == ')' ) Pop( &head, &s_1 );
                else if ( head->s == '[' && s == ']' ) Pop( &head, &s_1 );
                else if ( head->s == '{' && s == '}' ) Pop( &head, &s_1 );
            }
        }
        if(  !head  && flag)
            printf( "Правильная скобочная последовательность\n" );
        else
            printf( "Неправильная скобочная последовательность.\n" );
        return 0;
    }