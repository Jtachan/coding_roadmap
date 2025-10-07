// Function that returns the bigger number among the ones provided.
fn bigger(a: i32, b: i32) -> i32 {
    // Implicit return statements can be defined with conditionals.
    if a > b {
        a
    } else {
        b
    }
}

// The return type of function must always be a single type. It cannot be either type A or type B
fn picky_eater(food: &str) -> &str {
    if food == "strawberry" {
        "Yummy!"
    } else if food == "potato" {
        "I guess I can eat that."
    } else {
        "No thanks!"
    }
}

fn animal_habitat(animal: &str) -> &str {
    let identifier = if animal == "crab" {
        1
    } else if animal == "gopher" {
        2
    } else if animal == "snake" {
        3
    } else {
        0
    };

    if identifier == 1 {
        "Beach"
    } else if identifier == 2 {
        "Burrow"
    } else if identifier == 3 {
        "Desert"
    } else {
        "Unknown"
    }
}

fn main() {
    // Conditionals on 'bigger' function
    assert_eq!(10, bigger(10, 8));
    assert_eq!(42, bigger(32, 42));
    assert_eq!(42, bigger(42, 42));
    // conditionals on 'picky_eater'
    assert_eq!(picky_eater("strawberry"), "Yummy!");
    assert_eq!(picky_eater("potato"), "I guess I can eat that.");
    assert_eq!(picky_eater("broccoli"), "No thanks!");
    //
    assert_eq!(animal_habitat("gopher"), "Burrow");
    assert_eq!(animal_habitat("snake"), "Desert");
    assert_eq!(animal_habitat("crab"), "Beach");
    assert_eq!(animal_habitat("dinosaur"), "Unknown");
}
