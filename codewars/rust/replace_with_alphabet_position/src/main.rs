// https://www.codewars.com/kata/546f922b54af40e1e90001da/train/rust


use std::io;
use std::collections::HashMap;

fn alphabet_position(text: &str) -> String {
    let alphabet = HashMap::from([
        ('a', "1"), ('b', "2"), ('c', "3"), ('d', "4"), ('e', "5"),
        ('f', "6"), ('g', "7"), ('h', "8"), ('i', "9"), ('j', "10"),
        ('k', "11"), ('l', "12"), ('m', "13"), ('n', "14"), ('o', "15"),
        ('p', "16"), ('q', "17"), ('r', "18"), ('s', "19"), ('t', "20"),
        ('u', "21"), ('v', "22"), ('w', "23"), ('x', "24"), ('y', "25"),
        ('z', "26")
    ]);

    let string = text.to_ascii_lowercase();
    let mut alpha_pos = String::from("");

    for c in string.chars() {
        if alphabet.contains_key(&c) {
            alpha_pos.push_str(alphabet.get(&c).unwrap());
            alpha_pos.push_str(" ");
        }
    }

    return alpha_pos.trim().to_string();
}

fn main() {
    let mut text = String::new();

    io::stdin()
        .read_line(&mut text)
        .expect("Failed to read line");

    println!("{}", alphabet_position(&text));
}
