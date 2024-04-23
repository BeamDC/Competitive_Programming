use std::io;

fn main() {
    let mut n_in = String::new();
    let mut occ: [u32; 101] = [0; 101];
    loop{
        let n: i32;
        io::stdin()
        .read_line(&mut n_in)
        .expect("Failed to read line");
        n = n_in.trim().parse().expect("Input not an integer");
        if n == -1{break;}
        let i = n as usize;
        occ[i] += 1;
        n_in.clear();
    }
    let mut max: u32 = 0; 
    for x in 0..101{
        let i = x as usize;
        if occ[i] > max{max = occ[i];}
    }
    let mut modes = Vec::new();
    for x in 0..101{
        let i = x as usize;
        if occ[i] == max{modes.push(x)}
    }
    for x in modes{println!("{}",x);}
}
