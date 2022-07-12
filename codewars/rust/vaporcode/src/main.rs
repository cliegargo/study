// https://www.codewars.com/kata/5966eeb31b229e44eb00007a/train/rust


use std::io;

fn vaporcode(s: &str) -> String {
    s.to_uppercase().replace(" ", "").replace("", "  ").trim().to_string()
}

fn main() {
    let mut s = String::new();

    io::stdin()
        .read_line(&mut s)
        .expect("Failed to read line");

    println!("{}", vaporcode(&s));
}
