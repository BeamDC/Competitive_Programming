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
    let (n,m) = parseln!(u32,u32);
    let mut t:u32=0;

    for _x in 0..n{
        let a = parseln!(u32).0;
        if a<= m { t += a; }
    }
    println!("{}",t);
}
