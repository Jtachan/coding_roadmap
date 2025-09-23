fn main() {
    /* -------------------------------
        VARIABLES AND MUTABILITY
        ------------------------------- */
    // Creating an inmutable variable (its value cannot change)
    let x = 5;
    println!("\nThe value of x is: {x}");
    // Creating a mutable variable (its value can be changed)
    let mut x = x + 1;
    println!("The new value of x is {x}. This has shadowed the previous x variable.");
    x = 6;
    println!("\nNow its value is {x}");
    {
        // Now x shadows the other variable with the same name, but only for the inner scope
        let x = x * 2;
        println!("The value of x in the inner scope is: {x}");
    }
    println!("The value of x (outer scope again) is: {x}");

    // Shadowing allows to change the type. The variable MUST be shadowed, it cannot just be a mutable variable
    let spaces = "   ";  // Type string
    let spaces = spaces.len();  // Type integer

    // Constants are defined with the 'const'
    const THREE_HOURS_IN_SECONDS: u32 = 60 * 60 * 3;
    println!("\nThree hours have {THREE_HOURS_IN_SECONDS} seconds");

    /* Types: they can be specified as 'let var: type = ...'
        The types are analogous to c/c++:
        - 'u' for unsigned, 'i' for signed
        - bit length goes from 8 to 128: [8, 16, 32, 64, 128]
        Then, for example, a variable 'u8' host values from 0 to 255

        There is also the architecture type, which depends on the computer architecture (64bits or 32bits)
        - isize / usize

        Analogous to Python, the underscore '_' can be used to separate digits.
        - Decimal	98_222
        - Hex	0xff
        - Octal	0o77
        - Binary	0b1111_0000
        - Byte (u8 only)	b'A'

        Floating primitive types are f32 and f64 (default).
        The numeric operators are the same as in other languages.
        Booleans are also the same as in c++.

        The char type is a single character defined among simple quotes ' '. This can be useful for unicode scalar values.
     */

    // Rust has tuples just like python, they are defined by defining the types of the elements it contains:
    let tup: (i32, f64, u8) = (500, 6.4, 1);
    // And just like in Python, the values can be extracted.
    let (x, y, z) = tup;
    println!("The value of y (extracted from the tuple) is: {y}");

    // The arrays must have all elements of the same type. The type hint is defined as [type; len]
    let arr: [u8; 5] = [1, 2, 3, 4, 5];
    // Accessing the elements works just like in other languages (0-indexed)
    let first = arr[0];
    println!("The value of the first element: {first}");

    println!("");
}
