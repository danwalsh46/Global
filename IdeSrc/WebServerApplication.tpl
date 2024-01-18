//AB/ Project My Web Application
//AB/ Object prj is a WebApp_Project
//AB/     Set Size to 130 200
//AB/     Set GenerateFileName To "WebApp.src"

//AB-StoreTopStart

//AB-StoreTopEnd

Object oApplication is a <IDE-ClassApplication>
    //AB/ Set Location to 4 5

    //AB-StoreTopStart

    //AB-StoreTopEnd

    Set Location to 2 3
    Set psProduct to ""
    Set psVersion to ""

    //AB-StoreStart

    Procedure OnCreate
        Send DoOpenWorkspace CURRENT$WORKSPACE
    End_Procedure
    //AB-StoreEnd

End_Object    // oApplication

Object oWebApp is a <IDE-ClassWebApp>
    Set Location to 4 30
    Set Size to 80 100

    //AB-ViewStart
    //AB-ViewEnd

    //AB-StoreStart

    //    Procedure OnattachProcess
    //       // perform any initialization for the newly attached process.
    //       Showln "attach"
    //    End_Procedure

    //    Procedure OnDetachProcess
    //       // perform any de-initialization for the process that is being detached.
    //       Showln "detach"
    //    End_Procedure

    //AB-StoreEnd

End_Object    // oWebApp


//AB-StoreStart

Send StartWebApp of oWebApp
//AB-StoreEnd

//AB/ End_Object    // prj