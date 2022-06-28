// https://www.codewars.com/kata/596c6eb85b0f515834000049/train/rust


use std::io;
use regex::Regex;

fn replace_dots(s: &str) -> String {
	Regex::new(r"[.]").unwrap().replace_all(s, "-").to_string()
}

fn main() {
	let mut s = String::new();

	io::stdin()
		.read_line(&mut s)
		.expect("Failed to read line");

	println!("{}", replace_dots(&s));
}