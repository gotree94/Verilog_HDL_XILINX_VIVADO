restart

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 2 us

add_force {/gate4a/a} -radix hex {1 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 2 us

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {1 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 2 us

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {1 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 2 us

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {1 0ns}
run 2 us

add_force {/gate4a/a} -radix hex {1 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {1 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 2 us

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {1 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {1 0ns}
run 2 us

add_force {/gate4a/a} -radix hex {1 0ns}
add_force {/gate4a/b} -radix hex {1 0ns}
add_force {/gate4a/c} -radix hex {1 0ns}
add_force {/gate4a/d} -radix hex {1 0ns}
run 2 us