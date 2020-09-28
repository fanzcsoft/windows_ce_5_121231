//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// This source code is licensed under Microsoft Shared Source License
// Version 1.0 for Windows CE.
// For a copy of the license visit http://go.microsoft.com/fwlink/?LinkId=3223.
//
// To be included from ..\TestCases.h only

#pragma once

//
// Test function prototype
//
TESTPROCAPI FogTest(LPTESTCASEARGS pTestCaseArgs);

//
// Number of frames generated by each call to test function
//
#define D3DMQA_FOGTEST_FRAMECOUNT 1

//
// Test Ordinal Extents
//
#define D3DMQA_FOGTEST_COUNT                            161
#define D3DMQA_FOGTEST_BASE                             700
#define D3DMQA_FOGTEST_MAX                              (D3DMQA_FOGTEST_BASE+D3DMQA_FOGTEST_COUNT-1)

//
// Test Ordinal Extents
//
#define D3DMQA_PIXELFOGTEST_COUNT                        61
#define D3DMQA_PIXELFOGTEST_BASE                        700
#define D3DMQA_PIXELFOGTEST_MAX                         (D3DMQA_PIXELFOGTEST_BASE+D3DMQA_PIXELFOGTEST_COUNT-1)


//
// Test Ordinal Extents
//
#define D3DMQA_VERTEXFOGTEST_COUNT                       61
#define D3DMQA_VERTEXFOGTEST_BASE                       800
#define D3DMQA_VERTEXFOGTEST_MAX                        (D3DMQA_VERTEXFOGTEST_BASE+D3DMQA_VERTEXFOGTEST_COUNT-1)