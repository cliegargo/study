// https://www.codewars.com/kata/56541980fa08ab47a0000040/train/rust


use std::io;

fn printer_error(s: &str) -> String {
    let colour: Vec<char> = ('n'..='z').collect();

    let mut error = 0;

    for c in s.trim().chars() {
        if colour.contains(&c) {
            error += 1;
        }
    }

    format!("{}/{}", error, s.trim().len()).to_string()
}

fn main() {
    let mut s = String::new();

    io::stdin()
        .read_line(&mut s)
        .expect("Failed to read line");

    println!("{}", printer_error(&s));
}