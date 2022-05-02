// https://www.codewars.com/kata/50654ddff44f800200000004/train/rust


use std::io;

fn multiply(a:i32, b:i32) -> i32{
	a * b
}

fn main() {
	let mut x = String::new();
	let mut y = String::new();

	io::stdin().read_line(&mut x).expect("Failed to read line.");
	io::stdin().read_line(&mut y).expect("Failed to read line.");
	let a:i32 = x.trim().parse().expect("Input not an integer.");
	let b:i32 = y.trim().parse().expect("Input not an integer.");

	let res = multiply(a, b);
	println!("Output: {}", res);
}
