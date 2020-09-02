// On edit, add scroll event handler, and display combobox
protected override void Edit(System.Windows.Forms.CurrencyManager 
    source, int rowNum, System.Drawing.Rectangle bounds, bool readOnly, 
    string instantText, bool cellIsVisible)
{
    //Call base method which is important else 
    //edit will not function properly
    base.Edit(source, rowNum, bounds, readOnly, 
                     instantText, cellIsVisible);
// Check if cell is not empty
    if(this.TextBox.Text.TrimEnd()!="")
    {
        // Get Column position

        int dataValue = Int32.Parse(this.TextBox.Text);
        int pos = this.MappingName.LastIndexOf("col");
        if(pos > -1)
        {
            string colIndex = this.MappingName.Substring(pos+3);
            int colPos = Int32.Parse(colIndex);
            // Check whether it is answer spot.
            _answerPostion=_game.CheckIfAnswerPosition(rowNum,
                                              colPos,dataValue);
        }
    }
else
    {
         _answerPostion =false;
    }
    if (!readOnly && cellIsVisible)
    {        
        // Save current row in the DataGrid and currency manager 
        // associated with the data source for the DataGrid
        this._currentRow = rowNum;
        this.cm = source;
