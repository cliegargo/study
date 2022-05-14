// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7/train/rust

use std::io;

fn make_upper_case(s: &str) -> String {
	return s.to_uppercase()
}

fn main() {
	let mut s = String::new();
	io::stdin()
		.read_line(&mut s)
		.expect("Failed to read line");

	println!("{}", make_upper_case(&s));
}