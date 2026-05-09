//generic function
//1. generic functions defines a general set of operations that will be applied
//to various type of data. the type of data that the function will
//operate upon is passed to it as a parameter.
//2. Through a generic function, a single general procedure can be applied
//to wide range of data.
//3. in essence, when you create a generic funtion you creating a function
//that can automatically overload itself.
//4. a generic-function is created using the keyword "template"
//5. the general form of template function definition is shown here :-
// template <typename Ttype> ret_type function_name (para list)
// {
//  ....
// }


#include<iostream>

using namespace std;

template<typename t>
void sum(t a, t b) {
    cout << "sum =" << a + b << endl;
}

main() {
    int a, b;
    double c, d;

    cin >> a >> b >> c >> d;

    sum(a, b);
    sum(c, d);
}


//5. here Ttype is placeholder name for a data type used by the function
//this name may be used within the function definition.
//6. however, it is only a placeholder that the compiler will automatically
//replace with an actual data type when it creates a specific version of the funtion.