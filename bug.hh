function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code will produce a stack overflow error for large inputs due to the recursive nature of the factorial calculation.  Hack's lack of tail call optimization exacerbates this issue. For large inputs, the function will keep calling itself until the stack overflows.