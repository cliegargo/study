// https://www.codewars.com/kata/559a28007caad2ac4e000083/train/rust


fn perimeter(n: u64) -> u64 {
    let mut f_term = 1;
    let mut s_term = 1;
    let mut n_term;
    let mut sum = f_term + s_term;

    for _i in 2..n + 1 {
        n_term = f_term + s_term;
        s_term = f_term;
        f_term = n_term;
        sum += n_term;
    }

    return sum * 4;

}

fn main() {
    let mut input = String::new();

    std::io::stdin().
        read_line(&mut input).
        expect("X");
    let n:u64 = input.trim().
        parse().
        expect("X");

    println!("{}", perimeter(n));
}
