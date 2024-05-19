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
    let t = parset!(u64).0;
    for _x in 0..t {
        let mut x = parset!(u64).0;
        x +=1;
        while (x*x*x) %1000 != 888{
            x +=1;
        }
        println!("{}",x);
    }
}
