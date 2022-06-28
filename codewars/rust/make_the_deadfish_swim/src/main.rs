// https://www.codewars.com/kata/51e0007c1f9378fa810002a9/train/rust


fn parse(code: &str) -> Vec<i32> {
    let mut arr: Vec<i32> = Vec::new();
    let mut count: i32 = 0;

    for ch in code.chars() {
        let _x = match ch {
            'i' => count += 1,
            'd' => count -= 1,
            's' => count = i32::pow(count, 2),
            'o' => arr.push(count),
            _ => ()
        };
    }

    return arr;
}

fn main() {
    let mut line = String::new();
    std::io::stdin().read_line(&mut line)
        .ok()
        .expect("X");
    println!("{:?}", parse(line.as_str()));
}
