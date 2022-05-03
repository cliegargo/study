// https://www.codewars.com/kata/513e08acc600c94f01000001/train/rust

use std::fmt::format;
use std::io;
use std::collections::HashMap;

fn convert(x: i32) -> String {
	let hexa = HashMap::from([
		(10, "A"), (11, "B"), (12, "C"), (13, "D"), (14, "E"), (15, "F")
	]);
	
	let mut hex = String::new();

	if x > 255 {
		hex.push_str("FF");
	} else if x <= 255 {
		let mut y = x / 16;
		let mut z = (((x as f64 / 16.00) - y as f64) * 16.00) as i32;

		if hexa.contains_key(&y) {
			hex.push_str(hexa.get(&y).unwrap());
		} else {
			if y <= 0 {
				y = 0;
			}
			hex.push_str(&y.to_string());
		}

		if hexa.contains_key(&z) {
			hex.push_str(hexa.get(&z).unwrap());
		} else {
			if z <= 0 {
				z = 0;
			}
			hex.push_str(&z.to_string());
		}
	}

	hex
}

fn rgb(r: i32, g: i32, b: i32) -> String {
	println!("{}, {}, {}", r, g, b);
	format!("{}{}{}", convert(r), convert(g), convert(b)).to_string()
}

fn main() {
	let mut v: Vec<i32> = vec![];
	for _ in 0..3 {
		let mut i = String::new();
		io::stdin()
			.read_line(&mut i)
			.expect("Failed to read line");
		let i: i32 = i.trim().parse().expect("Please  type a number");
		v.push(i);
	}

	println!("{}", rgb(v[0], v[1], v[2]));
}