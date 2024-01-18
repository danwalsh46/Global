<SCRIPT LANGUAGE=VBScript RUNAT=Server>
SUB Session_OnStart
    Call VDFSessionManager.StartVDFSession(Session.SessionID)
    Session.Timeout=1
END SUB
</SCRIPT>

<SCRIPT LANGUAGE=VBScript RUNAT=Server>
SUB Application_OnStart
    Application("hSessionMngr")=VDFSessionManager.Initialize("ReplaceThisWorkspace")
    VDFSessionManager.FileFieldSeparator="__"
END SUB
</SCRIPT>

<SCRIPT LANGUAGE=VBScript RUNAT=Server>
SUB Application_OnEnd
    Call VDFSessionManager.Uninitialize()
END SUB
</SCRIPT>

<SCRIPT LANGUAGE=VBScript RUNAT=Server>
SUB Session_OnEnd
    Call VDFSessionManager.EndVDFSession(Session.SessionID)
END SUB
</SCRIPT>

