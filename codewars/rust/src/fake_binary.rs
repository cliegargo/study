// https://www.codewars.com/kata/57eae65a4321032ce000002d/train/rust


use std::io;

fn fake_bin(s: &str) -> String {
    let mut fake = String::new();

    for c in s.trim().chars() {
        if c.to_digit(10).unwrap() < 5 {
            fake.push_str("0");
        } else {
            fake.push_str("1");
        }
    }

    fake
}

fn main() {
    let mut s = String::new();

    io::stdin()
        .read_line(&mut s)
        .expect("Failed to read line");

    println!("{}", fake_bin(&s));
}
