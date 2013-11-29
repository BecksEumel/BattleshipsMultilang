class PositionInfo (Integer x, Integer y)
{
	Integer _x = x % 10;
	Integer _y = y % 10;
	
	shared Integer getX{
		return x;
	}
	
	shared Integer getY{
		return y;
	}
}