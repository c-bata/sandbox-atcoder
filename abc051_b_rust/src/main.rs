use std::io;

// https://atcoder.jp/contests/abc051/tasks/abc051_b
// https://qiita.com/hatoo@github/items/fa14ad36a1b568d14f3e

fn main() {
    let mut buf: String = String::new();
    io::stdin().read_line(&mut buf).unwrap();

    let mut iter = buf.split_whitespace();
    let k: usize = iter.next().unwrap().parse().unwrap();
    let s: usize = iter.next().unwrap().parse().unwrap();

    let mut pattern = 0;
    for z in 0..(k+1) {
        for x in 0..(k+1) {
            let f = s as i16;
            let g = (z + x) as i16;
            let y = f-g;
            if (y >= 0) && (y <= k as i16) {
                pattern += 1;
            }
        }
    }
    println!("{}", pattern);
}
