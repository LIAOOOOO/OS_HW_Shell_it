# OS_HW_Shell_it

*在 Level1 中，本 Shell 應至少包含以下幾個基本功能：
1. 應該要有命令提示字元，並且在提示字元的前面加上 使用者帳號名稱及所在目錄的位
置。舉例：“ichenyeh@/home/OS/>”表示使用者名稱為 ichenyeh，所在目錄為路徑
是/home/OS 的資料夾內，注意，使用者名稱跟路徑都需要根據執行環境更新。

2. 可以接收並回應任意不帶參數的指令。舉例：
ichenyeh@/home/OS/> ls << 使用者輸入 ls 並按下 Enter
[CMD] ls << 你回應[CMD] + 使用者輸入的指令

3. 可以接收並任何帶有參數的指令。舉例：
ichenyeh@/home/OS/> ls -al << 使用者輸入 ls 並加上附加參數 "-al" 最後按下 Enter
[CMD] ls [ARGV] -al << 你回應[CMD] + 使用者輸入的指令 以及 [ARGV] + 參數列表
*多個參數間用,來間隔，舉例：
ichenyeh@/home/OS/>ls –al -ap
[CMD] ls [ARGV] –al, -ap

4. 可以透過特殊指令 exit 來離開這個 shell 並且印出離開訊息。舉例：
ichenyeh@/home/OS/> exit
ByeBye!
> （這邊回到使用者本來的 shell）

5. 提供使用者切換目錄的功能。舉例： cd.., cd [folder] ，以下為連續操作的舉例：
ichenyeh@/home/OS/> cd ..
ichenyeh@/home/> cd ABC
ichenyeh@/home/ABC/> cd /etc
ichenyeh@/etc/> exit
