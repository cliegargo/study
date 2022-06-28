// https://www.codewars.com/kata/5977618080ef220766000022/train/rust


fn usdcny(usd:u16) -> String {
	let usd:f32 = usd as f32;
	let conv:f32 = usd * 6.75 as f32;

	format!("{:.2} Chinese Yuan", conv)
}

fn main() {
	let mut line = String::new();
	std::io::stdin().read_line(&mut line).expect("X");
	let usd:u16 = line.trim().parse().expect("X");

	println!("{}", usdcny(usd));
}
