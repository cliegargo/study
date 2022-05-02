// https://www.codewars.com/kata/526571aae218b8ee490006f4/train/rust


use std::io;

fn count_bits(n: i64) -> u32 {
    let bits = format!("{:b}", n);

    let mut count: u32 = 0;

    for i in bits.chars() {
        if i == '1' {
            count += 1;
        }
    }

    count
}

fn main() {
    let mut line = String::new();

    io::stdin()
        .read_line(&mut line)
        .expect("Failed to read line");

    let n: i64 = line.trim().parse().expect("Failed to parse");

    println!("{}", count_bits(n));

}
