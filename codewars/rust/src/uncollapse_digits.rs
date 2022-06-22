// https://www.codewars.com/kata/5a626fc7fd56cb63c300008c/train/rust

use std::io;
use regex::Regex;

fn uncollapse(digits: &str) -> String {
	let re = Regex::new(r"zero|one|two|three|four|five|six|seven|
		|eight|nine|ten")
		.unwrap();

	let mut uncollapsed = String::new();

	for caps in re.captures_iter(digits) {
		uncollapsed.push_str(&caps[0]);
		uncollapsed.push_str(" ");
	}

	uncollapsed.trim().to_string()
}

fn main() {
	let mut digits = String::new();

	io::stdin()
		.read_line(&mut digits)
		.expect("Failed to read line");

	println!("{}", uncollapse(&digits));
}