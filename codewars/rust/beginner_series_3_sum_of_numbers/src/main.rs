// https://www.codewars.com/kata/55f2b110f61eb01779000053/train/rust


use std::io;

fn get_sum(a: i64, b: i64) -> i64 {
	let max: i64 = if a > b {a} else {b};
	let min: i64 = if a < b {a} else {b};

	(min..=max).collect::<Vec<i64>>().iter().sum()
}


fn main() {
	let mut a = String::new();
	let mut b = String::new();

	io::stdin()
		.read_line(&mut a)
		.expect("Failed to rea line");

	io::stdin()
		.read_line(&mut b)
		.expect("Failed to read line");

	let a: i64 = a.trim().parse().expect("Not an integer");
	let b: i64 = b.trim().parse().expect("Not an integer");

	println!("{}", get_sum(a, b));
}
