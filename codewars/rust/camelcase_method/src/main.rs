// https://www.codewars.com/kata/587731fda577b3d1b0001196/train/rust


use std::io;

fn camel_case(str: &str) -> String {
    let mut camel = String::new();

    let words: Vec<&str> = str.trim().split(" ").collect();

    if words[0] == "" {
        return "".to_string();
    }

    for w in words.iter() {
        camel.push_str(&w.chars().nth(0).unwrap().to_string().to_uppercase());
        camel.push_str(&w[1..]);
    }

    camel.to_string()
}

fn main() {
    let mut str = String::new();

    io::stdin()
        .read_line(&mut str)
        .expect("Failed to read line");

    println!("{}", camel_case(&str));
}
