
-- VHDL Instantiation Created from source file ALU.vhd -- 10:37:41 04/10/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT ALU
	PORT(
		OpSel : IN std_logic_vector(2 downto 0);
		Data : IN std_logic_vector(3 downto 0);
		Accumulator : IN std_logic_vector(3 downto 0);          
		Result : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_ALU: ALU PORT MAP(
		OpSel => ,
		Data => ,
		Accumulator => ,
		Result => 
	);


