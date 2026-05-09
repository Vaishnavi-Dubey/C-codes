// In C and C++ internally the default type of 'var' is int
enum VARS {
    var = 42
};

// In C++ 11 (can have any integral type):
enum : type {
    var = 42;
}

// where mytype = int, char, long etc.
// but it can't be float, double or
// user defined data type.
