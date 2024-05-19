use std::io;

macro_rules! parset {
    ($($t: ty),+) => ({
        let mut a_str = String::new();
        io::stdin().read_line(&mut a_str).expect("read error");
        let mut a_iter = a_str.split_whitespace();
        (
            $(
            a_iter.next().unwrap().parse::<$t>().expect("parse error"),
            )+
        )
    })
}

fn main() {
    let s = parset!(u32).0;
    let mut v:Vec<u32> = Vec::new();
    for _i in 0..s {
        v.push(parset!(u32).0);
    }
    v.sort();
    for el in v{
        println!("{}",el);
    }
}
