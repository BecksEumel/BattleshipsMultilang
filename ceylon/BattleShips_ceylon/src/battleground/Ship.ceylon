class Ship(Integer headx, Integer heady, Integer length, Boolean vertical)
{
	Integer _length = length;
	Boolean _vertical = vertical;
	Integer _headX = headx;
	Integer _headY = heady;
	variable List<PositionInfo>? _shipParts = LinkedList;
	
	void init () {
		if (_vertical){
			for (i in 0.._length-1){
			_shipParts.put = [PositionInfo(_headX, _headY+i)];
			}
		}
		else{
			
		}		
	}
}