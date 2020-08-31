private void DataGrid1_Paint(object sender, 
            System.Windows.Forms.PaintEventArgs e)
{
    point currentPoint = new Point(0,0);
    Size size = new Size(PREFERRED_COLUMN_WIDTH*3,
                             PREFERRED_ROW_HEIGHT*3);
    Pen myPen = new Pen(Color.Red,3);
    for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            currentPoint.X = i*PREFERRED_ROW_HEIGHT*3;
            currentPoint.Y = j*PREFERRED_ROW_HEIGHT*3;
            Rectangle rect = new Rectangle(currentPoint,size);
            e.Graphics.DrawRectangle(myPen,rect);
        }
     }
}
