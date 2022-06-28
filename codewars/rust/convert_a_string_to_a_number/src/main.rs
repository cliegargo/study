// https://www.codewars.com/kata/544675c6f971f7399a000e79/train/rust


use std::io;

fn string_to_number(s: &str) -> i32 {
    s.trim().parse().expect("Failed to parse")
}

fn main() {
    let mut s = String::new();

    io::stdin()
        .read_line(&mut s)
        .expect("Failed to read line");

    println!("{}", string_to_number(s));
}
