#set curr_wave [current_wave_config]
#if { [string length $curr_wave] == 0 } {
#  if { [llength [get_objects]] > 0} {
#    add_wave /
#    set_property needs_save false [current_wave_config]
#  } else {
#     send_msg_id Add_Wave-1 WARNING "No top level signals found. Simulator will start without a wave window. If you want to open a wave window go to 'File->New Waveform Configuration' or type 'create_wave_config' in the TCL console."
#  }
#}

#run 1000ns

restart

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 4 us

add_force {/gate4a/a} -radix hex {1 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 4 us

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {1 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 4 us

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {1 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 4 us

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {1 0ns}
run 4 us

add_force {/gate4a/a} -radix hex {1 0ns}
add_force {/gate4a/b} -radix hex {0 0ns}
add_force {/gate4a/c} -radix hex {1 0ns}
add_force {/gate4a/d} -radix hex {0 0ns}
run 4 us

add_force {/gate4a/a} -radix hex {0 0ns}
add_force {/gate4a/b} -radix hex {1 0ns}
add_force {/gate4a/c} -radix hex {0 0ns}
add_force {/gate4a/d} -radix hex {1 0ns}
run 4 us

add_force {/gate4a/a} -radix hex {1 0ns}
add_force {/gate4a/b} -radix hex {1 0ns}
add_force {/gate4a/c} -radix hex {1 0ns}
add_force {/gate4a/d} -radix hex {1 0ns}
run 4 us