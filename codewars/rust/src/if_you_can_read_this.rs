// https://www.codewars.com/kata/586538146b56991861000293/train/rust


use std::collections::HashMap;

fn to_nato(words: &str) -> String {
	let nato = HashMap::from([
		('A', "Alpha"), ('B', "Bravo"), ('C', "Charlie"), ('D', "Delta"),
		('E', "Echo"), ('F', "Foxtrot"), ('G', "Golf"), ('H', "Hotel"),
		('I', "India"), ('J', "Juliett"), ('K', "Kilo"), ('L', "Lima"),
		('M', "Mike"), ('N', "November"), ('O', "Oscar"), ('P', "Papa"),
		('Q', "Quebec"), ('R', "Romeo"), ('S', "Sierra"), ('T', "Tango"),
		('U', "Uniform"), ('V', "Victor"), ('W', "Whiskey"), ('X', "X-ray"),
		('Y', "Yankee"), ('Z', "Zulu")
	]);

	let mut read = "".to_string();

	for c in (words.to_uppercase()).chars() {
		if nato.contains_key(&c) {
			read += nato.get(&c).unwrap();
			read += &' '.to_string();
		} else {
			read += &c.to_string();
		}
	}

	let last = read.chars().last().unwrap();

	if last == ' ' {
		read.pop();
	}

	read.replace("  ", " ")
}

fn main() {
	let words: &str = "If you can read";
	println!("{}", words);
	println!("'{}'", to_nato(&words));
}