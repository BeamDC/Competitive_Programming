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
    let a = parseln!(f64).0;
    let b = parseln!(f64).0;
    if b==0.0 && a==0.0{print!("indeterminate");return;}
    if a==0.0{print!("undefined");return;}
    print!("{:.2}",(b*-1.0)/a);
}
