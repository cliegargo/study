// https://www.codewars.com/kata/57f75cc397d62fc93d000059/train/rust


use std::io;

fn calc(s: &str) -> u32 {
    let total1: String = s.trim().chars()
        .map(| c | (c as u32)
        .to_string())
        .collect();

    let total2 = total1.replace("7", "1");

    let total1: u32 = total1.trim().chars().map(|c| c as u32).sum();
    let total2: u32 = total2.trim().chars().map(|c| c as u32).sum();

    if total1 >= total2 {
        total1 - total2
    } else {
        total2 - total1
    }
}

fn main() {
    let mut s = String::new();

    io::stdin()
        .read_line(&mut s)
        .expect("Faile to read line");

    println!("{}", calc(&s));
}
