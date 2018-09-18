# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\Users\Hiro\OneDrive\Documents\PSoC\CY8C3246\test_01\test_01.cydsn\test_01.cyprj
# Date: Tue, 18 Sep 2018 17:40:01 GMT
#set_units -time ns
create_clock -name {CyXTAL} -period 50 -waveform {0 25} [list [get_pins {ClockBlock/xtal}]]
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyPLL_OUT} -period 20 -waveform {0 10} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 20 -waveform {0 10} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {CyIMO} -period 50 -waveform {0 25} [list [get_pins {ClockBlock/imo}]]


# Component constraints for D:\Users\Hiro\OneDrive\Documents\PSoC\CY8C3246\test_01\test_01.cydsn\TopDesign\TopDesign.cysch
# Project: D:\Users\Hiro\OneDrive\Documents\PSoC\CY8C3246\test_01\test_01.cydsn\test_01.cyprj
# Date: Tue, 18 Sep 2018 17:39:54 GMT
