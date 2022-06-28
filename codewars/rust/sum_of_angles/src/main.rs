// https://www.codewars.com/kata/5a03b3f6a1c9040084001765/train/rust

use std::io;

fn angle(n: u32) -> u32 {
	(n - 2) * 180
}

fn main() {
	let mut n = String::new();

	io::stdin()
		.read_line(&mut n)
		.expect("Failed to read line");

	let n: u32 = n.trim().parse().expect("Please type a number");

	println!("{}", angle(n));
}