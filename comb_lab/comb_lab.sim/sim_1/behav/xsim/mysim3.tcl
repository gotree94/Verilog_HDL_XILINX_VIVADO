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

add_force {/mux4/d0} -radix hex {0 0ns} {1 1us} -repeat_every 2us
add_force {/mux4/d1} -radix hex {0 0ns} {1 2us} -repeat_every 4us
add_force {/mux4/d2} -radix hex {0 0ns} {1 4us} -repeat_every 8us
add_force {/mux4/d3} -radix hex {0 0ns} {1 16us} -repeat_every 32us
add_force {/mux4/sel} -radix hex {0 0ns} {1 32us} -repeat_every 64us
run 64 us

