// https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/rust

fn create_phone_number(numbers: &[u8]) -> String {
	let mut phone_number = String::from("(");

	for (i, j) in numbers.iter().enumerate() {
		phone_number.push_str(&j.to_string());
		if i == 2 {
			phone_number.push_str(") ");
		} else if i == 5 {
			phone_number.push_str("-");
		}
	}

	phone_number
}

fn main() {
	println!("{}", create_phone_number(&[1, 2, 3, 4, 5, 6, 7, 8, 9, 9]));
}