// https://www.codewars.com/kata/5808dcb8f0ed42ae34000031/train/rust


use std::io;
use std::collections::HashMap;

fn switch_it_up(n: usize) -> &'static str {
    let number = HashMap::from([
        (0, "Zero"), (1, "One"), (2, "Two"), (3, "Three"), (4, "Four"),
        (5, "Five"), (6, "Six"), (7, "Seven"), (8, "Eight"), (9, "Nine")
    ]);

    return number.get(&n).unwrap();
}

fn main() {
    let mut line = String::new();

    io::stdin()
        .read_line(&mut line)
        .expect("Failed to read line");

    let n: usize = line
        .trim()
        .parse()
        .expect("Wanted a number");

    println!("{}", switch_it_up(n));

}
