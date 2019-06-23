#include <stdlib.h>
#include <stdio.h>

int main(){
    f(3);
    printf("hello world\n");
}

//Tail recursion is basically when:
//     there is only a single recursive call
//     that call is the last statement in the function
// And it's not "better", except in the sense that a good compiler can remove the recursion, transforming it into a loop. This may be faster and will certainly save on stack usage. The GCC compiler can do thi
// from: https://stackoverflow.com/questions/2693683/tail-recursion-in-c
unsigned int f( unsigned int a ) {
   if ( a == 0 ) {
      return a;
   }
   return f( a - 1 );   // tail recursion
}