#[macro_use] extern crate dmoj; // fast I/O for dmoj submissions
use std::io;

// known amount of values, different types eg.(f64,String,i8)
// for unknown amount of values, scan!(vec<T>)
macro_rules! scan { 
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

//find gcd of two nums
fn gcd(mut a:u64,mut b:u64) -> u64{
    if a == 0 {
        return b;
    } else if b == 0 {
        return a;
    }
    let i = a.trailing_zeros();
    let j = b.trailing_zeros();
    let k:u32;
    if i<j{k=i}
    else {k=j}
    a >>= i;
    b >>= j;
    loop {
        if a > b {
            a^=b;b^=a;a^=b;
        }
        b -= a;
        if b == 0 {
            return a << k;
        }
        b >>= b.trailing_zeros();
    }
}

fn main() {}
