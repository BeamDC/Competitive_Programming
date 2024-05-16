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

fn main() {
    let a = parseln!(u32).0;
    let m = parseln!(u32).0;
    let t = parseln!(u32).0;
    if a*m > t {println!("N");return;}
    println!("Y");
}
