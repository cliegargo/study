// https://www.codewars.com/kata/58539230879867a8cd00011c/train/rust


use std::io;
use std::collections::HashMap;

fn find_children(dancing_brigade: &str) -> String {
	let ascii = HashMap::<char, f32>::from([
		('A', 65.0), ('a', 65.5), ('B', 66.0), ('b', 66.5),
		('C', 67.0), ('c', 67.5), ('D', 68.0), ('d', 68.5),
		('E', 69.0), ('e', 69.5), ('F', 70.0), ('f', 70.5),
		('G', 71.0), ('g', 71.5), ('H', 72.0), ('h', 72.5),
		('I', 73.0), ('i', 73.5), ('J', 74.0), ('j', 74.5),
		('K', 75.0), ('k', 75.5), ('L', 76.0), ('l', 76.5),
		('M', 77.0), ('m', 77.5), ('N', 78.0), ('n', 78.5),
		('O', 79.0), ('o', 79.5), ('P', 80.0), ('p', 80.5),
		('Q', 81.0), ('q', 81.5), ('R', 82.0), ('r', 82.5),
		('S', 83.0), ('s', 83.5), ('T', 84.0), ('t', 84.5),
		('U', 85.0), ('u', 85.5), ('V', 86.0), ('v', 86.5),
		('W', 87.0), ('w', 87.5), ('X', 88.0), ('x', 88.5),
		('Y', 89.0), ('y', 89.5), ('Z', 90.0), ('z', 90.5),
	]);

	let mut values = Vec::<f32>::new();

	for c in dancing_brigade.trim().chars() {
		values.push(*ascii.get(&c).unwrap());
	}

	values.sort_by(|a, b| a.partial_cmp(b).unwrap());

	let mut mother_child = String::new();

	for i in values {
		if i.to_string().len() == 4 {
			mother_child.push(((i + 32.0) as u8) as char);
		} else {
			mother_child.push((i as u8) as char);
		}
	}

	mother_child
}

fn main() {
	let mut dancing_brigade = String::new();

	io::stdin()
		.read_line(&mut dancing_brigade)
		.expect("Failed to read line");

	println!("{}", find_children(&dancing_brigade));
}

