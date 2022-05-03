// https://www.codewars.com/kata/5208f99aee097e6552000148/train/rust

use std::io;
use regex::Regex;

fn solution(s: &str) -> String {
	let camel = Regex::new(r"^[a-z$]+").unwrap()
		.find(s).unwrap()
		.as_str();

	let mut case = String::new();

	for i in Regex::new(r"[A-Z][a-z]+").unwrap().find_iter(s) {
		case.push_str(&format!("{} ", i.as_str()));
	}

	format!("{} {}", &camel, &case.trim()).to_string()
}

fn main() {
	let mut s = String::new();

	io::stdin()
		.read_line(&mut s)
		.expect("Failed to read line");

	println!("{}", solution(&s));
}