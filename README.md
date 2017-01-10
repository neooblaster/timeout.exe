# timeout.exe

I create a little window tool to execute any windows command after the specified delay

# Usage :

~/ timeout.exe &lt;delay&gt; &lt;command&gt;  
&lt;delay&gt; is the time to wait before to launch <command>.  
&lt;command&gt; is the command string you want to execute.  

# Example 

This command will put you computer in hibernate mode :  
~/ timeout 60 "rundll32.exe powrprof.dll,SetSuspendState 0,1,0"
