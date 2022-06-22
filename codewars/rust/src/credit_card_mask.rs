// https://www.codewars.com/kata/5412509bd436bd33920011bc/train/rust

use std::io;

fn maskify(cc: &str) -> String {
	if cc.len() >= 5 {
		let pos = cc.len() - 4;
		format!("{}{}", "#".repeat(pos), &cc[pos..])
	} else {
		cc.to_string()
	}
}

fn main() {
	let mut cc = String::new();

	io::stdin()
		.read_line(&mut cc)
		.expect("Failed to read line");

	println!("{}", maskify(&cc));
}