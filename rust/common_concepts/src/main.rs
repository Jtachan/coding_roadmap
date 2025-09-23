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

    println!("");
}
