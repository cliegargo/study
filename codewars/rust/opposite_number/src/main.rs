// https://www.codewars.com/kata/56dec885c54a926dcd001095/train/rust


use std::io;

fn opposite(number: i32) -> i32 {
	-number
}

fn main() {
	let mut number = String::new();

	io::stdin()
		.read_line(&mut number)
		.expect("Failed to read line");

	let number: i32 = number.trim().parse().expect("Not an integer");

	println!("{}", opposite(number));
}
