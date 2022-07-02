// https://www.codewars.com/kata/515e271a311df0350d00000f/train/rust


fn square_sum(vec: Vec<i32>) -> i32 {
	vec.iter().map(|i| i.pow(2)).sum()
}

fn main() {
	//let vec = Vec::from([1, 2]);
	let vec = Vec::from([5, 3, 4]);

	println!("{}", square_sum(vec));
}
