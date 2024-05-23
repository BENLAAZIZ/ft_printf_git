# ft_printf
For the ft_printf project of the 42 school cursus, we are tasked with recreating the renowned C library function, printf. This project not only challenges us to understand and implement variadic arguments but also to potentially incorporate structures for handling additional flags.

## `Supported Conversions`
The ft_printf function will support the following conversions:

* %c - Prints a single character
* %s - Prints a string
* %p - Prints a pointer address
* %d or %i - Prints a signed integer
* %u - Prints an unsigned integer
* %x or %X - Prints an unsigned integer in hexadecimal format
* %% - Prints a literal percent sign
## `What is ft_printf?`
In programming, regardless of the language, the printf function (or its equivalents) is indispensable due to its versatile formatting capabilities and support for a variety of data types. In this project, we are required to recode printf and integrate it into our libft, ensuring it can be utilized in all our future projects.

The versatility of the printf function in C serves as an excellent programming exercise. It allows us to explore a key feature of the C language—variadic functions—and to practice detailed management of different printing options.

## `Variadic Functions in C`
Variadic functions add flexibility to programs by allowing a function to accept a variable number of arguments. These functions have at least one fixed argument followed by an ellipsis (...) as the last parameter.

**-> Key Methods for Variadic Functions:**

* **va_start(va_list ap, argN)** - Initializes the va_list variable to access variadic function arguments. Here, ap is a pointer to the last fixed argument, argN.
* **va_arg(va_list ap, type)** - Accesses the next variadic function argument. The type specifies the expected data type (e.g., double, int).
* **va_copy(va_list dest, va_list src)** - Creates a copy of the variadic function arguments.
* **va_end(va_list ap)** - Ends the traversal of the variadic function arguments.
By recoding printf, we delve deep into the intricacies of variadic functions and enhance our understanding of memory management, data types, and function implementation in C. This project is a crucial step in building a robust foundation for future advanced programming endeavors.
