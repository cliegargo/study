// https://www.codewars.com/kata/59706036f6e5d1e22d000016/train/rust


use std::io;
use std::collections::HashMap;

fn words_to_marks(s: &str) -> u32 {
    let alphabet = HashMap::from([
        ('a', 1), ('b', 2), ('c', 3), ('d', 4), ('e', 5),
        ('f', 6), ('g', 7), ('h', 8), ('i', 9), ('j', 10),
        ('k', 11), ('l', 12), ('m', 13), ('n', 14), ('o', 15),
        ('p', 16), ('q', 17), ('r', 18), ('s', 19), ('t', 20),
        ('u', 21), ('v', 22), ('w', 23), ('x', 24), ('y', 25),
        ('z', 26)
    ]);

    let mut mark: u32 = 0;

    for c in s.chars() {
        if alphabet.contains_key(&c) {
            mark += alphabet.get(&c).unwrap();
        }
    }

    mark
}

fn main() {
    let mut s = String::new();

    io::stdin()
        .read_line(&mut s)
        .expect("Failed to read line");

    println!("{}", words_to_marks(&s));
}
