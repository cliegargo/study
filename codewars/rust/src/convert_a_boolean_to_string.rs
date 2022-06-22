// https://www.codewars.com/kata/551b4501ac0447318f0009cd/train/rust

use std::io;

fn boolean_to_string(b: bool) -> String {
	b.to_string()
}

fn main() {
	let mut s = String::new();
	io::stdin()
		.read_line(&mut s)
		.expect("Failed to read line");

	let b: bool = s.trim().parse().expect("Please type a number");

	println!("{}", boolean_to_string(b));
}