private void CurrentSet_ColumnChanging(object sender, 
                System.Data.DataColumnChangeEventArgs e) 
{
    try
    {
        lblStatus.Text="";
        int rowPos = dataGrid1.CurrentCell.RowNumber;
        string currentNumber = e.ProposedValue as string;
        
        int number =Int32.Parse(currentNumber);
        if((number < 1)||(number >9))
        {
            string errorMessage=
                "Number should be between 1 and 9";
            e.Row.SetColumnError(e.Column,errorMessage);
        }
else
        {
            int col =e.Column.Ordinal;
            bool answerChanged = 
                _newGame.CheckForAnswerChange(rowPos,col,number);
            
            if(answerChanged)
            {
                lblStatus.Text="You can't change the answer";
                e.ProposedValue = e.Row[e.Column];

            }else if(_newGame.CheckForDuplicate(rowPos,col,number)){
               e.Row.SetColumnError(e.Column,"Number is Duplicate");
            
            }else
             {
                e.Row.ClearErrors();
                bool answerComplete= IsSolutionComplete();
                if(answerComplete)
                {
                  lblStatus.Text= "Great!!! You have done it";
                }
            }
        }
    }
    catch(Exception ex)
    {
        e.Row.SetColumnError(e.Column,
             "Enter valid Number between 1 & 9");
    }
}
