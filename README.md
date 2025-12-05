# C Project

This repository contains simple C files: `hi.c` and `this.c`.

Build instructions (MinGW / gcc):

```powershell
# build
C:\MinGW\bin\gcc.exe hi.c -o hi.exe
C:\MinGW\bin\gcc.exe this.c -o this.exe
```

How to push to GitHub (summary):
1. Initialize repo locally, add files, commit.
2. Create a remote repository on GitHub (via web UI or `gh repo create`).
3. Add remote and push: `git remote add origin <URL>` then `git push -u origin main`.

If you want, I can create the remote for you if you have the GitHub CLI (`gh`) and are signed-in.
