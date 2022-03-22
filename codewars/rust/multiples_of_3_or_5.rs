// https://www.codewars.com/kata/514b92a657cdc65150000006/train/rust


fn solution(num:i32) -> i32 {
	let mut sum:i32 = 0;

	for i in 0..num {
		if i % 3 == 0 || i % 5 == 0 {
			sum += i;
		}
	}

	return sum
}

fn main() {
	let mut line = String::new();
	std::io::stdin().read_line(&mut line).expect("X");
	let num:i32 = line.trim().parse().expect("X");

	println!("{}", solution(num));
}
