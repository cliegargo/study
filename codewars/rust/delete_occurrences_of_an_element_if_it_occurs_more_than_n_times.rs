use std::collections::HashMap;

fn delete_nth(lst: &[u8], n: usize) -> Vec<u8> {
    let mut count = HashMap::new();

    let mut rem: Vec<u8> = Vec::new();

    for i in lst.iter() {
        *count.entry(i).or_insert(0) += 1;
    }

    println!("{}", n);

    for (k, v) in count {
        if v < n {
            rem.push(*k as u8);
        }
    }

    return rem.to_vec();
}

fn main() {
    let lst: Vec<u8> = [20,37,20,21].to_vec();
    let n: usize = 10;
    println!("{:?}", delete_nth(&lst, n));
}
