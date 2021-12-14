library ieee;
use ieee.std_logic_1164.all;

entity smartHome is 
	port(heat: in std_logic;
	     move: in std_logic;
	     motor: out std_logic;
	     led: out std_logic);
end smartHome;

architecture arch of smartHome is
begin
	motor <= '1' when heat = '1' else '0';
	led <= '1' when move = '1' else '0';
end arch;