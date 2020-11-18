Imports System

Module Test
    Sub Main(args As String())
        Dim a = 10
        Dim b = 20
        swap(a, b)

        Console.WriteLine("a:" & a & " b:" & b)
    End Sub

    Sub swap(ByRef a As Integer, ByRef b As Integer)
        Dim temp = a
        a = b
        b = temp
    End Sub
End Module
