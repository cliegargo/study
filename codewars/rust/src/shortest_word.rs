// https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/rust


use std::io;

fn find_short(s: &str) -> u32 {
    let words: Vec<&str> = s.split(" ").collect();
    let mut count: Vec<usize> = Vec::new();

    for i in words.iter() {
        count.push(i.len());
    }

    let min = count.iter().min().unwrap();
    *min as u32
}

fn main() {
    let mut s = String::new();

    io::stdin()
        .read_line(&mut s)
        .expect("Failed to read line");

    println!("{}", find_short(&s));
}
