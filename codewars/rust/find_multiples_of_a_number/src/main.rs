// https://www.codewars.com/kata/58ca658cc0d6401f2700045f/train/rust

use std::io;

fn find_multiples(n: u32, limit: u32) -> Vec<u32> {
	let m = (n..limit+1).collect::<Vec<u32>>()
		.iter()
		.map(|&x| x)
		.filter(|&x| x % n == 0)
		.collect::<Vec<u32>>().to_vec();

	m.to_vec()
}

fn main() {
	let mut v: Vec<u32> = vec![];
	for _ in 0..2 {
		let mut i = String::new();
		io::stdin()
			.read_line(&mut i)
			.expect("Failed to read line");
		let i: u32 = i.trim().parse().expect("Please  type a number");
		v.push(i);
	}

	println!("{:?}", find_multiples(v[0], v[1]));
}