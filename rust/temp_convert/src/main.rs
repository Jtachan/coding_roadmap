use std::io;

fn fahrenheit_to_celsius(fahrenheit: f32) {
    let celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    println!("Your temperature in Celsius is {celsius} °C");
}

fn celsius_to_fahrenheit(celsius: f32) {
    let fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    println!("Your temperature in Fahrenheit is {fahrenheit} °F");
}

fn main() {
    let temperature: f32 = {
        let mut temp = String::new();
        println!(
            "Please enter the temperature (Fahrenheit or Celsius) to convert. Enter only the number"
        );
        io::stdin()
            .read_line(&mut temp)
            .expect("Failed to read the temperature!");
        temp.trim().parse().expect("Invalid temperature")
    };

    loop {
        let mut choice = String::new();
        println!(
            "Input the number of your choice:\n\t1. Fahrenheit -> Celsius\n\t2. Celsius -> Fahrenheit\n"
        );

        io::stdin()
            .read_line(&mut choice)
            .expect("Failed to read line!");
        let choice: u32 = match choice.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Invalid choice.");
                continue;
            }
        };

        if choice == 1 {
            fahrenheit_to_celsius(temperature);
        } else if choice == 2 {
            celsius_to_fahrenheit(temperature)
        } else {
            println!("Invalid choice.");
            continue;
        }
        break;
    }
}
