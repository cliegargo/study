use std::io;
use regex::Regex;

fn validate_pin(pin: &str) -> bool {
	let re = Regex::new(r"^\d{4}$|^\d{6}$").unwrap();
	re.is_match(pin)
}

fn main() {
	let mut pin = String::new();

	io::stdin()
		.read_line(&mut pin)
		.expect("Failed to read line");

	println!("{}", validate_pin(&pin));
}