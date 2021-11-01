/*
2) You need to implement a RECURSIVE variadicHelper Function and a Wrapper class.

Here is an example of a non-templated recursive function so you know generally how recursive functions work:
*/
#include <iostream>
namespace RecursiveExample
{
    void func(int i)
    {
        std::cout << "i: " << i << std::endl;
        
        if( i > 0 )
        {
            func(i-1); //calling itself with an updated value based on the input
        }
        
        std::cout << "done!" << std::endl;
    }
    
    int main()
    {
        func(5);
        return 0;
    } 
}

/*
 3) your variadicHelper function needs to be a Recursive Variadic Template Function.
    The recursion works by removing the first element from the Variadic Template Parameter Pack, doing something with it, and calling VariadicHelper with the rest of the Pack.
 
 the general format of a recursive variadic templated function is:
 */

template<typename T, typename ...Args>
void funcName(T first, Args ... everythingElse)
{
    funcName( everythingElse... ); //recursive call
}

/*
 T is the first element removed from the Args parameter pack when the template is called from inside it's own function body.
 
 In the body of the function, you'll do something with 'first', before recursing with the remaining template arguments
 
 When the function is called with only one parameter in the parameter pack, the compiler will look for a version of the function that has 1 template parameter.  The variadic function template above takes a minimum of 2 parameters.
 
 4) You'll need to write this single-template-parameter version of variadicHelper along with the variadic-template version of VariadicHelper.
 */

/*
 5) add a print() function to the Wrapper stub.
    if the first parameter of variadicHelper is a double with a value of 3.5, the print() function should print out: 
    "Wrapper::print(3.5)"
 
 6) make the body of both variadicHelper functions instantiate a Wrapper instance, which wraps the first function argument, and call the 'print()' member function of the Wrapper class:
 */

 // Wrapper(first).print();

/*
 7) Then, recursively call VariadicHelper
 
 8) You will need to specialize the Wrapper class template to work with the Point class.
    I'm expecting to see a separate class definition entirely, like you did with the Numeric<double> in project 4.
 
 9) be sure to forward your variadicHelper function arguments correctly and use Forwarding/R-Value references, as opposed to passing by const-ref or by copy.
 */
