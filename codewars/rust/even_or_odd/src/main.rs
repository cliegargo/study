// https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/rust


fn even_or_odd(i:i32) -> &'static str {
	if i % 2 == 0 {
		"Even"
	} else {
		"Odd"
	}
}

fn main() {
	let mut line = String::new();

	std::io::stdin().read_line(&mut line).expect("X");
	let i:i32 = line.trim().parse().expect("X");

	println!("{}", even_or_odd(i));
}
