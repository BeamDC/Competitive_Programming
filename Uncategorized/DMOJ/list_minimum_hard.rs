#[macro_use] extern crate dmoj;

fn main() {
    let s = scan!(u32);
    let mut v = Vec::new();
    for _i in 0..s {
        let t = scan!(i64); 
        v.push(t);
    }
    v.sort();
    for el in v{
        println!("{}",el);
    }
}
