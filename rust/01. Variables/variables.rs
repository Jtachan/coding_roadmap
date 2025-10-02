
fn main() {
    /* 'let' creates new variables.
      It is not necessary to specify the type (all types have a default value).
      Variables are always immutable.
      */
    let x = 5;
    println!("x has the value {x}");

    // 'mut' defines the variable as mutable (it's value can change).
    let mut y = 3;
    println!("y has the value {y}");
    y = 5;
    println!("Now y has the value {y}");

    /* Variables can be shadowed (redefined with the same name).
       Shadowing a variable modifies its type and value.
    */
    let number = "T-H-R-E-E";
    println!("Spell a number: {number}");

    let number = 3;
    println!("Number plus two is: {}", number + 2);

    // Constants are defined with the 'const' word and their type must always be specified.
    const NUMBER: i32 = 3;
    println!("The define constant has the value {NUMBER}");
}