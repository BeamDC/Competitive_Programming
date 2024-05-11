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
    let w = parseln!(u32).0;
    let c = parseln!(u32).0;
    let mut s = "very";
    if w == 3 && c > 94 { s = "absolutely"; }
    else if w == 1 && c < 51 { s = "fairly"; }
    println!("C.C. is {} satisfied with her pizza.", s);
}
