#resource/book
[Date :: 05-27-2025]
# Chapter 2 - Objects, Functions, and Types

- there are only two types in C: objects and functions
- variables are a type of object
- variable = (object with a named identifier)
- an object is storage, to be precise...
    - data storage in the execution environment, the contents of which can be interpreted as having a particular type
- why is writing type specifiers so important?
    - for example, the number 1 is represented in the IEEE standard for Floating-Point arithmetic by the bit pattern '0x3f800000' (IEEE 754-2019) but if you were to represent this as an integer, you would get the number '1,065,353,216' instead of '1'
- page 15: ***readable and understandable code is less likely to have defects***
- objects have a storage duration that determine their lifetime (did not know this), this can also be referring to 'scope'
- most of the times, an object is allocated 'automatic storage duartion'
- (*) is known as the indirection or unary operator

- pa = pb // replaces the value of pa with the value of pb
- *pa = *pb // replaces the address of pa with the address of pb
- (&) is known as the 'address-of' operator
- &pa // for example, will generate a pointer to its operand

- here are all the object-types:
    - boolean
    - char
    - arithmetic:
        - int
        - float
        - enum
    - void
    - function
    - pointer
    - array
    - struct
    - union
    - tags // the identifiable name for types (enum, struct, union)
    - const
    - volatile
    - restrict

- you can use 'typedef' to make your own types
- Ex.
- typedef unsigned int ui
- ui num // this is an unsigned int

- the int type is typically assigned the natural width suggested by the architecture of the execution environment (for example: 16 bits on a 16-bit architecture and 32 bits on a 32 bit and 64 bits on a 64...etc)
- you can actually specify the width of an integer using the <stdint.h> or <inttypes.h> and writing something like 'uint32_t' instead of 'int'

- an enum allows you to define a type that assigns names to integers
    - Ex.
    - enum day {sun, mon, tue, wed, thu, fri, sat};
    - enum months {jan = 1, feb, mar, apr, may = 5...}
    - if you do not specify a number, it starts at 0 and counts up ++
    
    - you should always specific a type for enums
    - Ex.
    - enum day : unsigned int {...}

- read about a 'restrict-qualified-pointer' here [[restrict.c]]
