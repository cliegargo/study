// https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/rust


use std::io;

fn set_alarm(employed: bool, vacation: bool) -> bool {
	if employed == true && vacation == false { true } else { false }
}


fn main() {
	let mut employed = String::new();
	let mut vacation = String::new();

	io::stdin()
		.read_line(&mut employed)
		.expect("Failed to read line");

	io::stdin()
		.read_line(&mut vacation)
		.expect("Failed to read line");

	let employed = employed.trim().parse().unwrap();
	let vacation = vacation.trim().parse().unwrap();

	println!("{}", set_alarm(employed, vacation));
}
