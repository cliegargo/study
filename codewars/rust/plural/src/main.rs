// https://www.codewars.com/kata/52ceafd1f235ce81aa00073a/train/rust

use std::io;

fn plural (n: f64) -> bool {
	if n < 1.0 || n > 1.0 {
		true
	} else {
		false
	}
}

fn main() {
	let mut n = String::new();

	io::stdin()
		.read_line(&mut n)
		.expect("Failed to read line");

	let n: f64 = n.trim().parse().expect("Please type a number");

	println!("{}", plural(n));
}