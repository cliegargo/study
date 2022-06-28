// https://www.codewars.com/kata/58261acb22be6e2ed800003a/train/rust

use std::io;

fn get_volume_of_cuboid(length: f32, width: f32, height: f32) -> f32 {
	length * width * height
}



fn main() {
	let mut v: Vec<f32> = vec![];

	for _ in 0..3 {
		let mut i = String::new();
		
		io::stdin()
			.read_line(&mut i)
			.expect("Failed to read line");
		
			let i: f32 = i.trim().parse().expect("Please  type a number");
		v.push(i);
	}

	println!("{}", get_volume_of_cuboid(v[0], v[1], v[2]));
}