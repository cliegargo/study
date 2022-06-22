// https://www.codewars.com/kata/557cd6882bfa3c8a9f0000c1/train/rust

use std::io;

fn get_age(age: &str) -> u32 {
	let age = age.chars().nth(0).unwrap().to_string()
		.trim().parse().expect("X");
	
	age
}

fn main() {
	let mut age = String::new();

	io::stdin()
		.read_line(&mut age)
		.expect("Failed to read line");

	println!("{}", get_age(&age));
}