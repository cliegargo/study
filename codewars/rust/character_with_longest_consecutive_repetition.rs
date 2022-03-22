use std::io;
use std::collections::HashMap;


fn longest_repetition(s: &str) -> Option<(char, usize)> {
    let mut counter: HashMap<char, usize> = HashMap::new();

    for c in s.chars() {
        if counter.contains_key(&c) {
            *counter.get_mut(&c).unwrap() += 1;
        } else {
            counter.insert(c, 1);
        }
    }

    //let longest: Option<(char, usize)>;

    /*
    for (_k, _v) in counter.into_iter() {
        //let max = (counter.iter().max(), Some(v));
        //println!("-> {:?}", max);
        //println!("{}\t{}", k, v);
        //longest = counter.iter().max();
        println!("{:?}", counter.iter().max().unwrap());
    }
    */


    //println!("{:?}", counter.iter().max());

    counter.into_iter().max()
    //longest
}

fn main() {
    let mut s = String::new();

    io::stdin()
        .read_line(&mut s)
        .expect("Failed to read line");

    println!("{:?}", longest_repetition(&s));
}
