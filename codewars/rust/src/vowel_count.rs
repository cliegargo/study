// https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/rust


use std::io;

fn get_count(string: &str) -> usize {
    let mut vowels_count: usize = 0;

    for c in string.chars()  {
        if c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' {
            vowels_count += 1;
        }
    }

    vowels_count
}

fn main() {
    let mut string = String::new();

    io::stdin()
        .read_line(&mut string)
        .expect("Failed to read line");

    println!("{}", get_count(&string));

}
