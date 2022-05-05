//https://www.codewars.com/kata/57eae20f5500ad98e50002c5/train/rust

use std::io;

fn no_space(x : String) -> String{
	x.replace(" ", "").to_string()
}

fn main() {
	let mut x = String::new();

	io::stdin()
		.read_line(&mut x)
		.expect("Failed to read line");

	println!("{}", no_space(x));
}