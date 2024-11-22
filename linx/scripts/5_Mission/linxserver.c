modded class MissionServer
{
    override void OnInit()
    {
        super.OnInit();

        // Mod Init        
        Print("[LINX] Linx Init called.");
        
        // Define our path in Profiles 
        string linxFolder = "$profile:\\Linx";
        
        if (!FileExist(linxFolder))
        {
            Print("[LINX] Creating Linx folder in profiles directory.");
            MakeDirectory(linxFolder);
        }
        else
        {
            Print("[LINX] Linx folder already exists.");
        }

        string linxFilePath = linxFolder + "\\linx.lx";
        
        // Store arbitrary data in linx.lx, just show we can hold a file there
        FileHandle file = OpenFile(linxFilePath, FileMode.WRITE);
        if (file != 0)
        {
            FPrintln(file, "Random text: This is some random content stored in linx.lx!");
            CloseFile(file);
            
            // Confirm that linx.lx was successfully created.
            Print("[LINX] linx.lx file has been created in the Linx folder.");
        }
        else
        {
            Print("[LINX] Failed to create linx.lx file.");
        }
    }
}
