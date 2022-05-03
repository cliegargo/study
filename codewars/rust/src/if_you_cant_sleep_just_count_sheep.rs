// https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/train/rust

use std::fmt::format;
use std::io;

fn count_sheep(n: u32) -> String {
	let mut sheep = String::new();

	for i in 1..n+1 {
		sheep += &format!("{} sheep...", i);
	}
	
	sheep
}

fn main() {
	let mut n = String::new();

	io::stdin()
		.read_line(&mut n)
		.expect("Failed to read line");

	let n: u32 = n.trim().parse().expect("Please type a number");

	println!("{}", count_sheep(n));
}