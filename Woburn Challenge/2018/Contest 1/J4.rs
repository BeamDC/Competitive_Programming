use std::io;
macro_rules! parseln {
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

fn smallest_dist(prev:i32, curr:i32) -> i32{
    let mut t:i32;
    t=prev.abs_diff(curr) as i32;
    if t>2 {t=2;}
    return t;
}

fn main() {
    let (_n,m) = parseln!(i32,i32);
    let mut prev:i32;
    let mut curr:i32;
    let mut d:i32 =2;
    prev = parseln!(i32).0;
    for _x in 1..m{
        curr = parseln!(i32).0;
        d+=smallest_dist(prev,curr);
        prev = curr;
    }
    print!("{}\n",d);
}
