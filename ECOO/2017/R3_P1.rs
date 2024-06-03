#[macro_use] extern crate dmoj;

fn main() {
    for _ in 0..10{
        let (f,d) = scan!(usize, usize);
        let mut t: usize = 0;
        let mut sum: usize;
        let mut sales: Vec<Vec<usize>> = Vec::new();

        for _i in  0..d {
            let mut vec: Vec<usize> = Vec::new();
            for _j in 0..f {
                vec.push(scan!(usize));
            }
            sales.push(vec);
        }

        for i in  sales.iter() {
            sum = i.iter().sum();
            if sum%13 == 0 {t+=sum/13}; 
        }
        
        for i in  0..f {
            sum = 0;
            for j in 0..d {
                sum+=sales[j][i];
            }
            if sum%13 == 0 {t+=sum/13};
        }
        println!("{}",t);
    }
}
