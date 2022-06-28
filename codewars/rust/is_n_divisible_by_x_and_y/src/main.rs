// https://www.codewars.com/kata/5545f109004975ea66000086/train/rust


use std::io;

fn is_divisible(n:i32, x:i32, y:i32) -> bool {
	if n % x == 0 && n % y == 0 {
		return true;
	} else {
		return false;
	}
}

fn main() {
	let mut var1 = String::new();
	let mut var2 = String::new();
	let mut var3 = String::new();

	io::stdin().read_line(&mut var1).expect("Failed to read line.");
	io::stdin().read_line(&mut var2).expect("Failed to read line.");
	io::stdin().read_line(&mut var3).expect("Failed to read line.");
	let n:i32 = var1.trim().parse().expect("Input not an integer.");
	let x:i32 = var2.trim().parse().expect("Input not an integer.");
	let y:i32 = var3.trim().parse().expect("Input not an integer.");

	let res = is_divisible(n, x, y);
	println!("{}", res);
}
