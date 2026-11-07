
@echo off
title LeetCode Daily Git Push

echo.
echo =====================================
echo       LEETCODE DAILY GIT PUSH
echo =====================================
echo.

:: Ask for problem details
set /p problemNumber=Enter LeetCode Problem Number: 
set /p problemTitle=Enter Problem Title: 

:: Validate inputs
if "%problemNumber%"=="" (
    echo Error: Problem number cannot be empty.
    pause
    exit /b 1
)

if "%problemTitle%"=="" (
    echo Error: Problem title cannot be empty.
    pause
    exit /b 1
)

:: Git add
echo.
echo [1/3] Adding files...
git add -A

if errorlevel 1 goto error

:: Git commit
echo.
echo [2/3] Creating commit...
git commit -m "LeetCode Daily %problemNumber% - %problemTitle%"

if errorlevel 1 goto error

:: Git push
echo.
echo [3/3] Pushing to GitHub...
git push origin main

if errorlevel 1 goto error

echo.
echo =====================================
echo       SUCCESSFULLY PUSHED!
echo =====================================
echo Problem: %problemNumber% - %problemTitle%
echo.
pause
exit /b 0

:error
echo.
echo =====================================
echo            GIT ERROR!
echo =====================================
echo Please check the error above.
echo.
pause
exit /b 1
