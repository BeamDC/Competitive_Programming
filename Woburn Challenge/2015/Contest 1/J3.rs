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
    let n = parseln!(u32).0;
    let mut l:u32=0;
    let mut s:u32=0;
    let mut t:u32=10;
    for _x in 0..n{
        let c = parseln!(u32).0;
        t+=c;
        if c>l{s=l;l=c;}
        else if c>s {s=c;}
    }
    println!("{}",t+l+s)
}
