function foo(x: int): int {
  var result: int = 1;
  for (var i = 1; i <= x; i++) {
    result *= i;
  }
  return result;
}

function main(): void {
  echo foo(5);
}
This iterative implementation avoids unbounded recursion and thus prevents stack overflow.  The solution directly calculates the factorial avoiding the recursive calls, making it safe and efficient for large numbers.