// https://www.codewars.com/kata/5264d2b162488dc400000001/train/rust


use std::io;

fn spin_words(words: &str) -> String {
	let mut spun = String::new();

	for s in words.split(' ') {
		if s.len() >= 5 {
			spun.push_str(
				&format!("{} ", &s
					.trim()
					.chars()
					.rev()
					.map(|c| c.to_string())
					.collect::<Vec<String>>()
					.join("")
				)
			);
		} else {
			spun.push_str(&format!("{} ", s));
		}
	}

	spun.trim().to_string()
}

fn main() {
	let mut words = String::new();

	io::stdin()
		.read_line(&mut words)
		.expect("Failed to read line ");

	println!("{}", spin_words(&words));
}
