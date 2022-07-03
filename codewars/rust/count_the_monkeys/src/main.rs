// https://www.codewars.com/kata/56f69d9f9400f508fb000ba7/train/rust


use std::io;

fn monkey_count(n: i32) -> Vec<i32> {
	(1..=n).collect()
}

fn main() {
	let mut n = String::new();

	io::stdin()
		.read_line(&mut n)
		.expect("Failed to read line");

	let n: i32 = n.trim().parse().unwrap();

	println!("{:?}", monkey_count(n));
}
