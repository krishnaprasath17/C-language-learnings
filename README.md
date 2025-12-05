# C (small demo)

This repository contains two small C files:

- `hi.c` — prints a message
- `this.c` — prints "hi"

How to build (with MinGW/GCC on Windows):

```powershell
gcc hi.c -o hi.exe
gcc this.c -o this.exe
./hi.exe
./this.exe
```

To push this project to GitHub:

1. Create a new repository on GitHub (via the website or `gh repo create`).
2. Add the remote and push:

```powershell
git remote add origin https://github.com/<your-user>/<repo-name>.git
git branch -M main
git push -u origin main
```

Or, if you have the GitHub CLI installed and authenticated:

```powershell
gh auth login
gh repo create <repo-name> --public --source=. --remote=origin --push
```
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
