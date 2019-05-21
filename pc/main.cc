/**
 * \brief simple application to test the C++ toolchain
 *
 * \file main.cc
 * \author Matthias Kleemann
 */
#include <stdio.h>
#include "../mycpplib/CLed.hh"
#include "../mycpplib/test.hh"
/**
 * \brief main loop
 */
int main(void)
{
   hej();
   CLed t;
   t.DoStuff();
   printf("PC - lol\n\r");
}
