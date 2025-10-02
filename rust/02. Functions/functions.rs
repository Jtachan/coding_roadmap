// The file always need the 'main' function (no arguments, no return type)
fn main() {
    call_me();
    dial_number(3);

    let num = 3;
    println!("Checking if num={num} is even: {}", is_even(num));
    let num = 6;
    println!("Checking if num={num} is even: {}", is_even(num));

    // The return value of a function can also be used to initialize variables.
    let answer = square(3);
    println!("The square of 3 is {answer}");
}

// Functions are defined with the 'fn' key
fn call_me() {
    println!("Hello there!");
}

// Parameters can be specified for functions, always with their type.
fn dial_number(num: u8) {
    for i in 0..num {
        println!("Ring! Call number {}", i + 1);
    }
}

/* Functions can also return values (typed as '-> ret_type')
   The line that returns the value does not end with ';'
 */
fn is_even(num: i64) -> bool {
    num % 2 == 0
}

fn square(num: i32) -> i32 {
    num * num
}
