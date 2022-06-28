// https://www.codewars.com/kata/5861d28f124b35723e00005e/train/rust


fn zero_fuel(distance_to_pump: u32, mpg: u32, gallons: u32) -> bool {
    if (distance_to_pump / gallons) > mpg {
        return false;
    }

    return true;
}

fn main() {
	let mut var1 = String::new();
	let mut var2 = String::new();
	let mut var3 = String::new();

	std::io::stdin().read_line(&mut var1).expect("X");
	std::io::stdin().read_line(&mut var2).expect("X");
	std::io::stdin().read_line(&mut var3).expect("X");
	let distance_to_pump: u32 = var1.trim().parse().expect("X");
	let mpg: u32 = var2.trim().parse().expect("X");
	let gallons: u32 = var3.trim().parse().expect("X");

    println!("{}", zero_fuel(distance_to_pump, mpg, gallons));
}
