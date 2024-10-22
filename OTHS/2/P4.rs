use std::collections::HashMap;
use std::io;

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
macro_rules! scanvec {
    ($t:ty) => {{
        let mut a_str = String::new();
        io::stdin().read_line(&mut a_str).expect("read error");
        let a_iter = a_str.split_whitespace();
        a_iter.map(|s| s.parse::<$t>().expect("parse error")).collect::<Vec<_>>()
    }};
}

fn main() {
    let (n,m,q) = scan!(u32, u32, u32);
    let mut vm = HashMap::new();
    for i in 1..=n {
        let r = scanvec!(u32);
        for j in 1..=m {
            vm.insert(r[(j-1) as usize], (i,j));
        }
    }
    for _ in 0..q {
        let (k,r1,c1,r2,c2) = scan!(u32,u32,u32,u32,u32);
        if !vm.contains_key(&k) { println!("no"); continue; }
        let valid_row = vm[&k].0 >= r1 && vm[&k].0 <= r2;
        let valid_col = vm[&k].1 >= c1 && vm[&k].1 <= c2;
        if valid_row && valid_col { println!("yes"); }
        else { println!("no"); }
    }
}
