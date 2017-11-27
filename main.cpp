/**< Patrick Roche
Exercise 12
Complex Number Calculations
 */

 /**< Preprocessor Directives */
#include <iostream>

/**< A Structure to store the real and imaginary values all together */
struct complexnumber
{
    float real;
    float imag;
};
/**< User-defined functions with 2 complex number structures as inputs and 1 compllex number as an output */
complexnumber add(complexnumber struct1, complexnumber struct2);
complexnumber subtract(complexnumber struct1, complexnumber struct2);
complexnumber multiply(complexnumber struct1, complexnumber struct2);
complexnumber divide(complexnumber struct1, complexnumber struct2);

using namespace std;


/**< Main Function */
int main()
{
    /**< Defines variables as a structure of the form of complex number */
    struct complexnumber entry1, entry2, sum, sub, mul, div;

    /**< entering a real number */
    cout << "Enter a Real number: " << endl;
    cin >> entry1.real;

    /**< entering an imaginary nnumber */
    cout << "Enter an Imaginary number: " << endl;
    cin >> entry1.imag;

    cout << "Enter another Real number: " << endl;
    cin >> entry2.real;

    cout << "Enter another Imaginary number: " << endl;
    cin >> entry2.imag;

    /**< Adds complex numbers "entry1" and "entry2" and returns the structure as "sum" */
    sum = add(entry1, entry2);

    /**< if the imaginary part is positive, then add a "+". If its negative, dont add anything because
    it will add the "-" sign anyway */
    if(sum.imag >= 0)
    {
        /**< EG- (1+2j) */
        cout << "Sum is " << sum.real << "+" << sum.imag << "j" << endl;
    }
    else
    {
        cout << "Sum is " << sum.real << sum.imag << "j" << endl;
    }

     /**< Subtracts complex numbers "entry1" and "entry2" and returns the structure as "sum" */
    sub = subtract(entry1, entry2);

    /**< if the imaginary part is positive, then add a "+". If its negative, dont add anything because
    it will add the "-" sign anyway */
    if(sub.imag >= 0)
    {
        cout << "Subtraction is " << sub.real << "+" << sub.imag << "j" << endl;
    }
    else
    {
        cout << "Subtraction is " << sub.real << sub.imag << "j" << endl;
    }

    /**< Multiples complex numbers "entry1" and "entry2" and returns the structure as "sum" */
    mul = multiply(entry1, entry2);

    /**< if the imaginary part is positive, then add a "+". If its negative, dont add anything because
    it will add the "-" sign anyway */
    if(mul.imag >= 0)
    {
        cout << "Multiplaction is " << mul.real << "+" << mul.imag << "j" << endl;
    }
    else
    {
        cout << "Multiplaction is " << mul.real << mul.imag << "j" << endl;
    }

    /**< Divides complex numbers "entry1" and "entry2" and returns the structure as "sum" */
    div = divide(entry1, entry2);

    /**< if the imaginary part is positive, then add a "+". If its negative, dont add anything because
    it will add the "-" sign anyway */
    if(div.imag >= 0)
    {
        cout << "Division is " << div.real << "+" << div.imag << "j" << endl;
    }
    else
    {
        cout << "Division is " << div.real << div.imag << "j" << endl;
    }

    return 0;
}

/**< User-defined function with 2 complex number structures as inputs and 1 complex number as an output */
complexnumber add(complexnumber struct1, complexnumber struct2)
{
    /**< A structure for addition (1+2j) + (1+2j) */
    struct complexnumber Sum;

    /**< the real numbers */
    Sum.real = struct1.real + struct2.real;
    /**< the imaginary numbers */
    Sum.imag = struct1.imag + struct2.imag;

    return Sum;
}

/**< User-defined function with 2 complex number structures as inputs and 1 compllex number as an output */
complexnumber subtract(complexnumber struct1, complexnumber struct2)
{
    /**< A structure for subrtaraction (1+2j) - (1+2j) */
    struct complexnumber Sub;

    Sub.real = struct1.real - struct2.real;
    Sub.imag = struct1.imag - struct2.imag;

    return Sub;
}

/**< User-defined function with 2 complex number structures as inputs and 1 compllex number as an output */
complexnumber multiply(complexnumber struct1, complexnumber struct2)
{
    /**< A structure for Multiplying (1+2j) x (1+2j) */
    struct complexnumber Mul;

    /**< eg - (1+2j)(1+2j)= 1*1 + 1*2j + 2j*1 + 2j*2j
                          = 1-4+2j+2j
                          = -3+4j
            j*j = -1 so therfore turns into a real number*/
    Mul.real = struct1.real*struct2.real - struct1.imag*struct2.imag;
    Mul.imag = struct1.imag*struct2.real + struct1.real*struct2.imag;

    return Mul;
}

/**< User-defined function with 2 complex number structures as inputs and 1 compllex number as an output */
complexnumber divide(complexnumber struct1, complexnumber struct2)
{
    /**< A structure for Division (1+2j)/(1+2j) */
    struct complexnumber Div;
    /**< The bottom part of the sum */
    float denominator;

    /**< eg - 1+2j/1+3j . The bottom will become 1-3j as its the complex conjugate, then its top row mutiplied out
                           and bottom row multiplied out. */
    Div.real = struct1.real*struct2.real + struct1.imag*struct2.imag;
    Div.imag = struct1.imag*struct2.real - struct1.real*struct2.imag;
    denominator = struct2.real*struct2.real + struct2.imag*struct2.imag;
    Div.real = Div.real/denominator;
    Div.imag = Div.imag/denominator;

    return Div;
}
