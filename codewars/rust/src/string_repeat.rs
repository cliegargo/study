// https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/rust


use std::io;

fn repeat_str(src: &str, count: usize) -> String {
    let mut rpt_str = String::new();

    for _ in 0..count {
        rpt_str.push_str(src);
    }

    rpt_str
}

fn main() {
    let mut src = String::new();

    io::stdin()
        .read_line(&mut src)
        .expect("Failed to read line");

    let mut count = String::new();

    io::stdin()
        .read_line(&mut count)
        .expect("Failed to read line");
    
    let count: usize = count.trim().parse().expect("Not an integer");

    println!("{}", repeat_str(&src, count))
    
}