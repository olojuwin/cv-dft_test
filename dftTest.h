
#ifndef DFT_TEST_H__
#define DFT_TEST_H__
#pragma once

#if defined(_WIN32)

#if !defined(DFT_API)
#define DFT_API extern "C" __declspec(dllimport)
#endif  // #if !defined(DFT_API)
#define CALLBACK    __stdcall

#elif defined(__linux__)

#define CALLBACK
#if !defined(DFT_API)
#define DFT_API
#endif // #if !defined(DFT_API)
#endif // #if defined(_WIN32)

extern "C"{



//初始化接口
DFT_API int dft_test();


}

#endif // DFT_TEST_H__
