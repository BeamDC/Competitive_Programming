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
    let s = parseln!(String).0;
    for _x in 0..5{
        let curr = parseln!(String).0;
        if s == curr {println!("Y");return;}
    }println!("N");
}
