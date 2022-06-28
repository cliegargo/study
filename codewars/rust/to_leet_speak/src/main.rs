// https://www.codewars.com/kata/57c1ab3949324c321600013f/train/rust


use std::io;
use std::collections::HashMap;

fn to_leet_speak(s: &str) -> String {
    let alphabet = HashMap::from([
        ('A', "@"), ('B', "8"), ('C', "("), ('D', "D"), ('E', "3"), ('F', "F"),
        ('G', "6"), ('H', "#"), ('I', "!"), ('J', "J"), ('K', "K"), ('L', "1"),
        ('M', "M"), ('N', "N"), ('O', "0"), ('P', "P"), ('Q', "Q"), ('R', "R"),
        ('S', "$"), ('T', "7"), ('U', "U"), ('V', "V"), ('W', "W"), ('X', "X"),
        ('Y', "Y"), ('Z', "2")
    ]);

    let mut leetspeak = String::new();

    for c in s.to_string().chars() {
        if alphabet.contains_key(&c) {
            leetspeak.push_str(alphabet.get(&c).unwrap());
        } else {
            leetspeak.push_str(&c.to_string());
        }
    }

    leetspeak.to_string()
}

fn main() {
    let mut s = String::new();

    io::stdin()
        .read_line(&mut s)
        .expect("Failed to read line");

    println!("{}", to_leet_speak(&s));
}
